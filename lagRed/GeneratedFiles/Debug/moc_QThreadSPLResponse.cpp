/****************************************************************************
** Meta object code from reading C++ file 'QThreadSPLResponse.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QThreadSPLResponse.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QThreadSPLResponse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QThreadSPLResponse_t {
    QByteArrayData data[11];
    char stringdata[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_QThreadSPLResponse_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_QThreadSPLResponse_t qt_meta_stringdata_QThreadSPLResponse = {
    {
QT_MOC_LITERAL(0, 0, 18),
QT_MOC_LITERAL(1, 19, 5),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 3),
QT_MOC_LITERAL(4, 30, 11),
QT_MOC_LITERAL(5, 42, 18),
QT_MOC_LITERAL(6, 61, 1),
QT_MOC_LITERAL(7, 63, 9),
QT_MOC_LITERAL(8, 73, 1),
QT_MOC_LITERAL(9, 75, 14),
QT_MOC_LITERAL(10, 90, 4)
    },
    "QThreadSPLResponse\0print\0\0str\0pushMessage\0"
    "SPLStandardMessage\0p\0changeLag\0l\0"
    "changeLossRate\0rate\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QThreadSPLResponse[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    1,   37,    2, 0x0a,
       7,    1,   40,    2, 0x0a,
       9,    1,   43,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void QThreadSPLResponse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QThreadSPLResponse *_t = static_cast<QThreadSPLResponse *>(_o);
        switch (_id) {
        case 0: _t->print((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->pushMessage((*reinterpret_cast< SPLStandardMessage(*)>(_a[1]))); break;
        case 2: _t->changeLag((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->changeLossRate((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QThreadSPLResponse::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QThreadSPLResponse::print)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject QThreadSPLResponse::staticMetaObject = {
    { &QThreadSPL::staticMetaObject, qt_meta_stringdata_QThreadSPLResponse.data,
      qt_meta_data_QThreadSPLResponse,  qt_static_metacall, 0, 0}
};


const QMetaObject *QThreadSPLResponse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QThreadSPLResponse::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QThreadSPLResponse.stringdata))
        return static_cast<void*>(const_cast< QThreadSPLResponse*>(this));
    return QThreadSPL::qt_metacast(_clname);
}

int QThreadSPLResponse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThreadSPL::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QThreadSPLResponse::print(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
