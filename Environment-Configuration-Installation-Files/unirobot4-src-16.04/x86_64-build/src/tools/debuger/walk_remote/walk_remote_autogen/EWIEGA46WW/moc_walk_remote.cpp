/****************************************************************************
** Meta object code from reading C++ file 'walk_remote.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/tools/debuger/walk_remote/walk_remote.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'walk_remote.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WalkRemote_t {
    QByteArrayData data[8];
    char stringdata0[67];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WalkRemote_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WalkRemote_t qt_meta_stringdata_WalkRemote = {
    {
QT_MOC_LITERAL(0, 0, 10), // "WalkRemote"
QT_MOC_LITERAL(1, 11, 6), // "closed"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 9), // "procTimer"
QT_MOC_LITERAL(4, 29, 11), // "procXSlider"
QT_MOC_LITERAL(5, 41, 1), // "v"
QT_MOC_LITERAL(6, 43, 11), // "procYSlider"
QT_MOC_LITERAL(7, 55, 11) // "procDSlider"

    },
    "WalkRemote\0closed\0\0procTimer\0procXSlider\0"
    "v\0procYSlider\0procDSlider"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WalkRemote[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    1,   41,    2, 0x0a /* Public */,
       6,    1,   44,    2, 0x0a /* Public */,
       7,    1,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,

       0        // eod
};

void WalkRemote::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WalkRemote *_t = static_cast<WalkRemote *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closed(); break;
        case 1: _t->procTimer(); break;
        case 2: _t->procXSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->procYSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->procDSlider((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WalkRemote::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WalkRemote::closed)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject WalkRemote::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_WalkRemote.data,
      qt_meta_data_WalkRemote,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WalkRemote::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WalkRemote::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WalkRemote.stringdata0))
        return static_cast<void*>(const_cast< WalkRemote*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int WalkRemote::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void WalkRemote::closed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
