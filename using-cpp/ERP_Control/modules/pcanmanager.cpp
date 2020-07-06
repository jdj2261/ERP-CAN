#include "pcanmanager.h"
#include <iostream>
#define T true
PCanManager::PCanManager(QObject *parent) : CanManager (parent),
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
  timerSendMsg(nullptr)
{
    m_AlvCnt = 0;
    timerSendMsg = new QTimer(this);
    timerSendMsg->setTimerType(Qt::PreciseTimer);
    connect(timerSendMsg, SIGNAL(timeout()), this, SLOT(sendCmdMessage()));
}
void PCanManager::incAlvCnt()
{
    ++m_AlvCnt;
    emit AlvCntChanged();
    if(T)
        qDebug() << tr("%1 > m_AlvCnt : %2").arg(__func__).arg(m_AlvCnt);
}
void PCanManager::resetAlvCnt()
{
    m_AlvCnt = 0;
    emit AlvCntChanged();
    if(T)
        qDebug() << tr("%1 > m_AlvCnt : %2").arg(__func__).arg(m_AlvCnt);
}

void PCanManager::setActive(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_ActiveEnable)
    {
        m_ActiveEnable = arg;
        emit ActiveChanged();
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
}

void PCanManager::setSteerEnable(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
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
}

void PCanManager::setSteerAngle(const double &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_SteerAngle = arg;

    emit SteerAngleChanged();
}
void PCanManager::setSpeed(const quint16 &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_Speed = arg;
    emit SpeedChanged();
}
void PCanManager::setBrake(const quint8 &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_Brake = arg;
    emit BrakeChanged();

}


void PCanManager::sendCmdMessage()
{
    //check acc, aeb, eps state
    if(T)
        qDebug() << tr("%1 >").arg(__func__);
}



