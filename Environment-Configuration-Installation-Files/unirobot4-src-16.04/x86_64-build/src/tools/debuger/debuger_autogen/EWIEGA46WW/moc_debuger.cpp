/****************************************************************************
** Meta object code from reading C++ file 'debuger.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/tools/debuger/debuger.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debuger.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Debuger_t {
    QByteArrayData data[13];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Debuger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Debuger_t qt_meta_stringdata_Debuger = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Debuger"
QT_MOC_LITERAL(1, 8, 17), // "procPlayerChanged"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "index"
QT_MOC_LITERAL(4, 33, 10), // "procClosed"
QT_MOC_LITERAL(5, 44, 9), // "procBtnIM"
QT_MOC_LITERAL(6, 54, 9), // "procBtnID"
QT_MOC_LITERAL(7, 64, 9), // "procBtnCS"
QT_MOC_LITERAL(8, 74, 9), // "procBtnTM"
QT_MOC_LITERAL(9, 84, 9), // "procBtnAD"
QT_MOC_LITERAL(10, 94, 9), // "procBtnAM"
QT_MOC_LITERAL(11, 104, 9), // "procBtnWR"
QT_MOC_LITERAL(12, 114, 9) // "procBtnJR"

    },
    "Debuger\0procPlayerChanged\0\0index\0"
    "procClosed\0procBtnIM\0procBtnID\0procBtnCS\0"
    "procBtnTM\0procBtnAD\0procBtnAM\0procBtnWR\0"
    "procBtnJR"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Debuger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x0a /* Public */,
       4,    0,   67,    2, 0x0a /* Public */,
       5,    0,   68,    2, 0x0a /* Public */,
       6,    0,   69,    2, 0x0a /* Public */,
       7,    0,   70,    2, 0x0a /* Public */,
       8,    0,   71,    2, 0x0a /* Public */,
       9,    0,   72,    2, 0x0a /* Public */,
      10,    0,   73,    2, 0x0a /* Public */,
      11,    0,   74,    2, 0x0a /* Public */,
      12,    0,   75,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Debuger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Debuger *_t = static_cast<Debuger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->procPlayerChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->procClosed(); break;
        case 2: _t->procBtnIM(); break;
        case 3: _t->procBtnID(); break;
        case 4: _t->procBtnCS(); break;
        case 5: _t->procBtnTM(); break;
        case 6: _t->procBtnAD(); break;
        case 7: _t->procBtnAM(); break;
        case 8: _t->procBtnWR(); break;
        case 9: _t->procBtnJR(); break;
        default: ;
        }
    }
}

const QMetaObject Debuger::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Debuger.data,
      qt_meta_data_Debuger,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Debuger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Debuger::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Debuger.stringdata0))
        return static_cast<void*>(const_cast< Debuger*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Debuger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
