#include "pcanmanager.h"
#include <iostream>
#include <string>
#define T true

QString CanManager::m_TextArea;
extern QCanBusDevice *send_device;
extern QCanBusFrame m_busFrame;
//QCanBusFrame CanManager::m_busFrame;

PCanManager::PCanManager(QObject *parent):
    m_ActiveEnable(false),
    m_AutoEnable(false),
    m_EstopEnable(false),
    m_SteerEnable(false),
    m_SpeedEnable(false),
    m_OverrideIgnore(false),
    m_GearDrive(false),
    m_GearNeutral(false),
    m_GearReverse(false),
    m_SteerAngle(0),
    m_Speed(0),
    m_Brake(0),
    m_QMorA("0"),
    m_ESTOP("0"),
    m_GEAR("0"),
    m_SPEED("0"),
    m_STEER("0"),
    m_BRAKE("0"),
    m_ALIVE("0")
{
    std::cout << (int)m_pc2erp.GEAR << std::endl;
    //    m_AlvCnt = 0;
    //    timerSendMsg = new QTimer(this);
    //    timerSendMsg->setTimerType(Qt::PreciseTimer);
    //    connect(timerSendMsg, SIGNAL(timeout()), this, SLOT(sendCmdMessage()));
}

void PCanManager::setActive(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_ActiveEnable)
    {
        m_ActiveEnable = arg;
        emit ActiveChanged();

        //        m_QMorA = QString::number(arg);
        //        emit QMorAChanged();
    }
}

void PCanManager::setAutoEnable(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_AutoEnable)
    {
        m_AutoEnable = arg;
        emit AutoEnableChanged();
    }
    m_QMorA = QString::number(arg);
    emit QMorAChanged();
}

void PCanManager::setEstopEnable(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_EstopEnable)
    {
        m_EstopEnable = arg;
        emit EstopEnableChanged();
    }
    m_ESTOP = QString::number(arg);
    emit ESTOPChanged();
}

void PCanManager::setSteerEnable(const bool &arg)
{
    if(T){
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
        //        std::cout << " test" << CanManager::m_TextArea.toStdString() << std::endl;
        //        std::cout << " test" << getData(CanManager::m_TextArea).toStdString() << std::endl;
    }
    if(!m_SteerEnable)
    {
        m_SteerEnable = arg;
        emit SteerEnableChanged();
    }
}

void PCanManager::setSpeedEnable(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_SpeedEnable)
    {
        m_SpeedEnable = arg;
        emit SpeedEnableChanged();
    }
}

void PCanManager::setOverrideIgnore(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_OverrideIgnore)
    {
        m_OverrideIgnore = arg;
        emit OverrideIgnoreChanged();
    }
}

void PCanManager::setGearDrive(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_GearDrive)
    {
        m_GearDrive = arg;
        emit GearDriveChanged();
    }
    m_GEAR = QString::number(D);
    emit GEARChanged();
}

void PCanManager::setGearNeutral(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_GearNeutral)
    {
        m_GearNeutral = arg;
        emit GearNeutralChanged();
    }
    m_GEAR = QString::number(N);
    emit GEARChanged();
}

void PCanManager::setGearReverse(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_GearReverse)
    {
        m_GearReverse = arg;
        emit GearReverseChanged();
    }
    m_GEAR = QString::number(R);
    emit GEARChanged();
}

void PCanManager::setSteerAngle(const double &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_SteerAngle = arg;

    setData(m_SteerAngle + m_Speed + m_Brake);

    std::cout << " test 1 : " << getData(CanManager::m_TextArea).toStdString() << std::endl;
    std::cout << " test 2 : " << a->ShowData().toStdString() << std::endl;
    std::cout << " test 3 : " << m_SteerAngle << std::endl;

    emit SteerAngleChanged();
}
void PCanManager::setSpeed(const quint16 &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_Speed = arg;
    //    std::cout << " test" << getData(CanManager::m_TextArea).toStdString() << std::endl;
    emit SpeedChanged();
    setData(m_SteerAngle + m_Speed + m_Brake);
}

void PCanManager::setBrake(const quint8 &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_Brake = arg;
    //    std::cout << " test" << getData(CanManager::m_TextArea).toStdString() << std::endl;
    emit BrakeChanged();
    setData(m_SteerAngle + m_Speed + m_Brake);
}


//void PCanManager::setQMorA(const QString &arg)
//{

//}


//void PCanManager::sendCmdMessage()
//{
//    //check acc, aeb, eps state
//    if(T)
//        qDebug() << tr("%1 >").arg(__func__);
//}

void PCanManager::run()
{

    qDebug() << "Inside the worker thread!";


    while(1)
    {

        m_pc2erp.MorA = m_QMorA.toInt();
        m_pc2erp.ESTOP = m_ESTOP.toInt();
        m_pc2erp.GEAR = m_GEAR.toInt();
        showData(m_pc2erp.MorA);
        showData(m_pc2erp.ESTOP);
        showData(m_pc2erp.GEAR);
//        std::cout << +m_pc2erp.MorA << std::endl;
//        std::cout << +m_pc2erp.ESTOP << std::endl;
//        std::cout << +m_pc2erp.GEAR << std::endl;
        QThread::msleep(20);
    }

}




