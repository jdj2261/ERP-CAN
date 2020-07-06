/****************************************************************************
** Meta object code from reading C++ file 'pcanmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/pcanmanager.h"
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
    QByteArrayData data[48];
    char stringdata0[599];
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
QT_MOC_LITERAL(7, 102, 21), // "OverrideIgnoreChanged"
QT_MOC_LITERAL(8, 124, 16), // "GearDriveChanged"
QT_MOC_LITERAL(9, 141, 18), // "GearNeutralChanged"
QT_MOC_LITERAL(10, 160, 18), // "GearReverseChanged"
QT_MOC_LITERAL(11, 179, 17), // "SteerAngleChanged"
QT_MOC_LITERAL(12, 197, 12), // "SpeedChanged"
QT_MOC_LITERAL(13, 210, 12), // "BrakeChanged"
QT_MOC_LITERAL(14, 223, 18), // "GearSelDispChanged"
QT_MOC_LITERAL(15, 242, 13), // "AlvCntChanged"
QT_MOC_LITERAL(16, 256, 14), // "sendCmdMessage"
QT_MOC_LITERAL(17, 271, 9), // "setActive"
QT_MOC_LITERAL(18, 281, 13), // "setAutoEnable"
QT_MOC_LITERAL(19, 295, 14), // "setEstopEnable"
QT_MOC_LITERAL(20, 310, 14), // "setSteerEnable"
QT_MOC_LITERAL(21, 325, 14), // "setSpeedEnable"
QT_MOC_LITERAL(22, 340, 17), // "setOverrideIgnore"
QT_MOC_LITERAL(23, 358, 12), // "setGearDrive"
QT_MOC_LITERAL(24, 371, 14), // "setGearNeutral"
QT_MOC_LITERAL(25, 386, 14), // "setGearReverse"
QT_MOC_LITERAL(26, 401, 13), // "setSteerAngle"
QT_MOC_LITERAL(27, 415, 8), // "setSpeed"
QT_MOC_LITERAL(28, 424, 8), // "setBrake"
QT_MOC_LITERAL(29, 433, 11), // "resetAlvCnt"
QT_MOC_LITERAL(30, 445, 9), // "incAlvCnt"
QT_MOC_LITERAL(31, 455, 6), // "Active"
QT_MOC_LITERAL(32, 462, 10), // "AutoEnable"
QT_MOC_LITERAL(33, 473, 11), // "EstopEnable"
QT_MOC_LITERAL(34, 485, 11), // "SteerEnable"
QT_MOC_LITERAL(35, 497, 11), // "SpeedEnable"
QT_MOC_LITERAL(36, 509, 14), // "OverrideIgnore"
QT_MOC_LITERAL(37, 524, 9), // "GearDrive"
QT_MOC_LITERAL(38, 534, 11), // "GearNeutral"
QT_MOC_LITERAL(39, 546, 11), // "GearReverse"
QT_MOC_LITERAL(40, 558, 10), // "SteerAngle"
QT_MOC_LITERAL(41, 569, 5), // "Speed"
QT_MOC_LITERAL(42, 575, 5), // "Brake"
QT_MOC_LITERAL(43, 581, 6), // "AlvCnt"
QT_MOC_LITERAL(44, 588, 4), // "Gear"
QT_MOC_LITERAL(45, 593, 1), // "D"
QT_MOC_LITERAL(46, 595, 1), // "N"
QT_MOC_LITERAL(47, 597, 1) // "R"

    },
    "PCanManager\0ActiveChanged\0\0AutoEnableChanged\0"
    "EstopEnableChanged\0SteerEnableChanged\0"
    "SpeedEnableChanged\0OverrideIgnoreChanged\0"
    "GearDriveChanged\0GearNeutralChanged\0"
    "GearReverseChanged\0SteerAngleChanged\0"
    "SpeedChanged\0BrakeChanged\0GearSelDispChanged\0"
    "AlvCntChanged\0sendCmdMessage\0setActive\0"
    "setAutoEnable\0setEstopEnable\0"
    "setSteerEnable\0setSpeedEnable\0"
    "setOverrideIgnore\0setGearDrive\0"
    "setGearNeutral\0setGearReverse\0"
    "setSteerAngle\0setSpeed\0setBrake\0"
    "resetAlvCnt\0incAlvCnt\0Active\0AutoEnable\0"
    "EstopEnable\0SteerEnable\0SpeedEnable\0"
    "OverrideIgnore\0GearDrive\0GearNeutral\0"
    "GearReverse\0SteerAngle\0Speed\0Brake\0"
    "AlvCnt\0Gear\0D\0N\0R"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCanManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
      13,  212, // properties
       1,  264, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  159,    2, 0x06 /* Public */,
       3,    0,  160,    2, 0x06 /* Public */,
       4,    0,  161,    2, 0x06 /* Public */,
       5,    0,  162,    2, 0x06 /* Public */,
       6,    0,  163,    2, 0x06 /* Public */,
       7,    0,  164,    2, 0x06 /* Public */,
       8,    0,  165,    2, 0x06 /* Public */,
       9,    0,  166,    2, 0x06 /* Public */,
      10,    0,  167,    2, 0x06 /* Public */,
      11,    0,  168,    2, 0x06 /* Public */,
      12,    0,  169,    2, 0x06 /* Public */,
      13,    0,  170,    2, 0x06 /* Public */,
      14,    0,  171,    2, 0x06 /* Public */,
      15,    0,  172,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  173,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      17,    1,  174,    2, 0x02 /* Public */,
      18,    1,  177,    2, 0x02 /* Public */,
      19,    1,  180,    2, 0x02 /* Public */,
      20,    1,  183,    2, 0x02 /* Public */,
      21,    1,  186,    2, 0x02 /* Public */,
      22,    1,  189,    2, 0x02 /* Public */,
      23,    1,  192,    2, 0x02 /* Public */,
      24,    1,  195,    2, 0x02 /* Public */,
      25,    1,  198,    2, 0x02 /* Public */,
      26,    1,  201,    2, 0x02 /* Public */,
      27,    1,  204,    2, 0x02 /* Public */,
      28,    1,  207,    2, 0x02 /* Public */,
      29,    0,  210,    2, 0x02 /* Public */,
      30,    0,  211,    2, 0x02 /* Public */,

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

 // slots: parameters
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
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      31, QMetaType::Bool, 0x00495103,
      32, QMetaType::Bool, 0x00495103,
      33, QMetaType::Bool, 0x00495103,
      34, QMetaType::Bool, 0x00495103,
      35, QMetaType::Bool, 0x00495103,
      36, QMetaType::Bool, 0x00495103,
      37, QMetaType::Bool, 0x00495103,
      38, QMetaType::Bool, 0x00495103,
      39, QMetaType::Bool, 0x00495103,
      40, QMetaType::Int, 0x00495103,
      41, QMetaType::UShort, 0x00495103,
      42, QMetaType::UChar, 0x00495103,
      43, QMetaType::UChar, 0x00495001,

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
      13,

 // enums: name, alias, flags, count, data
      44,   44, 0x0,    3,  269,

 // enum data: key, value
      45, uint(PCanManager::D),
      46, uint(PCanManager::N),
      47, uint(PCanManager::R),

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
        case 5: _t->OverrideIgnoreChanged(); break;
        case 6: _t->GearDriveChanged(); break;
        case 7: _t->GearNeutralChanged(); break;
        case 8: _t->GearReverseChanged(); break;
        case 9: _t->SteerAngleChanged(); break;
        case 10: _t->SpeedChanged(); break;
        case 11: _t->BrakeChanged(); break;
        case 12: _t->GearSelDispChanged(); break;
        case 13: _t->AlvCntChanged(); break;
        case 14: _t->sendCmdMessage(); break;
        case 15: _t->setActive((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 16: _t->setAutoEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 17: _t->setEstopEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 18: _t->setSteerEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 19: _t->setSpeedEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 20: _t->setOverrideIgnore((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 21: _t->setGearDrive((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 22: _t->setGearNeutral((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 23: _t->setGearReverse((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 24: _t->setSteerAngle((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 25: _t->setSpeed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 26: _t->setBrake((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 27: _t->resetAlvCnt(); break;
        case 28: _t->incAlvCnt(); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::OverrideIgnoreChanged)) {
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::GearSelDispChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::AlvCntChanged)) {
                *result = 13;
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
        case 0: *reinterpret_cast< bool*>(_v) = _t->Active(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->AutoEnable(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->EstopEnable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->SteerEnable(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->SpeedEnable(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->OverrideIgnore(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->GearDrive(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->GearNeutral(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->GearReverse(); break;
        case 9: *reinterpret_cast< int*>(_v) = _t->SteerAngle(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->Speed(); break;
        case 11: *reinterpret_cast< quint8*>(_v) = _t->Brake(); break;
        case 12: *reinterpret_cast< quint8*>(_v) = _t->AlvCnt(); break;
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
        case 5: _t->setOverrideIgnore(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setGearDrive(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setGearNeutral(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setGearReverse(*reinterpret_cast< bool*>(_v)); break;
        case 9: _t->setSteerAngle(*reinterpret_cast< int*>(_v)); break;
        case 10: _t->setSpeed(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setBrake(*reinterpret_cast< quint8*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject PCanManager::staticMetaObject = { {
    &CanManager::staticMetaObject,
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
    return CanManager::qt_metacast(_clname);
}

int PCanManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = CanManager::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 29)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 29;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 29)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 29;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 13;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 13;
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
void PCanManager::OverrideIgnoreChanged()
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
void PCanManager::GearSelDispChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PCanManager::AlvCntChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
