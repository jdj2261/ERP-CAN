#ifndef PCanManager_H
#define PCanManager_H
#include "canmanager.h"
#include <QTimer>
#include <QThread>
#include <QDebug>

//QString CanManager::m_TextArea;

class PCanManager : public QThread
{
    Q_OBJECT
public:

    enum Gear{D = 0x00, N = 0x04, R = 0x08};
    Q_ENUM(Gear)

    Q_PROPERTY(bool Active READ Active WRITE setActive NOTIFY ActiveChanged)
    Q_PROPERTY(bool AutoEnable READ AutoEnable
               WRITE setAutoEnable NOTIFY AutoEnableChanged)
    Q_PROPERTY(bool EstopEnable READ EstopEnable
               WRITE setEstopEnable NOTIFY EstopEnableChanged)
    Q_PROPERTY(bool SteerEnable READ SteerEnable
               WRITE setSteerEnable NOTIFY SteerEnableChanged)
    Q_PROPERTY(bool SpeedEnable READ SpeedEnable
               WRITE setSpeedEnable NOTIFY SpeedEnableChanged)
    Q_PROPERTY(bool OverrideIgnore READ OverrideIgnore
               WRITE setOverrideIgnore NOTIFY OverrideIgnoreChanged)

    Q_PROPERTY(bool GearDrive READ GearDrive
               WRITE setGearDrive NOTIFY GearDriveChanged)
    Q_PROPERTY(bool GearNeutral READ GearNeutral
               WRITE setGearNeutral NOTIFY GearNeutralChanged)
    Q_PROPERTY(bool GearReverse READ GearReverse
               WRITE setGearReverse NOTIFY GearReverseChanged)

    Q_PROPERTY(double SteerAngle READ SteerAngle
               WRITE setSteerAngle NOTIFY SteerAngleChanged)
    Q_PROPERTY(quint16 Speed READ Speed
               WRITE setSpeed NOTIFY SpeedChanged)
    Q_PROPERTY(quint8 Brake READ Brake
               WRITE setBrake NOTIFY BrakeChanged)


    Q_PROPERTY(quint8 AlvCnt READ AlvCnt NOTIFY AlvCntChanged)

    Q_PROPERTY(QVariant data READ getData WRITE setData NOTIFY dataChanged )

    explicit PCanManager(QObject *parent = nullptr);
    virtual ~PCanManager() {}


//    {
//        qDebug() << "Inside the worker thread!";
//        while(1){
//            for ( int i = 0; i < 50; ++i ) {
//                setData(i);
//                msleep( 50 );
//                0 ? i > 50: i;
//            }
//        }
//    }

private:
    bool m_ActiveEnable;
    bool m_AutoEnable;
    bool m_EstopEnable;
    bool m_SteerEnable;
    bool m_SpeedEnable;
    bool m_OverrideIgnore;
    bool m_GearDrive;
    bool m_GearNeutral;
    bool m_GearReverse;

    double m_SteerAngle;
    quint16 m_Speed;
    quint8 m_Brake;

    quint8 m_AlvCnt;
    Gear m_GearSelDisp;
    QTimer *timerSendMsg;

    const QString m_getData;
    QVariant data_{ "" };

public:
    bool Active() const {return m_ActiveEnable;}
    bool AutoEnable() const {return m_AutoEnable;}
    bool EstopEnable() const {return m_EstopEnable;}
    bool SteerEnable() const {return m_SteerEnable;}
    bool SpeedEnable() const {return m_SpeedEnable;}
    bool OverrideIgnore() const {return m_OverrideIgnore;}
    bool GearDrive() const {return m_GearDrive;}
    bool GearNeutral() const {return m_GearNeutral;}
    bool GearReverse() const {return m_GearReverse;}
    void run();

    QString getData(QString m_getData) const {return m_getData;}

    double SteerAngle() const {return m_SteerAngle;}
    quint16 Speed() const {return m_Speed;}
    quint8 Brake() const {return m_Brake;}

    Gear GearSelDisp() const {return m_GearSelDisp;}
    quint8 AlvCnt() const {return m_AlvCnt;}

    Q_INVOKABLE void setActive(const bool &);
    Q_INVOKABLE void setAutoEnable(const bool &);
    Q_INVOKABLE void setEstopEnable(const bool &);
    Q_INVOKABLE void setSteerEnable(const bool &);
    Q_INVOKABLE void setSpeedEnable(const bool &);
    Q_INVOKABLE void setOverrideIgnore(const bool &);
    Q_INVOKABLE void setGearDrive(const bool &);
    Q_INVOKABLE void setGearNeutral(const bool &);
    Q_INVOKABLE void setGearReverse(const bool &);

    Q_INVOKABLE void setSteerAngle(const double &);
    Q_INVOKABLE void setSpeed(const quint16 &);
    Q_INVOKABLE void setBrake(const quint8 &);

    Q_INVOKABLE void resetAlvCnt();
    Q_INVOKABLE void incAlvCnt();

    Q_INVOKABLE QVariant getData() const { return data_; }

signals:
    void ActiveChanged();
    void AutoEnableChanged();
    void EstopEnableChanged();
    void SteerEnableChanged();
    void SpeedEnableChanged();
    void OverrideIgnoreChanged();
    void GearDriveChanged();
    void GearNeutralChanged();
    void GearReverseChanged();
    void SteerAngleChanged();
    void SpeedChanged();
    void BrakeChanged();

    void GearSelDispChanged();
    void AlvCntChanged();
    void dataChanged( const QVariant data );


public slots:
    void setData( const QVariant data ) {
        if ( data != data_ ) {
            data_ = data;
            emit dataChanged( data_ );
        }
    }

private slots:
    void sendCmdMessage();
//    void onActiveChanged();

};
#endif // PCanManager_H
