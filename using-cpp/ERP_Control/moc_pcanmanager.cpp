/****************************************************************************
** Meta object code from reading C++ file 'pcanmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "modules/pcanmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pcanmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PCanManager_t {
    QByteArrayData data[117];
    char stringdata0[1609];
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
QT_MOC_LITERAL(14, 220, 12), // "CycleChanged"
QT_MOC_LITERAL(15, 233, 18), // "set_str_ID1Changed"
QT_MOC_LITERAL(16, 252, 18), // "set_str_ID2Changed"
QT_MOC_LITERAL(17, 271, 20), // "get_str_QMorAChanged"
QT_MOC_LITERAL(18, 292, 20), // "get_str_ESTOPChanged"
QT_MOC_LITERAL(19, 313, 19), // "get_str_GEARChanged"
QT_MOC_LITERAL(20, 333, 20), // "get_str_SPEEDChanged"
QT_MOC_LITERAL(21, 354, 20), // "get_str_STEERChanged"
QT_MOC_LITERAL(22, 375, 20), // "get_str_BRAKEChanged"
QT_MOC_LITERAL(23, 396, 20), // "get_str_ALIVEChanged"
QT_MOC_LITERAL(24, 417, 20), // "set_str_QMorAChanged"
QT_MOC_LITERAL(25, 438, 20), // "set_str_ESTOPChanged"
QT_MOC_LITERAL(26, 459, 19), // "set_str_GEARChanged"
QT_MOC_LITERAL(27, 479, 20), // "set_str_SPEEDChanged"
QT_MOC_LITERAL(28, 500, 20), // "set_str_STEERChanged"
QT_MOC_LITERAL(29, 521, 20), // "set_str_BRAKEChanged"
QT_MOC_LITERAL(30, 542, 20), // "set_str_ALIVEChanged"
QT_MOC_LITERAL(31, 563, 23), // "set_str_Encoder0Changed"
QT_MOC_LITERAL(32, 587, 23), // "set_str_Encoder1Changed"
QT_MOC_LITERAL(33, 611, 23), // "set_str_Encoder2Changed"
QT_MOC_LITERAL(34, 635, 23), // "set_str_Encoder3Changed"
QT_MOC_LITERAL(35, 659, 18), // "set_str_BCRChanged"
QT_MOC_LITERAL(36, 678, 17), // "set_str_BRChanged"
QT_MOC_LITERAL(37, 696, 17), // "set_str_BEChanged"
QT_MOC_LITERAL(38, 714, 18), // "set_str_BIMChanged"
QT_MOC_LITERAL(39, 733, 11), // "dataChanged"
QT_MOC_LITERAL(40, 745, 4), // "data"
QT_MOC_LITERAL(41, 750, 7), // "setData"
QT_MOC_LITERAL(42, 758, 9), // "setActive"
QT_MOC_LITERAL(43, 768, 13), // "setAutoEnable"
QT_MOC_LITERAL(44, 782, 14), // "setEstopEnable"
QT_MOC_LITERAL(45, 797, 14), // "setSteerEnable"
QT_MOC_LITERAL(46, 812, 14), // "setSpeedEnable"
QT_MOC_LITERAL(47, 827, 14), // "setBrakeEnable"
QT_MOC_LITERAL(48, 842, 12), // "setGearDrive"
QT_MOC_LITERAL(49, 855, 14), // "setGearNeutral"
QT_MOC_LITERAL(50, 870, 14), // "setGearReverse"
QT_MOC_LITERAL(51, 885, 13), // "setSteerAngle"
QT_MOC_LITERAL(52, 899, 8), // "setSpeed"
QT_MOC_LITERAL(53, 908, 8), // "setBrake"
QT_MOC_LITERAL(54, 917, 8), // "setCycle"
QT_MOC_LITERAL(55, 926, 7), // "getData"
QT_MOC_LITERAL(56, 934, 6), // "Active"
QT_MOC_LITERAL(57, 941, 10), // "AutoEnable"
QT_MOC_LITERAL(58, 952, 11), // "EstopEnable"
QT_MOC_LITERAL(59, 964, 11), // "SteerEnable"
QT_MOC_LITERAL(60, 976, 11), // "SpeedEnable"
QT_MOC_LITERAL(61, 988, 11), // "BrakeEnable"
QT_MOC_LITERAL(62, 1000, 9), // "GearDrive"
QT_MOC_LITERAL(63, 1010, 11), // "GearNeutral"
QT_MOC_LITERAL(64, 1022, 11), // "GearReverse"
QT_MOC_LITERAL(65, 1034, 10), // "SteerAngle"
QT_MOC_LITERAL(66, 1045, 5), // "Speed"
QT_MOC_LITERAL(67, 1051, 5), // "Brake"
QT_MOC_LITERAL(68, 1057, 5), // "Cycle"
QT_MOC_LITERAL(69, 1063, 9), // "get_QMorA"
QT_MOC_LITERAL(70, 1073, 9), // "get_ESTOP"
QT_MOC_LITERAL(71, 1083, 8), // "get_GEAR"
QT_MOC_LITERAL(72, 1092, 9), // "get_SPEED"
QT_MOC_LITERAL(73, 1102, 9), // "get_STEER"
QT_MOC_LITERAL(74, 1112, 9), // "get_BRAKE"
QT_MOC_LITERAL(75, 1122, 9), // "get_ALIVE"
QT_MOC_LITERAL(76, 1132, 18), // "get_modified_SPEED"
QT_MOC_LITERAL(77, 1151, 18), // "get_modified_STEER"
QT_MOC_LITERAL(78, 1170, 18), // "get_modified_BRAKE"
QT_MOC_LITERAL(79, 1189, 7), // "set_ID1"
QT_MOC_LITERAL(80, 1197, 7), // "set_ID2"
QT_MOC_LITERAL(81, 1205, 9), // "set_QMorA"
QT_MOC_LITERAL(82, 1215, 9), // "set_ESTOP"
QT_MOC_LITERAL(83, 1225, 8), // "set_GEAR"
QT_MOC_LITERAL(84, 1234, 9), // "set_SPEED"
QT_MOC_LITERAL(85, 1244, 9), // "set_STEER"
QT_MOC_LITERAL(86, 1254, 9), // "set_BRAKE"
QT_MOC_LITERAL(87, 1264, 9), // "set_ALIVE"
QT_MOC_LITERAL(88, 1274, 18), // "set_modified_SPEED"
QT_MOC_LITERAL(89, 1293, 18), // "set_modified_STEER"
QT_MOC_LITERAL(90, 1312, 18), // "set_modified_BRAKE"
QT_MOC_LITERAL(91, 1331, 12), // "set_Encoder0"
QT_MOC_LITERAL(92, 1344, 12), // "set_Encoder1"
QT_MOC_LITERAL(93, 1357, 12), // "set_Encoder2"
QT_MOC_LITERAL(94, 1370, 12), // "set_Encoder3"
QT_MOC_LITERAL(95, 1383, 7), // "set_BCR"
QT_MOC_LITERAL(96, 1391, 6), // "set_BR"
QT_MOC_LITERAL(97, 1398, 6), // "set_BE"
QT_MOC_LITERAL(98, 1405, 7), // "set_BIM"
QT_MOC_LITERAL(99, 1413, 21), // "set_modified_Encoder0"
QT_MOC_LITERAL(100, 1435, 21), // "set_modified_Encoder1"
QT_MOC_LITERAL(101, 1457, 21), // "set_modified_Encoder2"
QT_MOC_LITERAL(102, 1479, 21), // "set_modified_Encoder3"
QT_MOC_LITERAL(103, 1501, 16), // "set_modified_BCR"
QT_MOC_LITERAL(104, 1518, 15), // "set_modified_BR"
QT_MOC_LITERAL(105, 1534, 15), // "set_modified_BE"
QT_MOC_LITERAL(106, 1550, 16), // "set_modified_BIM"
QT_MOC_LITERAL(107, 1567, 4), // "Mode"
QT_MOC_LITERAL(108, 1572, 7), // "Mannaul"
QT_MOC_LITERAL(109, 1580, 4), // "Auto"
QT_MOC_LITERAL(110, 1585, 5), // "Estop"
QT_MOC_LITERAL(111, 1591, 3), // "Off"
QT_MOC_LITERAL(112, 1595, 2), // "On"
QT_MOC_LITERAL(113, 1598, 4), // "Gear"
QT_MOC_LITERAL(114, 1603, 1), // "D"
QT_MOC_LITERAL(115, 1605, 1), // "N"
QT_MOC_LITERAL(116, 1607, 1) // "R"

    },
    "PCanManager\0ActiveChanged\0\0AutoEnableChanged\0"
    "EstopEnableChanged\0SteerEnableChanged\0"
    "SpeedEnableChanged\0BrakeEnableChanged\0"
    "GearDriveChanged\0GearNeutralChanged\0"
    "GearReverseChanged\0SteerAngleChanged\0"
    "SpeedChanged\0BrakeChanged\0CycleChanged\0"
    "set_str_ID1Changed\0set_str_ID2Changed\0"
    "get_str_QMorAChanged\0get_str_ESTOPChanged\0"
    "get_str_GEARChanged\0get_str_SPEEDChanged\0"
    "get_str_STEERChanged\0get_str_BRAKEChanged\0"
    "get_str_ALIVEChanged\0set_str_QMorAChanged\0"
    "set_str_ESTOPChanged\0set_str_GEARChanged\0"
    "set_str_SPEEDChanged\0set_str_STEERChanged\0"
    "set_str_BRAKEChanged\0set_str_ALIVEChanged\0"
    "set_str_Encoder0Changed\0set_str_Encoder1Changed\0"
    "set_str_Encoder2Changed\0set_str_Encoder3Changed\0"
    "set_str_BCRChanged\0set_str_BRChanged\0"
    "set_str_BEChanged\0set_str_BIMChanged\0"
    "dataChanged\0data\0setData\0setActive\0"
    "setAutoEnable\0setEstopEnable\0"
    "setSteerEnable\0setSpeedEnable\0"
    "setBrakeEnable\0setGearDrive\0setGearNeutral\0"
    "setGearReverse\0setSteerAngle\0setSpeed\0"
    "setBrake\0setCycle\0getData\0Active\0"
    "AutoEnable\0EstopEnable\0SteerEnable\0"
    "SpeedEnable\0BrakeEnable\0GearDrive\0"
    "GearNeutral\0GearReverse\0SteerAngle\0"
    "Speed\0Brake\0Cycle\0get_QMorA\0get_ESTOP\0"
    "get_GEAR\0get_SPEED\0get_STEER\0get_BRAKE\0"
    "get_ALIVE\0get_modified_SPEED\0"
    "get_modified_STEER\0get_modified_BRAKE\0"
    "set_ID1\0set_ID2\0set_QMorA\0set_ESTOP\0"
    "set_GEAR\0set_SPEED\0set_STEER\0set_BRAKE\0"
    "set_ALIVE\0set_modified_SPEED\0"
    "set_modified_STEER\0set_modified_BRAKE\0"
    "set_Encoder0\0set_Encoder1\0set_Encoder2\0"
    "set_Encoder3\0set_BCR\0set_BR\0set_BE\0"
    "set_BIM\0set_modified_Encoder0\0"
    "set_modified_Encoder1\0set_modified_Encoder2\0"
    "set_modified_Encoder3\0set_modified_BCR\0"
    "set_modified_BR\0set_modified_BE\0"
    "set_modified_BIM\0Mode\0Mannaul\0Auto\0"
    "Estop\0Off\0On\0Gear\0D\0N\0R"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCanManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      53,   14, // methods
      52,  362, // properties
       3,  570, // enums/sets
       0,    0, // constructors
       0,       // flags
      38,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  279,    2, 0x06 /* Public */,
       3,    0,  280,    2, 0x06 /* Public */,
       4,    0,  281,    2, 0x06 /* Public */,
       5,    0,  282,    2, 0x06 /* Public */,
       6,    0,  283,    2, 0x06 /* Public */,
       7,    0,  284,    2, 0x06 /* Public */,
       8,    0,  285,    2, 0x06 /* Public */,
       9,    0,  286,    2, 0x06 /* Public */,
      10,    0,  287,    2, 0x06 /* Public */,
      11,    0,  288,    2, 0x06 /* Public */,
      12,    0,  289,    2, 0x06 /* Public */,
      13,    0,  290,    2, 0x06 /* Public */,
      14,    0,  291,    2, 0x06 /* Public */,
      15,    0,  292,    2, 0x06 /* Public */,
      16,    0,  293,    2, 0x06 /* Public */,
      17,    0,  294,    2, 0x06 /* Public */,
      18,    0,  295,    2, 0x06 /* Public */,
      19,    0,  296,    2, 0x06 /* Public */,
      20,    0,  297,    2, 0x06 /* Public */,
      21,    0,  298,    2, 0x06 /* Public */,
      22,    0,  299,    2, 0x06 /* Public */,
      23,    0,  300,    2, 0x06 /* Public */,
      24,    0,  301,    2, 0x06 /* Public */,
      25,    0,  302,    2, 0x06 /* Public */,
      26,    0,  303,    2, 0x06 /* Public */,
      27,    0,  304,    2, 0x06 /* Public */,
      28,    0,  305,    2, 0x06 /* Public */,
      29,    0,  306,    2, 0x06 /* Public */,
      30,    0,  307,    2, 0x06 /* Public */,
      31,    0,  308,    2, 0x06 /* Public */,
      32,    0,  309,    2, 0x06 /* Public */,
      33,    0,  310,    2, 0x06 /* Public */,
      34,    0,  311,    2, 0x06 /* Public */,
      35,    0,  312,    2, 0x06 /* Public */,
      36,    0,  313,    2, 0x06 /* Public */,
      37,    0,  314,    2, 0x06 /* Public */,
      38,    0,  315,    2, 0x06 /* Public */,
      39,    1,  316,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      41,    1,  319,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      42,    1,  322,    2, 0x02 /* Public */,
      43,    1,  325,    2, 0x02 /* Public */,
      44,    1,  328,    2, 0x02 /* Public */,
      45,    1,  331,    2, 0x02 /* Public */,
      46,    1,  334,    2, 0x02 /* Public */,
      47,    1,  337,    2, 0x02 /* Public */,
      48,    1,  340,    2, 0x02 /* Public */,
      49,    1,  343,    2, 0x02 /* Public */,
      50,    1,  346,    2, 0x02 /* Public */,
      51,    1,  349,    2, 0x02 /* Public */,
      52,    1,  352,    2, 0x02 /* Public */,
      53,    1,  355,    2, 0x02 /* Public */,
      54,    1,  358,    2, 0x02 /* Public */,
      55,    0,  361,    2, 0x02 /* Public */,

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
    QMetaType::Void, QMetaType::QVariant,   40,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,   40,

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
    QMetaType::Void, QMetaType::Short,    2,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::Void, QMetaType::UChar,    2,
    QMetaType::Void, QMetaType::UShort,    2,
    QMetaType::QVariant,

 // properties: name, type, flags
      56, QMetaType::Bool, 0x00495103,
      57, QMetaType::Bool, 0x00495103,
      58, QMetaType::Bool, 0x00495103,
      59, QMetaType::Bool, 0x00495103,
      60, QMetaType::Bool, 0x00495103,
      61, QMetaType::Bool, 0x00495103,
      62, QMetaType::Bool, 0x00495103,
      63, QMetaType::Bool, 0x00495103,
      64, QMetaType::Bool, 0x00495103,
      65, QMetaType::Short, 0x00495103,
      66, QMetaType::UShort, 0x00495103,
      67, QMetaType::UChar, 0x00495103,
      68, QMetaType::UShort, 0x00495103,
      69, QMetaType::QString, 0x00495001,
      70, QMetaType::QString, 0x00495001,
      71, QMetaType::QString, 0x00495001,
      72, QMetaType::QString, 0x00495001,
      73, QMetaType::QString, 0x00495001,
      74, QMetaType::QString, 0x00495001,
      75, QMetaType::QString, 0x00495001,
      76, QMetaType::QString, 0x00495001,
      77, QMetaType::QString, 0x00495001,
      78, QMetaType::QString, 0x00495001,
      79, QMetaType::QString, 0x00495001,
      80, QMetaType::QString, 0x00495001,
      81, QMetaType::QString, 0x00495001,
      82, QMetaType::QString, 0x00495001,
      83, QMetaType::QString, 0x00495001,
      84, QMetaType::QString, 0x00495001,
      85, QMetaType::QString, 0x00495001,
      86, QMetaType::QString, 0x00495001,
      87, QMetaType::QString, 0x00495001,
      88, QMetaType::QString, 0x00495001,
      89, QMetaType::QString, 0x00495001,
      90, QMetaType::QString, 0x00495001,
      91, QMetaType::QString, 0x00495001,
      92, QMetaType::QString, 0x00495001,
      93, QMetaType::QString, 0x00495001,
      94, QMetaType::QString, 0x00495001,
      95, QMetaType::QString, 0x00495001,
      96, QMetaType::QString, 0x00495001,
      97, QMetaType::QString, 0x00495001,
      98, QMetaType::QString, 0x00495001,
      99, QMetaType::QString, 0x00495001,
     100, QMetaType::QString, 0x00495001,
     101, QMetaType::QString, 0x00495001,
     102, QMetaType::QString, 0x00495001,
     103, QMetaType::QString, 0x00495001,
     104, QMetaType::QString, 0x00495001,
     105, QMetaType::QString, 0x00495001,
     106, QMetaType::QString, 0x00495001,
      40, QMetaType::QVariant, 0x00495103,

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
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      18,
      19,
      20,
      13,
      14,
      22,
      23,
      24,
      25,
      26,
      27,
      28,
      25,
      26,
      27,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      29,
      30,
      31,
      32,
      33,
      34,
      35,
      36,
      37,

 // enums: name, flags, count, data
     107, 0x0,    2,  582,
     110, 0x0,    2,  586,
     113, 0x0,    3,  590,

 // enum data: key, value
     108, uint(PCanManager::Mannaul),
     109, uint(PCanManager::Auto),
     111, uint(PCanManager::Off),
     112, uint(PCanManager::On),
     114, uint(PCanManager::D),
     115, uint(PCanManager::N),
     116, uint(PCanManager::R),

       0        // eod
};

void PCanManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PCanManager *_t = static_cast<PCanManager *>(_o);
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
        case 12: _t->CycleChanged(); break;
        case 13: _t->set_str_ID1Changed(); break;
        case 14: _t->set_str_ID2Changed(); break;
        case 15: _t->get_str_QMorAChanged(); break;
        case 16: _t->get_str_ESTOPChanged(); break;
        case 17: _t->get_str_GEARChanged(); break;
        case 18: _t->get_str_SPEEDChanged(); break;
        case 19: _t->get_str_STEERChanged(); break;
        case 20: _t->get_str_BRAKEChanged(); break;
        case 21: _t->get_str_ALIVEChanged(); break;
        case 22: _t->set_str_QMorAChanged(); break;
        case 23: _t->set_str_ESTOPChanged(); break;
        case 24: _t->set_str_GEARChanged(); break;
        case 25: _t->set_str_SPEEDChanged(); break;
        case 26: _t->set_str_STEERChanged(); break;
        case 27: _t->set_str_BRAKEChanged(); break;
        case 28: _t->set_str_ALIVEChanged(); break;
        case 29: _t->set_str_Encoder0Changed(); break;
        case 30: _t->set_str_Encoder1Changed(); break;
        case 31: _t->set_str_Encoder2Changed(); break;
        case 32: _t->set_str_Encoder3Changed(); break;
        case 33: _t->set_str_BCRChanged(); break;
        case 34: _t->set_str_BRChanged(); break;
        case 35: _t->set_str_BEChanged(); break;
        case 36: _t->set_str_BIMChanged(); break;
        case 37: _t->dataChanged((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 38: _t->setData((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        case 39: _t->setActive((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 40: _t->setAutoEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 41: _t->setEstopEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 42: _t->setSteerEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 43: _t->setSpeedEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 44: _t->setBrakeEnable((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 45: _t->setGearDrive((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 46: _t->setGearNeutral((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 47: _t->setGearReverse((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 48: _t->setSteerAngle((*reinterpret_cast< const qint16(*)>(_a[1]))); break;
        case 49: _t->setSpeed((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 50: _t->setBrake((*reinterpret_cast< const quint8(*)>(_a[1]))); break;
        case 51: _t->setCycle((*reinterpret_cast< const quint16(*)>(_a[1]))); break;
        case 52: { QVariant _r = _t->getData();
            if (_a[0]) *reinterpret_cast< QVariant*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::ActiveChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::AutoEnableChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::EstopEnableChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SteerEnableChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SpeedEnableChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::BrakeEnableChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::GearDriveChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::GearNeutralChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::GearReverseChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SteerAngleChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::SpeedChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::BrakeChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::CycleChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_ID1Changed)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_ID2Changed)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::get_str_QMorAChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::get_str_ESTOPChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::get_str_GEARChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::get_str_SPEEDChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::get_str_STEERChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::get_str_BRAKEChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::get_str_ALIVEChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_QMorAChanged)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_ESTOPChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_GEARChanged)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_SPEEDChanged)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_STEERChanged)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_BRAKEChanged)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_ALIVEChanged)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_Encoder0Changed)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_Encoder1Changed)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_Encoder2Changed)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_Encoder3Changed)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_BCRChanged)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_BRChanged)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_BEChanged)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::set_str_BIMChanged)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (PCanManager::*_t)(const QVariant );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PCanManager::dataChanged)) {
                *result = 37;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        PCanManager *_t = static_cast<PCanManager *>(_o);
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
        case 9: *reinterpret_cast< qint16*>(_v) = _t->getSteerAngle(); break;
        case 10: *reinterpret_cast< quint16*>(_v) = _t->getSpeed(); break;
        case 11: *reinterpret_cast< quint8*>(_v) = _t->getBrake(); break;
        case 12: *reinterpret_cast< quint16*>(_v) = _t->getCycle(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->get_str_QMorA(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->get_str_ESTOP(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->get_str_GEAR(); break;
        case 16: *reinterpret_cast< QString*>(_v) = _t->get_str_SPEED(); break;
        case 17: *reinterpret_cast< QString*>(_v) = _t->get_str_STEER(); break;
        case 18: *reinterpret_cast< QString*>(_v) = _t->get_str_BRAKE(); break;
        case 19: *reinterpret_cast< QString*>(_v) = _t->get_str_ALIVE(); break;
        case 20: *reinterpret_cast< QString*>(_v) = _t->get_modified_str_SPEED(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->get_modified_str_STEER(); break;
        case 22: *reinterpret_cast< QString*>(_v) = _t->get_modified_str_BRAKE(); break;
        case 23: *reinterpret_cast< QString*>(_v) = _t->set_str_ID1(); break;
        case 24: *reinterpret_cast< QString*>(_v) = _t->set_str_ID2(); break;
        case 25: *reinterpret_cast< QString*>(_v) = _t->set_str_QMorA(); break;
        case 26: *reinterpret_cast< QString*>(_v) = _t->set_str_ESTOP(); break;
        case 27: *reinterpret_cast< QString*>(_v) = _t->set_str_GEAR(); break;
        case 28: *reinterpret_cast< QString*>(_v) = _t->set_str_SPEED(); break;
        case 29: *reinterpret_cast< QString*>(_v) = _t->set_str_STEER(); break;
        case 30: *reinterpret_cast< QString*>(_v) = _t->set_str_BRAKE(); break;
        case 31: *reinterpret_cast< QString*>(_v) = _t->set_str_ALIVE(); break;
        case 32: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_SPEED(); break;
        case 33: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_STEER(); break;
        case 34: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_BRAKE(); break;
        case 35: *reinterpret_cast< QString*>(_v) = _t->set_str_Encoder0(); break;
        case 36: *reinterpret_cast< QString*>(_v) = _t->set_str_Encoder1(); break;
        case 37: *reinterpret_cast< QString*>(_v) = _t->set_str_Encoder2(); break;
        case 38: *reinterpret_cast< QString*>(_v) = _t->set_str_Encoder3(); break;
        case 39: *reinterpret_cast< QString*>(_v) = _t->set_str_BCR(); break;
        case 40: *reinterpret_cast< QString*>(_v) = _t->set_str_BR(); break;
        case 41: *reinterpret_cast< QString*>(_v) = _t->set_str_BE(); break;
        case 42: *reinterpret_cast< QString*>(_v) = _t->set_str_BIM(); break;
        case 43: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_Encoder0(); break;
        case 44: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_Encoder1(); break;
        case 45: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_Encoder2(); break;
        case 46: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_Encoder3(); break;
        case 47: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_BCR(); break;
        case 48: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_BR(); break;
        case 49: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_BE(); break;
        case 50: *reinterpret_cast< QString*>(_v) = _t->set_modified_str_BIM(); break;
        case 51: *reinterpret_cast< QVariant*>(_v) = _t->getData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        PCanManager *_t = static_cast<PCanManager *>(_o);
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
        case 9: _t->setSteerAngle(*reinterpret_cast< qint16*>(_v)); break;
        case 10: _t->setSpeed(*reinterpret_cast< quint16*>(_v)); break;
        case 11: _t->setBrake(*reinterpret_cast< quint8*>(_v)); break;
        case 12: _t->setCycle(*reinterpret_cast< quint16*>(_v)); break;
        case 51: _t->setData(*reinterpret_cast< QVariant*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject PCanManager::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_PCanManager.data,
      qt_meta_data_PCanManager,  qt_static_metacall, nullptr, nullptr}
};


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
        if (_id < 53)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 53;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 53)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 53;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 52;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 52;
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
void PCanManager::CycleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void PCanManager::set_str_ID1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void PCanManager::set_str_ID2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void PCanManager::get_str_QMorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void PCanManager::get_str_ESTOPChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void PCanManager::get_str_GEARChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void PCanManager::get_str_SPEEDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void PCanManager::get_str_STEERChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void PCanManager::get_str_BRAKEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void PCanManager::get_str_ALIVEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void PCanManager::set_str_QMorAChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void PCanManager::set_str_ESTOPChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void PCanManager::set_str_GEARChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void PCanManager::set_str_SPEEDChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void PCanManager::set_str_STEERChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void PCanManager::set_str_BRAKEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void PCanManager::set_str_ALIVEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void PCanManager::set_str_Encoder0Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void PCanManager::set_str_Encoder1Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}

// SIGNAL 31
void PCanManager::set_str_Encoder2Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 31, nullptr);
}

// SIGNAL 32
void PCanManager::set_str_Encoder3Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 32, nullptr);
}

// SIGNAL 33
void PCanManager::set_str_BCRChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 33, nullptr);
}

// SIGNAL 34
void PCanManager::set_str_BRChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 34, nullptr);
}

// SIGNAL 35
void PCanManager::set_str_BEChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 35, nullptr);
}

// SIGNAL 36
void PCanManager::set_str_BIMChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 36, nullptr);
}

// SIGNAL 37
void PCanManager::dataChanged(const QVariant _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
