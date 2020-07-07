#include "canmanager.h"
#include <QFile>
#include <QCanBus>
#include <QCanBusFrame>
#include <QCloseEvent>
#include <QDesktopServices>
#include <QTimer>
#include <iostream>

QCanBusDevice *CanManager::send_device;

CanManager::CanManager(QObject *parent) :
    QObject(parent),
    m_canDevice(nullptr)
{
    //init can bus with json or default value
    m_numberFramesWritten = 0;
//    m_canDevice = nullptr;
    pluginName = "peakcan";
    deviceInterfaceName = "usb0";
//    connectDevice();
}

void CanManager::processErrors(QCanBusDevice::CanBusError error) const
{
    switch (error) {
    case QCanBusDevice::ReadError:
    case QCanBusDevice::WriteError:
    case QCanBusDevice::ConnectionError:
    case QCanBusDevice::ConfigurationError:
    case QCanBusDevice::UnknownError:
//        qWarning() << "QCanBusError: " << m_canDevice->errorString().toLocal8Bit();
        break;
    default:
        break;
    }
}

void CanManager::connectDevice()
{


    QString errorString;

    m_canDevice = QCanBus::instance()->createDevice(
        pluginName, deviceInterfaceName, &errorString);
    if (!m_canDevice) {
        qWarning() << tr("Error creating device '%1', reason: '%2'")
                          .arg(pluginName).arg(errorString);
        return;
    }

    m_numberFramesWritten = 0;

    connect(m_canDevice, &QCanBusDevice::errorOccurred, this, &CanManager::processErrors);
    connect(m_canDevice, &QCanBusDevice::framesReceived, this, &CanManager::processReceivedFrames);
    connect(m_canDevice, &QCanBusDevice::framesWritten, this, &CanManager::processFramesWritten);
    send_device = m_canDevice;

// currently not support conf keys.
//    if (p.useConfigurationEnabled) {
//        for (const ConnectDialog::ConfigurationItem &item : p.configurations)
//            m_canDevice->setConfigurationParameter(item.first, item.second);
//    }

    if (!m_canDevice->connectDevice()) {
        qWarning() << tr("Connection error: %1").arg(m_canDevice->errorString());

        delete m_canDevice;
        m_canDevice = nullptr;
    } else {
        bitRate = m_canDevice->configurationParameter(QCanBusDevice::BitRateKey);
        if (bitRate.isValid()) {
            qDebug() << tr("Plugin: %1, connected to %2 at %3 kBit/s")
                    .arg(pluginName).arg(deviceInterfaceName)
                    .arg(bitRate.toInt() / 1000);
        } else {
            qDebug() << tr("Plugin: %1, connected to %2")
                    .arg(pluginName).arg(deviceInterfaceName);
        }
    }
}

static QString frameFlags(const QCanBusFrame &frame)
{
    QString result = QLatin1String(" --- ");

    if (frame.hasBitrateSwitch())
        result[1] = QLatin1Char('B');
    if (frame.hasErrorStateIndicator())
        result[2] = QLatin1Char('E');
    if (frame.hasLocalEcho())
        result[3] = QLatin1Char('L');

    return result;
}


void CanManager::processReceivedFrames()
{
    if (!m_canDevice)
        return;

    while (m_canDevice->framesAvailable()) {
        const QCanBusFrame frame = m_canDevice->readFrame();

        QString view;
        if (frame.frameType() == QCanBusFrame::ErrorFrame)
            view = m_canDevice->interpretErrorFrame(frame);
        else
            view = frame.toString();

        const QString time = QString::fromLatin1("%1.%2  ")
                .arg(frame.timeStamp().seconds(), 10, 10, QLatin1Char(' '))
                .arg(frame.timeStamp().microSeconds() / 100, 4, 10, QLatin1Char('0'));

        const QString flags = frameFlags(frame);

//        m_ui->receivedMessagesEdit->append(time + flags + view);
        m_TextArea = view;
//        std::cout << m_TextArea.toStdString() << std::endl;

//        buttontest();
        emit TextAreaChanged();

    }
}


void CanManager::disconnectDevice()
{
    if (!m_canDevice)
        return;

    m_canDevice->disconnectDevice();
    delete m_canDevice;
    m_canDevice = nullptr;
    qDebug() << tr("Disconnected");
}

void CanManager::processFramesWritten(qint64 count)
{
    m_numberFramesWritten += count;
    qDebug() << tr("%1 frames written").arg(m_numberFramesWritten);
}

void CanManager::sendRawFrame(const QCanBusFrame &frame) const
{
    printf("send \n");
    if (!send_device)
        return;
    printf("send12 \n");
    send_device->writeFrame(frame);
}

void CanManager::setFrameID(const QString &frameID)
{
    if(m_FrameID == frameID)
        return;
    m_FrameID = frameID;
    emit frameIDChanged(m_FrameID);

}
void CanManager::setFrameData(const QString &frameData)
{
    if(m_FrameData == frameData)
        return;
    m_FrameData = frameData;
    emit frameDataChanged(m_FrameData);
}

void CanManager::buttontest()
{
    std::cout << send_device << std::endl;

    /*
    --------------------------------------------------------------
    CANID RTR IDE DLC  D1   D2   D3   D4   D5  D6 D7 D8  Desc.
    0x181  0   0  5   0x20 0x00 0x00 0x01 0xff X  X  X  0~7ch ON
    0x181  0   0  5   0x20 0x00 0x00 0x01 0x00 X  X  X  0~7ch OFF
    0x181  0   0  5   0x20 0x00 0x00 0x01 0x01 X  X  X  0ch   ON
    0x181  0   0  5   0x20 0x00 0x00 0x01 0x02 X  X  X  1ch   ON
    --------------------------------------------------------------
    */

    qDebug()<<m_FrameID<<m_FrameData<<m_canDevice;

    QString id = m_FrameID;
    const uint frameId = id.toUInt(nullptr, 16);


    QString data = m_FrameData;
    const QByteArray payload = QByteArray::fromHex(data.remove(QLatin1Char(' ')).toLatin1());

    QByteArray ba_as_hex_string = payload.toHex();

    QString str = "";
    str.append(payload);

    uint num = frameId;
    std::cout << std::hex << num << std::endl;
    std::cout << ba_as_hex_string.toStdString() << std::endl;

    QCanBusFrame frame1 = QCanBusFrame(frameId, payload);


    sendRawFrame(frame1);


}

void CanManager::setTextArea(const QString &arg)
{
//    if(true)
//        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
////    m_TextArea += arg;
//    emit TextAreaChanged();
}
