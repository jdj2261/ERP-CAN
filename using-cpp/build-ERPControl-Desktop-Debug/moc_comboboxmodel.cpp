/****************************************************************************
** Meta object code from reading C++ file 'comboboxmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ERP_Control/modules/comboboxmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'comboboxmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_comboboxmodel_t {
    QByteArrayData data[12];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_comboboxmodel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_comboboxmodel_t qt_meta_stringdata_comboboxmodel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "comboboxmodel"
QT_MOC_LITERAL(1, 14, 16), // "comboListChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 12), // "countChanged"
QT_MOC_LITERAL(4, 45, 19), // "currentIndexChanged"
QT_MOC_LITERAL(5, 65, 10), // "addElement"
QT_MOC_LITERAL(6, 76, 7), // "element"
QT_MOC_LITERAL(7, 84, 13), // "removeElement"
QT_MOC_LITERAL(8, 98, 5), // "index"
QT_MOC_LITERAL(9, 104, 9), // "comboList"
QT_MOC_LITERAL(10, 114, 5), // "count"
QT_MOC_LITERAL(11, 120, 12) // "currentIndex"

    },
    "comboboxmodel\0comboListChanged\0\0"
    "countChanged\0currentIndexChanged\0"
    "addElement\0element\0removeElement\0index\0"
    "comboList\0count\0currentIndex"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_comboboxmodel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   48, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    0,   41,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x02 /* Public */,
       7,    1,   45,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags
       9, QMetaType::QStringList, 0x00495103,
      10, QMetaType::Int, 0x00495103,
      11, QMetaType::Int, 0x00495003,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void comboboxmodel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<comboboxmodel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->comboListChanged(); break;
        case 1: _t->countChanged(); break;
        case 2: _t->currentIndexChanged(); break;
        case 3: _t->addElement((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->removeElement((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (comboboxmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comboboxmodel::comboListChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (comboboxmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comboboxmodel::countChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (comboboxmodel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&comboboxmodel::currentIndexChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<comboboxmodel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->comboList(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->count(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->currentIndex(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<comboboxmodel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setComboList(*reinterpret_cast< QStringList*>(_v)); break;
        case 1: _t->setCount(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setcurrentIndex(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject comboboxmodel::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_comboboxmodel.data,
    qt_meta_data_comboboxmodel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *comboboxmodel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *comboboxmodel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_comboboxmodel.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int comboboxmodel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void comboboxmodel::comboListChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void comboboxmodel::countChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void comboboxmodel::currentIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
