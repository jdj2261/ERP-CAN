/****************************************************************************
** Meta object code from reading C++ file 'pcanmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../modules/pcanmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pcanmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PCanManager_t {
    QByteArrayData data[67];
    char stringdata0[712];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCanManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCanManager_t qt_meta_stringdata_PCanManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PCanManager"
QT_MOC_LITERAL(1, 12, 13), // "ActiveChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 17), // "AutoEnableChanged"
QT_MOC_LITERAL(4, 45, 18), // "EstopEnableChanged"
QT_MOC_LITERAL(5, 64, 18), // "SteerEnableChanged"
QT_MOC_LITERAL(6, 83, 18), // "SpeedEnableChanged"
QT_MOC_LITERAL(7, 102, 18), // "BrakeEnableChanged"
QT_MOC_LITERAL(8, 121, 16), // "GearDriveChanged"
QT_MOC_LITERAL(9, 138, 18), // "GearNeutralChanged"
QT_MOC_LITERAL(10, 157, 18), // "GearReverseChanged"
QT_MOC_LITERAL(11, 176, 17), // "SteerAngleChanged"
QT_MOC_LITERAL(12, 194, 12), // "SpeedChanged"
QT_MOC_LITERAL(13, 207, 12), // "BrakeChanged"
QT_MOC_LITERAL(14, 220, 12), // "QMorAChanged"
QT_MOC_LITERAL(15, 233, 12), // "ESTOPChanged"
QT_MOC_LITERAL(16, 246, 11), // "GEARChanged"
QT_MOC_LITERAL(17, 258, 12), // "SPEEDChanged"
QT_MOC_LITERAL(18, 271, 12), // "STEERChanged"
QT_MOC_LITERAL(19, 284, 12), // "BRAKEChanged"
QT_MOC_LITERAL(20, 297, 12), // "ALIVEChanged"
QT_MOC_LITERAL(21, 310, 11), // "dataChanged"
QT_MOC_LITERAL(22, 322, 4), // "data"
QT_MOC_LITERAL(23, 327, 7), // "setData"
QT_MOC_LITERAL(24, 335, 3), // "run"
QT_MOC_LITERAL(25, 339, 9), // "setActive"
QT_MOC_LITERAL(26, 349, 13), // "setAutoEnable"
QT_MOC_LITERAL(27, 363, 14), // "setEstopEnable"
QT_MOC_LITERAL(28, 378, 14), // "setSteerEnable"
QT_MOC_LITERAL(29, 393, 14), // "setSpeedEnable"
QT_MOC_LITERAL(30, 408, 14), // "setBrakeEnable"
QT_MOC_LITERAL(31, 423, 12), // "setGearDrive"
QT_MOC_LITERAL(32, 436, 14), // "setGearNeutral"
QT_MOC_LITERAL(33, 451, 14), // "setGearReverse"
QT_MOC_LITERAL(34, 466, 13), // "setSteerAngle"
QT_MOC_LITERAL(35, 480, 8), // "setSpeed"
QT_MOC_LITERAL(36, 489, 8), // "setBrake"
QT_MOC_LITERAL(37, 498, 7), // "getData"
QT_MOC_LITERAL(38, 506, 6), // "Active"
QT_MOC_LITERAL(39, 513, 10), // "AutoEnable"
QT_MOC_LITERAL(40, 524, 11), // "EstopEnable"
QT_MOC_LITERAL(41, 536, 11), // "SteerEnable"
QT_MOC_LITERAL(42, 548, 11), // "SpeedEnable"
QT_MOC_LITERAL(43, 560, 11), // "BrakeEnable"
QT_MOC_LITERAL(44, 572, 9), // "GearDrive"
QT_MOC_LITERAL(45, 582, 11), // "GearNeutral"
QT_MOC_LITERAL(46, 594, 11), // "GearReverse"
QT_MOC_LITERAL(47, 606, 10), // "SteerAngle"
QT_MOC_LITERAL(48, 617, 5), // "Speed"
QT_MOC_LITERAL(49, 623, 5), // "Brake"
QT_MOC_LITERAL(50, 629, 5), // "QMorA"
QT_MOC_LITERAL(51, 635, 5), // "ESTOP"
QT_MOC_LITERAL(52, 641, 4), // "GEAR"
QT_MOC_LITERAL(53, 646, 5), // "SPEED"
QT_MOC_LITERAL(54, 652, 5), // "STEER"
QT_MOC_LITERAL(55, 658, 5), // "BRAKE"
QT_MOC_LITERAL(56, 664, 5), // "ALIVE"
QT_MOC_LITERAL(57, 670, 4), // "Mode"
QT_MOC_LITERAL(58, 675, 7), // "Mannaul"
QT_MOC_LITERAL(59, 683, 4), // "Auto"
QT_MOC_LITERAL(60, 688, 5), // "Estop"
QT_MOC_LITERAL(61, 694, 3), // "Off"
QT_MOC_LITERAL(62, 698, 2), // "On"
QT_MOC_LITERAL(63, 701, 4), // "Gear"
QT_MOC_LITERAL(64, 706, 1), // "D"
QT_MOC_LITERAL(65, 708, 1), // "N"
QT_MOC_LITERAL(66, 710, 1) // "R"

    },
    "PCanManager\0ActiveChanged\0\0AutoEnableChanged\0"
    "EstopEnableChanged\0SteerEnableChanged\0"
    "SpeedEnableChanged\0BrakeEnableChanged\0"
    "GearDriveChanged\0GearNeutralChanged\0"
    "GearReverseChanged\0SteerAngleChanged\0"
    "SpeedChanged\0BrakeChanged\0QMorAChanged\0"
    "ESTOPChanged\0GEARChanged\0SPEEDChanged\0"
    "STEERChanged\0BRAKEChanged\0ALIVEChanged\0"
    "dataChanged\0data\0setData\0run\0setActive\0"
    "setAutoEnable\0setEstopEnable\0"
    "setSteerEnable\0setSpeedEnable\0"
    "setBrakeEnable\0setGearDrive\0setGearNeutral\0"
    "setGearReverse\0setSteerAngle\0setSpeed\0"
    "setBrake\0getData\0Active\0AutoEnable\0"
    "EstopEnable\0SteerEnable\0SpeedEnable\0"
    "BrakeEnable\0GearDrive\0GearNeutral\0"
    "GearReverse\0SteerAngle\0Speed\0Brake\0"
    "QMorA\0ESTOP\0GEAR\0SPEED\0STEER\0BRAKE\0"
    "ALIVE\0Mode\0Mannaul\0Auto\0Estop\0Off\0On\0"
    "Gear\0D\0N\0R"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCanManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
      20,  252, // properties
       3,  332, // enums/sets
       0,    0, // constructors
       0,       // flags
      20,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  189,    2, 0x06 /* Public */,
       3,    0,  190,    2, 0x06 /* Public */,
       4,    0,  191,    2, 0x06 /* Public */,
       5,    0,  192,    2, 0x06 /* Public */,
       6,    0,  193,    2, 0x06 /* Public */,
       7,    0,  194,    2, 0x06 /* Public */,
       8,    0,  195,    2, 0x06 /* Public */,
       9,    0,  196,    2, 0x06 /* Public */,
      10,    0,  197,    2, 0x06 /* Public */,
      11,    0,  198,    2, 0x06 /* Public */,
      12,    0,  199,    2, 0x06 /* Public */,
      13,    0,  200,    2, 0x06 /* Public */,
      14,    0,  201,    2, 0x06 /* Public */,
      15,    0,  202,    2, 0x06 /* Public */,
      16,    0,  203,    2, 0x06 /* Public */,
      17,    0,  204,    2, 0x06 /* Public */,
      18,    0,  205,    2, 0x06 /* Public */,
      19,    0,  206,    2, 0x06 /* Public */,
      20,    0,  207,    2, 0x06 /* Public */,
      21,    1,  208,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      23,    1,  211,    2, 0x08 /* Private */,
      24,    0,  214,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      25,    1,  215,    2, 0x02 /* Public */,
      26,    1,  218,    2, 0x02 /* Public */,
      27,    1,  221,    2, 0x02 /* Public */,
      28,    1,  224,    2, 0x02 /* Public */,
      29,    1,  227,    2, 0x02 /* Public */,
      30,    1,  230,    2, 0x02 /* Public */,
      31,    1,  233,    2, 0x02 /* Public */,
      32,    1,  236,    2, 0x02 /* Public */,
      33,    1,  239,    2, 0x02 /* Public */,
      34,    1,  242,    2, 0x02 /* Public */,
      35,    1,  245,    2, 0x02 /* Public */,
      36,    1,  248,    2, 0x02 /* Public */,
      37,    0,  251,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QVariant,   22,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,   22,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::QVariant,

 // properties: name, type, flags
      38, QMetaType::Bool, 0x00495103,
      39, QMetaType::Bool, 0x00495103,
      40, QMetaType::Bool, 0x00495103,
      41, QMetaType::Bool, 0x00495103,
      42, QMetaType::Bool, 0x00495103,
      43, QMetaType::Bool, 0x00495103,
      44, QMetaType::Bool, 0x00495103,
      45, QMetaType::Bool, 0x00495103,
      46, QMetaType::Bool, 0x00495103,
      47, QMetaType::Double, 0x00495103,
      48, QMetaType::UShort, 0x00495103,
      49, QMetaType::UChar, 0x00495103,
      50, QMetaType::QString, 0x00495001,
      51, QMetaType::QString, 0x00495001,
      52, QMetaType::QString, 0x00495001,
      53, QMetaType::QString, 0x00495001,
      54, QMetaType::QString, 0x00495001,
      55, QMetaType::QString, 0x00495001,
      56, QMetaType::QString, 0x00495001,
      22, QMetaType::QVariant, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,
       3,
       4,
       5,
       6,
       7,
       8,
       9,
      10,
      11,
      12,
      13,
      14,
      15,
      16,
      17,
      18,
      19,

 // enums: name, alias, flags, count, data
      57,   57, 0x0,    2,  347,
      60,   60, 0x0,    2,  351,
      63,   63, 0x0,    3,  355,

 // enum data: key, value
      58, uint(PCanManager::Mannaul),
      59, uint(PCanManager::Auto),
      61, uint(PCanManager::Off),
      62, uint(PCanManager::On),
      64, uint(PCanManager::D),
      65, uint(PCanManager::N),
      66, uint(PCanManager::R),

       0        // eod
};

void PCanManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PCanManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ActiveChanged(); break;
        case 1: _t->AutoEnableChanged(); break;
        case 2: _t->EstopEnableChanged(); break;
        case 3: _t->SteerEnableChanged(); break;
        case 4: _t->SpeedEnableChanged(); break;
        case 5: _t->BrakeEnableChanged(); break;
        case 6: _t->GearDriveChanged(); break;
        case 7: _t->GearNeutralChanged(); break;
        case 8: _t->GearReverseChanged(); break;
        case 9: _t->SteerAngleChanged(); break;
        case 10: _t->SpeedChanged(); break;
        case 11: _t->BrakeChanged(); break;
        case 12: _t->QMorAChanged(); break;
        case 13: _t->ESTOPChanged(); break;
        case 14: _t->GEARChanged(); break;
        case 15: _t->SPEEDChanged(); break;
        case 16: _t->STEERChanged(); break;
        case 17: _t->BRAKEChanged(); break;
        case 18: _t->ALIVEChanged(); break;
        case 19: _t->dataChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 20: _t->setData((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 21: _t->run(); break;
        case 22: _t->setActive((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 23: _t->setAutoEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 24: _t->setEstopEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 25: _t->setSteerEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 26: _t->setSpeedEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 27: _t->setBrakeEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 28: _t->setGearDrive((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 29: _t->setGearNeutral((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 30: _t->setGearReverse((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 31: _t->setSteerAngle((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 32: _t->setSpeed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 33: _t->setBrake((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 34: { QVariant _r = _t->getData();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::ActiveChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::AutoEnableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::EstopEnableChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SteerEnableChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SpeedEnableChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::BrakeEnableChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::GearDriveChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::GearNeutralChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::GearReverseChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SteerAngleChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SpeedChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::BrakeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::QMorAChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::ESTOPChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::GEARChanged)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SPEEDChanged)) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::STEERChanged)) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::BRAKEChanged)) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::ALIVEChanged)) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)(const QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::dataChanged)) {
                *result = 19;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<PCanManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->getActive(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->getAutoEnable(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getEstopEnable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getSteerEnable(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->getSpeedEnable(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->getBrakeEnable(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getGearDrive(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getGearNeutral(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->getGearReverse(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->getSteerAngle(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->getSpeed(); break;
        case 11: *reinterpret_cast< quint8*>(_v) = _t->getBrake(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->getQMorA(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->getESTOP(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->getGEAR(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->getSPEED(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->getSTEER(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->getBRAKE(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->getALIVE(); break;
        case 19: *reinterpret_cast< QVariant*>(_v) = _t->getData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PCanManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setAutoEnable(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setEstopEnable(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setSteerEnable(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setSpeedEnable(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setBrakeEnable(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setGearDrive(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setGearNeutral(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setGearReverse(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setSteerAngle(*reinterpret_cast< double*>(_v)); break;
        case 10: _t->setSpeed(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setBrake(*reinterpret_cast< quint8*>(_v)); break;
        case 19: _t->setData(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PCanManager::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_PCanManager.data,
    qt_meta_data_PCanManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCanManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCanManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCanManager.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int PCanManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 20;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 20;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void PCanManager::ActiveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PCanManager::AutoEnableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PCanManager::EstopEnableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PCanManager::SteerEnableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PCanManager::SpeedEnableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PCanManager::BrakeEnableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PCanManager::GearDriveChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PCanManager::GearNeutralChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PCanManager::GearReverseChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PCanManager::SteerAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PCanManager::SpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void PCanManager::BrakeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void PCanManager::QMorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PCanManager::ESTOPChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PCanManager::GEARChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void PCanManager::SPEEDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void PCanManager::STEERChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void PCanManager::BRAKEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void PCanManager::ALIVEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void PCanManager::dataChanged(const QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
