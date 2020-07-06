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
    QByteArrayData data[61];
    char stringdata0[734];
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
QT_MOC_LITERAL(3, 27, 16), // "EpsEnableChanged"
QT_MOC_LITERAL(4, 44, 24), // "EpsOverrideIgnoreChanged"
QT_MOC_LITERAL(5, 69, 16), // "AccEnableChanged"
QT_MOC_LITERAL(6, 86, 16), // "AebEnableChanged"
QT_MOC_LITERAL(7, 103, 13), // "AlvCntChanged"
QT_MOC_LITERAL(8, 117, 17), // "SteerAngleChanged"
QT_MOC_LITERAL(9, 135, 17), // "SteerSpeedChanged"
QT_MOC_LITERAL(10, 153, 19), // "VehicleAccelChanged"
QT_MOC_LITERAL(11, 173, 17), // "AebDecRateChanged"
QT_MOC_LITERAL(12, 191, 18), // "MoCtrlStateChanged"
QT_MOC_LITERAL(13, 210, 13), // "MoModeChanged"
QT_MOC_LITERAL(14, 224, 19), // "VehicleSpeedChanged"
QT_MOC_LITERAL(15, 244, 18), // "TargetSpeedChanged"
QT_MOC_LITERAL(16, 263, 18), // "GearSelDispChanged"
QT_MOC_LITERAL(17, 282, 14), // "sendCmdMessage"
QT_MOC_LITERAL(18, 297, 15), // "onActiveChanged"
QT_MOC_LITERAL(19, 313, 9), // "setActive"
QT_MOC_LITERAL(20, 323, 12), // "setEpsEnable"
QT_MOC_LITERAL(21, 336, 12), // "setAccEnable"
QT_MOC_LITERAL(22, 349, 12), // "setAebEnable"
QT_MOC_LITERAL(23, 362, 20), // "setEpsOverrideIgnore"
QT_MOC_LITERAL(24, 383, 13), // "setSteerAngle"
QT_MOC_LITERAL(25, 397, 13), // "setSteerSpeed"
QT_MOC_LITERAL(26, 411, 15), // "setVehicleAccel"
QT_MOC_LITERAL(27, 427, 13), // "setAebDecRate"
QT_MOC_LITERAL(28, 441, 14), // "setTargetSpeed"
QT_MOC_LITERAL(29, 456, 11), // "resetAlvCnt"
QT_MOC_LITERAL(30, 468, 9), // "incAlvCnt"
QT_MOC_LITERAL(31, 478, 6), // "Active"
QT_MOC_LITERAL(32, 485, 9), // "EpsEnable"
QT_MOC_LITERAL(33, 495, 9), // "AccEnable"
QT_MOC_LITERAL(34, 505, 9), // "AebEnable"
QT_MOC_LITERAL(35, 515, 6), // "AlvCnt"
QT_MOC_LITERAL(36, 522, 17), // "EpsOverrideIgnore"
QT_MOC_LITERAL(37, 540, 10), // "SteerAngle"
QT_MOC_LITERAL(38, 551, 10), // "SteerSpeed"
QT_MOC_LITERAL(39, 562, 12), // "VehicleAccel"
QT_MOC_LITERAL(40, 575, 10), // "AebDecRate"
QT_MOC_LITERAL(41, 586, 6), // "MoMode"
QT_MOC_LITERAL(42, 593, 5), // "MoSeq"
QT_MOC_LITERAL(43, 599, 11), // "MoCtrlState"
QT_MOC_LITERAL(44, 611, 7), // "MoState"
QT_MOC_LITERAL(45, 619, 12), // "VehicleSpeed"
QT_MOC_LITERAL(46, 632, 11), // "TargetSpeed"
QT_MOC_LITERAL(47, 644, 11), // "GearSelDisp"
QT_MOC_LITERAL(48, 656, 4), // "Gear"
QT_MOC_LITERAL(49, 661, 8), // "ABNORMAL"
QT_MOC_LITERAL(50, 670, 7), // "INITIAL"
QT_MOC_LITERAL(51, 678, 6), // "NORMAL"
QT_MOC_LITERAL(52, 685, 4), // "NONE"
QT_MOC_LITERAL(53, 690, 8), // "AUTO_RDY"
QT_MOC_LITERAL(54, 699, 8), // "AUTO_ALL"
QT_MOC_LITERAL(55, 708, 8), // "AUTO_ACC"
QT_MOC_LITERAL(56, 717, 8), // "AUTO_EPS"
QT_MOC_LITERAL(57, 726, 1), // "P"
QT_MOC_LITERAL(58, 728, 1), // "R"
QT_MOC_LITERAL(59, 730, 1), // "N"
QT_MOC_LITERAL(60, 732, 1) // "D"

    },
    "PCanManager\0ActiveChanged\0\0EpsEnableChanged\0"
    "EpsOverrideIgnoreChanged\0AccEnableChanged\0"
    "AebEnableChanged\0AlvCntChanged\0"
    "SteerAngleChanged\0SteerSpeedChanged\0"
    "VehicleAccelChanged\0AebDecRateChanged\0"
    "MoCtrlStateChanged\0MoModeChanged\0"
    "VehicleSpeedChanged\0TargetSpeedChanged\0"
    "GearSelDispChanged\0sendCmdMessage\0"
    "onActiveChanged\0setActive\0setEpsEnable\0"
    "setAccEnable\0setAebEnable\0"
    "setEpsOverrideIgnore\0setSteerAngle\0"
    "setSteerSpeed\0setVehicleAccel\0"
    "setAebDecRate\0setTargetSpeed\0resetAlvCnt\0"
    "incAlvCnt\0Active\0EpsEnable\0AccEnable\0"
    "AebEnable\0AlvCnt\0EpsOverrideIgnore\0"
    "SteerAngle\0SteerSpeed\0VehicleAccel\0"
    "AebDecRate\0MoMode\0MoSeq\0MoCtrlState\0"
    "MoState\0VehicleSpeed\0TargetSpeed\0"
    "GearSelDisp\0Gear\0ABNORMAL\0INITIAL\0"
    "NORMAL\0NONE\0AUTO_RDY\0AUTO_ALL\0AUTO_ACC\0"
    "AUTO_EPS\0P\0R\0N\0D"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCanManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      29,   14, // methods
      15,  208, // properties
       3,  268, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

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
      16,    0,  173,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      17,    0,  174,    2, 0x08 /* Private */,
      18,    0,  175,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      19,    1,  176,    2, 0x02 /* Public */,
      20,    1,  179,    2, 0x02 /* Public */,
      21,    1,  182,    2, 0x02 /* Public */,
      22,    1,  185,    2, 0x02 /* Public */,
      23,    1,  188,    2, 0x02 /* Public */,
      24,    1,  191,    2, 0x02 /* Public */,
      25,    1,  194,    2, 0x02 /* Public */,
      26,    1,  197,    2, 0x02 /* Public */,
      27,    1,  200,    2, 0x02 /* Public */,
      28,    1,  203,    2, 0x02 /* Public */,
      29,    0,  206,    2, 0x02 /* Public */,
      30,    0,  207,    2, 0x02 /* Public */,

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

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      31, QMetaType::Bool, 0x00495103,
      32, QMetaType::Bool, 0x00495103,
      33, QMetaType::Bool, 0x00495103,
      34, QMetaType::Bool, 0x00495103,
      35, QMetaType::UChar, 0x00495001,
      36, QMetaType::Bool, 0x00495103,
      37, QMetaType::Double, 0x00495103,
      38, QMetaType::UChar, 0x00495103,
      39, QMetaType::Double, 0x00495103,
      40, QMetaType::Double, 0x00495103,
      41, 0x80000000 | 42, 0x00495009,
      43, 0x80000000 | 44, 0x00495009,
      45, QMetaType::Double, 0x00495001,
      46, QMetaType::Double, 0x00495103,
      47, 0x80000000 | 48, 0x00495009,

 // properties: notify_signal_id
       0,
       1,
       3,
       4,
       5,
       2,
       6,
       7,
       8,
       9,
      11,
      10,
      12,
      13,
      14,

 // enums: name, alias, flags, count, data
      44,   44, 0x0,    3,  283,
      42,   42, 0x0,    5,  289,
      48,   48, 0x0,    4,  299,

 // enum data: key, value
      49, uint(PCanManager::ABNORMAL),
      50, uint(PCanManager::INITIAL),
      51, uint(PCanManager::NORMAL),
      52, uint(PCanManager::NONE),
      53, uint(PCanManager::AUTO_RDY),
      54, uint(PCanManager::AUTO_ALL),
      55, uint(PCanManager::AUTO_ACC),
      56, uint(PCanManager::AUTO_EPS),
      57, uint(PCanManager::P),
      58, uint(PCanManager::R),
      59, uint(PCanManager::N),
      60, uint(PCanManager::D),

       0        // eod
};

void PCanManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PCanManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->ActiveChanged(); break;
        case 1: _t->EpsEnableChanged(); break;
        case 2: _t->EpsOverrideIgnoreChanged(); break;
        case 3: _t->AccEnableChanged(); break;
        case 4: _t->AebEnableChanged(); break;
        case 5: _t->AlvCntChanged(); break;
        case 6: _t->SteerAngleChanged(); break;
        case 7: _t->SteerSpeedChanged(); break;
        case 8: _t->VehicleAccelChanged(); break;
        case 9: _t->AebDecRateChanged(); break;
        case 10: _t->MoCtrlStateChanged(); break;
        case 11: _t->MoModeChanged(); break;
        case 12: _t->VehicleSpeedChanged(); break;
        case 13: _t->TargetSpeedChanged(); break;
        case 14: _t->GearSelDispChanged(); break;
        case 15: _t->sendCmdMessage(); break;
        case 16: _t->onActiveChanged(); break;
        case 17: _t->setActive((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 18: _t->setEpsEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 19: _t->setAccEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 20: _t->setAebEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 21: _t->setEpsOverrideIgnore((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 22: _t->setSteerAngle((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 23: _t->setSteerSpeed((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 24: _t->setVehicleAccel((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 25: _t->setAebDecRate((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 26: _t->setTargetSpeed((*reinterpret_cast< const double(*)>(_a[1]))); break;
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
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::EpsEnableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::EpsOverrideIgnoreChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::AccEnableChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::AebEnableChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::AlvCntChanged)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SteerAngleChanged)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SteerSpeedChanged)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::VehicleAccelChanged)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::AebDecRateChanged)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::MoCtrlStateChanged)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::MoModeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::VehicleSpeedChanged)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::TargetSpeedChanged)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (PCanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::GearSelDispChanged)) {
                *result = 14;
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
        case 1: *reinterpret_cast< bool*>(_v) = _t->EpsEnable(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->AccEnable(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->AebEnable(); break;
        case 4: *reinterpret_cast< quint8*>(_v) = _t->AlvCnt(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->EpsOverrideIgnore(); break;
        case 6: *reinterpret_cast< double*>(_v) = _t->SteerAngle(); break;
        case 7: *reinterpret_cast< quint8*>(_v) = _t->SteerSpeed(); break;
        case 8: *reinterpret_cast< double*>(_v) = _t->VehicleAccel(); break;
        case 9: *reinterpret_cast< double*>(_v) = _t->AebDecRate(); break;
        case 10: *reinterpret_cast< MoSeq*>(_v) = _t->MoMode(); break;
        case 11: *reinterpret_cast< MoState*>(_v) = _t->MoCtrlState(); break;
        case 12: *reinterpret_cast< double*>(_v) = _t->VehicleSpeed(); break;
        case 13: *reinterpret_cast< double*>(_v) = _t->TargetSpeed(); break;
        case 14: *reinterpret_cast< Gear*>(_v) = _t->GearSelDisp(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<PCanManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setActive(*reinterpret_cast< bool*>(_v)); break;
        case 1: _t->setEpsEnable(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setAccEnable(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setAebEnable(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setEpsOverrideIgnore(*reinterpret_cast< bool*>(_v)); break;
        case 6: _t->setSteerAngle(*reinterpret_cast< double*>(_v)); break;
        case 7: _t->setSteerSpeed(*reinterpret_cast< quint8*>(_v)); break;
        case 8: _t->setVehicleAccel(*reinterpret_cast< double*>(_v)); break;
        case 9: _t->setAebDecRate(*reinterpret_cast< double*>(_v)); break;
        case 13: _t->setTargetSpeed(*reinterpret_cast< double*>(_v)); break;
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
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 15;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 15;
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
void PCanManager::EpsEnableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PCanManager::EpsOverrideIgnoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PCanManager::AccEnableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PCanManager::AebEnableChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PCanManager::AlvCntChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PCanManager::SteerAngleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PCanManager::SteerSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void PCanManager::VehicleAccelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void PCanManager::AebDecRateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void PCanManager::MoCtrlStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void PCanManager::MoModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void PCanManager::VehicleSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PCanManager::TargetSpeedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PCanManager::GearSelDispChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
