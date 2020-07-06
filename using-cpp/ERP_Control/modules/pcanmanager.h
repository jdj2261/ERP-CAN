#ifndef PCanManager_H
#define PCanManager_H
#include "canmanager.h"
#include <QTimer>

class PCanManager : public CanManager
{
    Q_OBJECT
public:
    enum MoState {ABNORMAL, INITIAL, NORMAL};
    Q_ENUM(MoState)
    enum MoSeq{NONE, AUTO_RDY, AUTO_ALL, AUTO_ACC, AUTO_EPS};
    Q_ENUM(MoSeq)
    enum Gear{P = 0x00, R = 0x70, N = 0x60, D = 0x50};
    Q_ENUM(Gear)

    Q_PROPERTY(bool Active READ Active WRITE setActive NOTIFY ActiveChanged)

    Q_PROPERTY(bool EpsEnable READ EpsEnable WRITE setEpsEnable NOTIFY EpsEnableChanged)
    Q_PROPERTY(bool AccEnable READ AccEnable WRITE setAccEnable NOTIFY AccEnableChanged)
    Q_PROPERTY(bool AebEnable READ AebEnable WRITE setAebEnable NOTIFY AebEnableChanged)
    Q_PROPERTY(quint8 AlvCnt READ AlvCnt NOTIFY AlvCntChanged)
    Q_PROPERTY(bool EpsOverrideIgnore READ EpsOverrideIgnore
               WRITE setEpsOverrideIgnore NOTIFY EpsOverrideIgnoreChanged)

    Q_PROPERTY(double SteerAngle READ SteerAngle
               WRITE setSteerAngle NOTIFY SteerAngleChanged)
    Q_PROPERTY(double Speed READ Speed
               WRITE setSpeed NOTIFY SpeedChanged)
    Q_PROPERTY(double VehicleAccel READ VehicleAccel
               WRITE setVehicleAccel NOTIFY VehicleAccelChanged)
    Q_PROPERTY(double AebDecRate READ AebDecRate
               WRITE setAebDecRate NOTIFY AebDecRateChanged)

    Q_PROPERTY(MoSeq MoMode READ MoMode NOTIFY MoModeChanged)
    Q_PROPERTY(MoState MoCtrlState READ MoCtrlState
               NOTIFY MoCtrlStateChanged)
    Q_PROPERTY(double VehicleSpeed READ VehicleSpeed
               NOTIFY VehicleSpeedChanged)
    Q_PROPERTY(double TargetSpeed READ TargetSpeed
               WRITE setTargetSpeed NOTIFY TargetSpeedChanged)
    Q_PROPERTY(Gear GearSelDisp READ GearSelDisp
               NOTIFY GearSelDispChanged)

    explicit PCanManager(QObject *parent = nullptr);
    virtual ~PCanManager() {}

private:
    bool m_EpsEnable;
    bool m_AccEnable;
    bool m_AebEnable;
    quint8 m_AlvCnt;
    bool m_EpsOverrideIgnore;
    double m_SteerAngle;
    double m_Speed;
    double m_VehicleAccel;
    double m_AebDecRate;
    MoSeq m_MoMode;
    MoState m_MoCtrlState;
    double m_FdVehicleSpeed;
    double m_TargetVehicleSpeed;
    Gear m_GearSelDisp;

    bool bActive;
    QTimer *timerSendMsg;

public:
    bool Active() const { return bActive;}
    bool EpsEnable() const { return m_EpsEnable;}
    bool AccEnable() const { return m_AccEnable;}
    bool AebEnable() const { return m_AebEnable;}
    quint8 AlvCnt() const { return m_AlvCnt;}
    bool EpsOverrideIgnore() const { return m_EpsOverrideIgnore;}
    double SteerAngle() const { return m_SteerAngle;}
    double Speed() const { return m_Speed;}
    double VehicleAccel() const { return m_VehicleAccel;}
    double AebDecRate() const { return m_AebDecRate;}
    MoSeq MoMode() const { return m_MoMode;}
    MoState MoCtrlState() const { return m_MoCtrlState;}
    double VehicleSpeed() const { return m_FdVehicleSpeed;}
    double TargetSpeed() const { return m_TargetVehicleSpeed;}
    Gear GearSelDisp() const { return m_GearSelDisp;}

    Q_INVOKABLE void setActive(const bool &);
    Q_INVOKABLE void setEpsEnable(const bool &);
    Q_INVOKABLE void setAccEnable(const bool &);
    Q_INVOKABLE void setAebEnable(const bool &);
    Q_INVOKABLE void setEpsOverrideIgnore(const bool &);
    Q_INVOKABLE void setSteerAngle(const double &);
    Q_INVOKABLE void setSpeed(const double &);
    Q_INVOKABLE void setVehicleAccel(const double &);
    Q_INVOKABLE void setAebDecRate(const double &);
    Q_INVOKABLE void setTargetSpeed(const double &);

    Q_INVOKABLE void resetAlvCnt();
    Q_INVOKABLE void incAlvCnt();

signals:
    void ActiveChanged();
    void EpsEnableChanged();
    void EpsOverrideIgnoreChanged();
    void AccEnableChanged();
    void AebEnableChanged();
    void AlvCntChanged();
    void SteerAngleChanged();
    void SpeedChanged();
    void VehicleAccelChanged();
    void AebDecRateChanged();
    void MoCtrlStateChanged();
    void MoModeChanged();
    void VehicleSpeedChanged();
    void TargetSpeedChanged();
    void GearSelDispChanged();


public slots:

private slots:
    void sendCmdMessage();
    void onActiveChanged();

};
#endif // PCanManager_H
