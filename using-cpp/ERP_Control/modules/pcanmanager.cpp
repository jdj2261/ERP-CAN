#include "pcanmanager.h"
#include <iostream>
#define D true
PCanManager::PCanManager(QObject *parent) : CanManager (parent),
  m_EpsEnable(false),
  m_AccEnable(false),
  m_AebEnable(false),
  m_AlvCnt(0),
  m_EpsOverrideIgnore(false),
  m_SteerAngle(0),
  m_Speed(0),
  m_VehicleAccel(0),
  m_AebDecRate(0),
  m_MoMode(MoSeq::NONE),
  m_MoCtrlState(MoState::ABNORMAL),
  m_FdVehicleSpeed(0),
  m_TargetVehicleSpeed(0),
  m_GearSelDisp(Gear::P),
  bActive(false),
  timerSendMsg(nullptr)
{
    bActive = false;
    m_AlvCnt = 0;
    timerSendMsg = new QTimer(this);
    timerSendMsg->setTimerType(Qt::PreciseTimer);
    connect(timerSendMsg, SIGNAL(timeout()), this, SLOT(sendCmdMessage()));

//    processReceivedFrames();
//    connectDevice();
}
void PCanManager::incAlvCnt()
{
    ++m_AlvCnt;
    emit AlvCntChanged();
    if(D)
        qDebug() << tr("%1 > m_AlvCnt : %2").arg(__func__).arg(m_AlvCnt);
}
void PCanManager::resetAlvCnt()
{
    m_AlvCnt = 0;
    emit AlvCntChanged();
    if(D)
        qDebug() << tr("%1 > m_AlvCnt : %2").arg(__func__).arg(m_AlvCnt);
}
void PCanManager::setActive(const bool &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(bActive != arg)
    {
        bActive = arg;
        emit ActiveChanged();
    }

}
void PCanManager::setEpsEnable(const bool &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(m_EpsEnable != arg)
    {
        m_EpsEnable = arg;
        emit EpsEnableChanged();
    }
}
void PCanManager::setAccEnable(const bool &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(m_AccEnable != arg)
    {
        m_AccEnable = arg;
        emit AccEnableChanged();
    }
}
void PCanManager::setAebEnable(const bool &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(m_AebEnable != arg)
    {
        m_AebEnable = arg;
        emit AebEnableChanged();
    }
}
void PCanManager::setEpsOverrideIgnore(const bool &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(m_EpsOverrideIgnore != arg)
    {
        m_EpsOverrideIgnore = arg;

        emit EpsOverrideIgnoreChanged();
    }
}
void PCanManager::setSteerAngle(const double &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_SteerAngle = arg;

    emit SteerAngleChanged();
}
void PCanManager::setSpeed(const double &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_Speed = arg;
    emit SpeedChanged();
}
void PCanManager::setVehicleAccel(const double &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_VehicleAccel = arg;
    emit VehicleAccelChanged();

}
void PCanManager::setAebDecRate(const double &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_AebDecRate = arg;
    emit AebDecRateChanged();
}
void PCanManager::setTargetSpeed(const double &arg)
{
    if(D)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_TargetVehicleSpeed = arg;
    emit TargetSpeedChanged();
    //bind cluster speed display
    //implement discrete pd controller for velocity control
}

void PCanManager::sendCmdMessage()
{
    //check acc, aeb, eps state
    if(D)
        qDebug() << tr("%1 >").arg(__func__);
}
void PCanManager::onActiveChanged()
{
    if(D)
        qDebug() << tr("%1 > bActive : %2").arg(__func__).arg(bActive);
    if(bActive)
    {
        //TODO: CAN connect
        timerSendMsg->start(20);
    }
    else
    {
        //TODO: CAN disconnect
        timerSendMsg->stop();
    }
}

