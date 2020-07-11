#ifndef CANMANAGER_H
#define CANMANAGER_H

#include <QObject>
#include <QtSerialBus/QCanBus>
#include <QDebug>
#include <QJsonObject>
#include <QJsonDocument>
#include <QTimer>
#include <iostream>
#include <QThread>
#include <vector>
#include "pcanmanager.h"

const int8_t PACKET_SIZE = 8;
const QString PLUGNAME = "peakcan";
const QString InterFaceNAME = "usb0";

class CanManager : public QObject
{
    Q_OBJECT

public:
    explicit CanManager(QObject *parent = nullptr);
    virtual ~CanManager() {}

    PCanManager p_canManager;

    Q_PROPERTY(QString TextArea  READ getTextArea WRITE setTextArea NOTIFY TextAreaChanged)
    Q_PROPERTY(QString frameID   READ getframeID WRITE setFrameID NOTIFY frameIDChanged)
    Q_PROPERTY(QString frameData READ getframeData WRITE setFrameData NOTIFY frameDataChanged)

    Q_INVOKABLE void setTextArea(const QString &);
    Q_INVOKABLE void buttontest();

    QString getTextArea() const { return m_TextArea;}
    QString getframeID() const { return m_FrameID;}
    QString getframeData() const { return m_FrameData;}

    void setFrameID(const QString &frameID);
    void setFrameData(const QString &frameData);

    /* Can connect function */
    void connectDevice();
    void disconnectDevice();
    void processReceivedFrames(); //dbc parsing using GENEVI/CANdb
    void processErrors(QCanBusDevice::CanBusError) const;
    void processFramesWritten(qint64);
    void sendRawFrame(QCanBusFrame &frame) const;

    /* static */
    QString m_TextArea;
    static QCanBusFrame m_busFrame;
    static QString SendButtonID;
    static QCanBusDevice *send_device;


    /* test */
    QString ShowData()
    {
        std::cout << "CanManager Object!!" << std::endl;
//        std::cout << testID.toStdString() << std::endl;
        return SendButtonID;
    }

private:
    QCanBusDevice *m_canDevice;
//    QCanBusDevice *send_device;

    qint64 m_numberFramesWritten;
    QVariant bitRate;
    QString pluginName;
    QString deviceInterfaceName;

    QString m_FrameID;
    QString m_FrameData;

    const QCanBusFrame m_Frame;

    std::vector<quint8> m_can_packet;



    //Thread
    void run();

signals:
    void TextAreaChanged();
    void frameIDChanged(QString frameID);
    void frameDataChanged(QString frameData);

public slots:

};

#endif // CANMANAGER_H

