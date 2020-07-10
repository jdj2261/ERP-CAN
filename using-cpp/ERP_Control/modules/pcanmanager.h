#ifndef PCanManager_H
#define PCanManager_H
#include "canmanager.h"
#include <QTimer>
#include <QThread>
#include <QDebug>

#define SPEED_FACTOR 10
#define STEER_FACTOR 71

typedef struct _pc_to_erp42
{
    quint8 MorA;
    quint8 ESTOP;
    quint8 GEAR;
    union speed{ quint8 speed[2]; quint16 _speed;}; union speed speed;
    union steer{ quint8 steer[2]; quint16 _steer;}; union steer steer;
    quint8 brake = 0;
    quint8 alive = 0;

}PC2ERP;

typedef struct _erp42_to_pc
{
    quint8 MorA = 0x00;
    quint8 ESTOP = 0x01;
    quint8 GEAR = 0x02;
    union speed{ quint8 speed[2]; quint16 _speed;}; union speed speed;
    union steer{ quint8 steer[2]; quint16 _steer;}; union steer steer;
    quint8 brake;
    quint8 alive;
}ERP2PC;

class PCanManager : public QThread
{

    Q_OBJECT

public:
    explicit PCanManager(QObject *parent = nullptr);
    virtual ~PCanManager() {}

    CanManager *a;

    enum Mode{Mannaul = 0x00, Auto = 0x01};
    enum Estop{Off = 0x00, On = 0x02};
    enum Gear{D = 0x00, N = 0x04, R = 0x08};

    Q_ENUM(Mode)
    Q_ENUM(Estop)
    Q_ENUM(Gear)

    Q_PROPERTY(bool Active READ getActive WRITE setActive NOTIFY ActiveChanged)
    Q_PROPERTY(bool AutoEnable READ getAutoEnable
               WRITE setAutoEnable NOTIFY AutoEnableChanged)
    Q_PROPERTY(bool EstopEnable READ getEstopEnable
               WRITE setEstopEnable NOTIFY EstopEnableChanged)
    Q_PROPERTY(bool SteerEnable READ getSteerEnable
               WRITE setSteerEnable NOTIFY SteerEnableChanged)
    Q_PROPERTY(bool SpeedEnable READ getSpeedEnable
               WRITE setSpeedEnable NOTIFY SpeedEnableChanged)
    Q_PROPERTY(bool BrakeEnable READ getBrakeEnable
               WRITE setBrakeEnable NOTIFY BrakeEnableChanged)
    Q_PROPERTY(bool GearDrive READ getGearDrive
               WRITE setGearDrive NOTIFY GearDriveChanged)
    Q_PROPERTY(bool GearNeutral READ getGearNeutral
               WRITE setGearNeutral NOTIFY GearNeutralChanged)
    Q_PROPERTY(bool GearReverse READ getGearReverse
               WRITE setGearReverse NOTIFY GearReverseChanged)
    Q_PROPERTY(qint16 SteerAngle READ getSteerAngle
               WRITE setSteerAngle NOTIFY SteerAngleChanged)
    Q_PROPERTY(quint16 Speed READ getSpeed
               WRITE setSpeed NOTIFY SpeedChanged)
    Q_PROPERTY(quint8 Brake READ getBrake
               WRITE setBrake NOTIFY BrakeChanged)
    Q_PROPERTY(quint16 Cycle READ getCycle
               WRITE setCycle NOTIFY CycleChanged)

    Q_PROPERTY(QString QMorA READ getQMorA NOTIFY QMorAChanged)
    Q_PROPERTY(QString ESTOP READ getESTOP NOTIFY ESTOPChanged)
    Q_PROPERTY(QString GEAR  READ getGEAR  NOTIFY GEARChanged)
    Q_PROPERTY(QString SPEED READ getSPEED NOTIFY SPEEDChanged)
    Q_PROPERTY(QString STEER READ getSTEER NOTIFY STEERChanged)
    Q_PROPERTY(QString BRAKE READ getBRAKE NOTIFY BRAKEChanged)
    Q_PROPERTY(QString ALIVE READ getALIVE NOTIFY ALIVEChanged)

    Q_PROPERTY(QVariant data READ getData WRITE setData NOTIFY dataChanged )

    Q_INVOKABLE void setActive(const bool &);
    Q_INVOKABLE void setAutoEnable(const bool &);
    Q_INVOKABLE void setEstopEnable(const bool &);
    Q_INVOKABLE void setSteerEnable(const bool &);
    Q_INVOKABLE void setSpeedEnable(const bool &);
    Q_INVOKABLE void setBrakeEnable(const bool &);
    Q_INVOKABLE void setGearDrive(const bool &);
    Q_INVOKABLE void setGearNeutral(const bool &);
    Q_INVOKABLE void setGearReverse(const bool &);
    Q_INVOKABLE void setSteerAngle(const qint16 &);
    Q_INVOKABLE void setSpeed(const quint16 &);
    Q_INVOKABLE void setBrake(const quint8 &);
    Q_INVOKABLE void setCycle(const quint16 &);

//    Q_INVOKABLE void setQMorA(const QString &);
    Q_INVOKABLE QVariant getData() const { return data_; }

    bool getActive() const {return m_ActiveEnable;}
    bool getAutoEnable() const {return m_AutoEnable;}
    bool getEstopEnable() const {return m_EstopEnable;}
    bool getSteerEnable() const {return m_SteerEnable;}
    bool getSpeedEnable() const {return m_SpeedEnable;}
    bool getBrakeEnable() const {return m_Brake;}
    bool getGearDrive() const {return m_GearDrive;}
    bool getGearNeutral() const {return m_GearNeutral;}
    bool getGearReverse() const {return m_GearReverse;}
    qint16 getSteerAngle() const {return m_SteerAngle;}

    quint16 getSpeed() const {return m_Speed;}
    quint8 getBrake() const {return m_Brake;}
    quint16 getCycle() const {return m_Cycle;}

    QString getQMorA() const {return m_str_QMorA;}
    QString getESTOP() const {return m_str_ESTOP;}
    QString getGEAR()  const {return m_str_GEAR;}
    QString getSPEED() const {return m_str_SPEED;}
    QString getSTEER() const {return m_str_STEER;}
    QString getBRAKE() const {return m_str_BRAKE;}
    QString getALIVE() const {return m_str_ALIVE;}

    QString getData(QString m_getData) const {return m_getData;}

    PC2ERP m_pc2erp;


//    quint16 getSteerData(quint16 m_getSteerData) const {return m_getSteerData;}
    void showData(quint8 data) const
    {
        std::cout << std::hex << +data << std::endl;
    }

private:
    bool m_ActiveEnable;
    bool m_AutoEnable;
    bool m_EstopEnable;
    bool m_SteerEnable;
    bool m_SpeedEnable;
    bool m_BrakeEnable;
    bool m_GearDrive;
    bool m_GearNeutral;
    bool m_GearReverse;
    quint8 m_Gear;
    qint16 m_SteerAngle;
    quint16 m_Speed;
    quint8 m_Brake;
    quint16 m_Cycle;


    QString m_str_QMorA;
    QString m_str_ESTOP;
    QString m_str_GEAR;
    QString m_str_SPEED;
    QString m_str_STEER;
    QString m_str_BRAKE;
    QString m_str_ALIVE;

    const QString m_getData;

//    quint16 m_getSteerData;

    QVariant data_{ "" };

    /* Thread */

signals:
    void ActiveChanged();
    void AutoEnableChanged();
    void EstopEnableChanged();
    void SteerEnableChanged();
    void SpeedEnableChanged();
    void BrakeEnableChanged();
    void GearDriveChanged();
    void GearNeutralChanged();
    void GearReverseChanged();
    void SteerAngleChanged();
    void SpeedChanged();
    void BrakeChanged();
    void QMorAChanged();
    void ESTOPChanged();
    void GEARChanged();
    void SPEEDChanged();
    void STEERChanged();
    void BRAKEChanged();
    void ALIVEChanged();
    void CycleChanged();

    void dataChanged( const QVariant data );



private slots:
    void setData( const QVariant data ) {
        if ( data != data_ ) {
            data_ = data;
            emit dataChanged( data_ );
        }
    }
    void run();


};
#endif // PCanManager_H
