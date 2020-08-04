/****************************************************************************
** Meta object code from reading C++ file 'canmanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../ERP_Control/modules/canmanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'canmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CanManager_t {
    QByteArrayData data[10];
    char stringdata0[110];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CanManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CanManager_t qt_meta_stringdata_CanManager = {
    {
QT_MOC_LITERAL(0, 0, 10), // "CanManager"
QT_MOC_LITERAL(1, 11, 15), // "TextAreaChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 14), // "frameIDChanged"
QT_MOC_LITERAL(4, 43, 7), // "frameID"
QT_MOC_LITERAL(5, 51, 16), // "frameDataChanged"
QT_MOC_LITERAL(6, 68, 9), // "frameData"
QT_MOC_LITERAL(7, 78, 11), // "setTextArea"
QT_MOC_LITERAL(8, 90, 10), // "buttontest"
QT_MOC_LITERAL(9, 101, 8) // "TextArea"

    },
    "CanManager\0TextAreaChanged\0\0frameIDChanged\0"
    "frameID\0frameDataChanged\0frameData\0"
    "setTextArea\0buttontest\0TextArea"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CanManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,
       5,    1,   43,    2, 0x06 /* Public */,

 // methods: name, argc, parameters, tag, flags
       7,    1,   46,    2, 0x02 /* Public */,
       8,    0,   49,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    6,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::QString, 0x00495103,
       4, QMetaType::QString, 0x00495103,
       6, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void CanManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CanManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->TextAreaChanged(); break;
        case 1: _t->frameIDChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->frameDataChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setTextArea((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->buttontest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CanManager::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanManager::TextAreaChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CanManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanManager::frameIDChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CanManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CanManager::frameDataChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CanManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getTextArea(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getframeID(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getframeData(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<CanManager *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTextArea(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setFrameID(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setFrameData(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject CanManager::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_CanManager.data,
    qt_meta_data_CanManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CanManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CanManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CanManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int CanManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void CanManager::TextAreaChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CanManager::frameIDChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CanManager::frameDataChanged(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
