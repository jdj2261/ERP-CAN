#include "pcanmanager.h"

#define T true

//QString CanManager::m_TextArea;
//extern QCanBusDevice *send_device;
//extern QCanBusFrame m_busFrame;
//QCanBusFrame CanManager::m_busFrame;

PCanManager::PCanManager(QObject *parent):
    m_Cycle(1000),
    m_ActiveEnable(false),
    m_AutoEnable(false),
    m_EstopEnable(false),
    m_SteerEnable(false),
    m_SpeedEnable(false),
    m_BrakeEnable(false),
    m_GearDrive(false),
    m_GearNeutral(false),
    m_GearReverse(false),
    m_Gear(N),
    m_SteerAngle(0),
    m_Speed(0),
    m_Brake(0),
    m_str_QMorA("0"),
    m_str_ESTOP("0"),
    m_str_GEAR("0"),
    m_str_SPEED("0"),
    m_str_STEER("0"),
    m_str_BRAKE("0"),
    m_str_ALIVE("0")
{
    //    m_AlvCnt = 0;
    //    timerSendMsg = new QTimer(this);
    //    timerSendMsg->setTimerType(Qt::PreciseTimer);
    //    connect(timerSendMsg, SIGNAL(timeout()), this, SLOT(sendCmdMessage()));
}

void PCanManager::setActive(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);

    m_ActiveEnable = arg;
    emit ActiveChanged();


}

void PCanManager::setAutoEnable(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);

    m_AutoEnable = arg;
    emit AutoEnableChanged();

    m_str_QMorA = QString::number(arg,16);
    emit str_QMorAChanged();
}

void PCanManager::setEstopEnable(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);

    m_EstopEnable = arg;
    emit EstopEnableChanged();

    m_str_ESTOP = QString::number(arg,16);
    emit str_ESTOPChanged();
}

void PCanManager::setSteerEnable(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
        m_SteerEnable = arg;
        emit SteerEnableChanged();

}

void PCanManager::setSpeedEnable(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
        m_SpeedEnable = arg;
        emit SpeedEnableChanged();

}

void PCanManager::setBrakeEnable(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    if(!m_BrakeEnable)
    {
        m_BrakeEnable = arg;
        emit BrakeEnableChanged();
    }
}

void PCanManager::setGearDrive(const bool &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);

//    m_GearDrive = arg;
    emit GearDriveChanged();

    m_str_GEAR = QString::number(D,16);
    m_Gear = D;
    emit str_GEARChanged();
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
    m_str_GEAR = QString::number(N,16);
    m_Gear = N;
    emit str_GEARChanged();
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
    m_str_GEAR = QString::number(R,16);
    m_Gear = R;
    emit str_GEARChanged();
}

void PCanManager::setSteerAngle(const qint16 &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
//    std::cout << " test 1 : " << getData(CanManager::m_TextArea).toStdString() << std::endl;
//    std::cout << " test 2 : " << a->ShowData().toStdString() << std::endl;
//    std::cout << " test 3 : " << m_SteerAngle << std::endl;

    m_SteerAngle = arg;
    setData(m_SteerAngle);
    emit SteerAngleChanged();

    m_str_STEER = QString::number((arg*STEER_FACTOR) & 0xffff, 16);
    m_modified_str_SteerAngle = QString::number((arg*STEER_FACTOR));
    emit str_STEERChanged();
}
void PCanManager::setSpeed(const quint16 &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_Speed = arg;
    //    std::cout << " test" << getData(CanManager::m_TextArea).toStdString() << std::endl;
    emit SpeedChanged();

    m_str_SPEED = QString::number(arg*SPEED_FACTOR,16);
    m_modified_str_Speed = QString::number((arg*SPEED_FACTOR));
    emit str_SPEEDChanged();
}

void PCanManager::setBrake(const quint8 &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_Brake = arg;
    //    std::cout << " test" << getData(CanManager::m_TextArea).toStdString() << std::endl;
    emit BrakeChanged();

    m_str_BRAKE = QString::number(arg,16);
    m_modified_str_Brake = QString::number(arg);
    emit str_BRAKEChanged();
}


void PCanManager::setCycle(const quint16 &arg)
{
    if(T)
        qDebug() << tr("%1 > arg : %2").arg(__func__).arg(arg);
    m_Cycle = arg;

}


//void PCanManager::sendCmdMessage()
//{
//    //check acc, aeb, eps state
//    if(T)
//        qDebug() << tr("%1 >").arg(__func__);
//}

void PCanManager::run()
{

    qDebug() << "Inside the worker thread!";
    quint8 alive_cnt = 0;

    while(1)
    {
        alive_cnt++;

        m_pc2erp.MorA = m_AutoEnable;
        m_pc2erp.ESTOP = m_EstopEnable;
        m_pc2erp.GEAR = m_Gear;
        m_pc2erp.speed._speed = m_Speed * SPEED_FACTOR;
        m_pc2erp.steer._steer = (m_SteerAngle * STEER_FACTOR) ;

        m_pc2erp.steer.steer[0] = (m_pc2erp.steer._steer & 0xff) ;
        m_pc2erp.steer.steer[1] = (m_pc2erp.steer._steer & 0xff00) >> 8;

        m_pc2erp.brake = m_Brake;
        std::cout <<" MorA: "  << +m_pc2erp.MorA
                  <<" ESTOP: " << +m_pc2erp.ESTOP
                  <<" GEAR: "  << +m_pc2erp.GEAR
                  <<" speed: " << m_pc2erp.speed._speed
                  <<" steer: " << m_pc2erp.steer._steer
                  <<std::hex<<" steer[0]: " << +m_pc2erp.steer.steer[0]
                  <<std::hex<<" steer[1]: " << +m_pc2erp.steer.steer[1]
                  <<" brake: " << +m_pc2erp.brake
                  <<" alive: " << +alive_cnt
                  << std::endl;

        m_str_ALIVE = QString::number(alive_cnt,16);
        emit str_ALIVEChanged();

        msleep(m_Cycle);

    }

}




