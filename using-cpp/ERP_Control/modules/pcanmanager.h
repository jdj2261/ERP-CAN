#ifndef PCanManager_H
#define PCanManager_H
//#include "canmanager.h"
#include <QTimer>
#include <QThread>
#include <QDebug>
#include <iostream>
#include <string>

#define SPEED_FACTOR 10
#define STEER_FACTOR 71

typedef struct _pc_to_erp42
{
    quint8 MorA;
    quint8 ESTOP;
    quint8 GEAR;
    union speed{ quint8 speed[2]; quint16 _speed;}; union speed speed;
    union steer{ quint8 steer[2]; qint16 _steer;}; union steer steer;
    quint8 brake = 0;
    quint8 alive = 0;

}PC2ERP;

typedef struct _erp42_to_pc
{
    quint8 MorA = 0x00;
    quint8 ESTOP = 0x01;
    quint8 GEAR = 0x02;
    union speed{ quint8 speed[2]; quint16 _speed;}; union speed speed;
    union steer{ quint8 steer[2]; qint16 _steer;}; union steer steer;
    quint8 brake;
    quint8 alive;
}ERP2PC;

class PCanManager : public QThread
{

    Q_OBJECT

public:
    explicit PCanManager(QObject *parent = nullptr);
    virtual ~PCanManager() {}

//    CanManager *a;

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

    Q_PROPERTY(QString QMorA READ get_str_QMorA NOTIFY str_QMorAChanged)
    Q_PROPERTY(QString ESTOP READ get_str_ESTOP NOTIFY str_ESTOPChanged)
    Q_PROPERTY(QString GEAR  READ get_str_GEAR  NOTIFY str_GEARChanged)
    Q_PROPERTY(QString SPEED READ get_str_SPEED NOTIFY str_SPEEDChanged)
    Q_PROPERTY(QString STEER READ get_str_STEER NOTIFY str_STEERChanged)
    Q_PROPERTY(QString BRAKE READ get_str_BRAKE NOTIFY str_BRAKEChanged)
    Q_PROPERTY(QString ALIVE READ get_str_ALIVE NOTIFY str_ALIVEChanged)

    Q_PROPERTY(QString modified_SPEED READ get_modified_str_SPEED NOTIFY str_SPEEDChanged)
    Q_PROPERTY(QString modified_STEER READ get_modified_str_STEER NOTIFY str_STEERChanged)
    Q_PROPERTY(QString modified_BRAKE READ get_modified_str_BRAKE NOTIFY str_BRAKEChanged)


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

    qint16  getSteerAngle() const {return m_SteerAngle;}
    quint16 getSpeed() const {return m_Speed;}
    quint8  getBrake() const {return m_Brake;}
    quint8 getCycle() const {return m_Cycle;}

    QString get_str_QMorA() const {return m_str_QMorA;}
    QString get_str_ESTOP() const {return m_str_ESTOP;}
    QString get_str_GEAR()  const {return m_str_GEAR;}
    QString get_str_SPEED() const {return m_str_SPEED;}
    QString get_str_STEER() const {return m_str_STEER;}
    QString get_str_BRAKE() const {return m_str_BRAKE;}
    QString get_str_ALIVE() const {return m_str_ALIVE;}

    QString get_modified_str_SPEED() const {return m_modified_str_Speed;}
    QString get_modified_str_STEER() const {return m_modified_str_SteerAngle;}
    QString get_modified_str_BRAKE() const {return m_modified_str_Brake;}

    QString getData(QString m_getData) const {return m_getData;}

    static PC2ERP m_pc2erp;

    PC2ERP showtest() const { return m_pc2erp;}

    quint8 m_Gear;
    qint16 m_SteerAngle;
    quint16 m_Speed;
    quint8 m_Brake;
    quint8 m_Cycle;


//    quint16 getSteerData(quint16 m_getSteerData) const {return m_getSteerData;}
    QString showData() const
    {
        std::cout << "PCanManager Object!!" << std::endl;
//        return m_Cycle;
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

    QString m_str_QMorA;
    QString m_str_ESTOP;
    QString m_str_GEAR;
    QString m_str_SPEED;
    QString m_str_STEER;
    QString m_str_BRAKE;
    QString m_str_ALIVE;

    QString m_modified_str_SteerAngle;
    QString m_modified_str_Speed;
    QString m_modified_str_Brake;

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

    void CycleChanged();

    void str_QMorAChanged();
    void str_ESTOPChanged();
    void str_GEARChanged();
    void str_SPEEDChanged();
    void str_STEERChanged();
    void str_BRAKEChanged();
    void str_ALIVEChanged();


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
