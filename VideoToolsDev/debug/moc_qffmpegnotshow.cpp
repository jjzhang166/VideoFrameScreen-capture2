/****************************************************************************
** Meta object code from reading C++ file 'qffmpegnotshow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../qffmpegnotshow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qffmpegnotshow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QFFmpegNotShow_t {
    QByteArrayData data[5];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFFmpegNotShow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFFmpegNotShow_t qt_meta_stringdata_QFFmpegNotShow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QFFmpegNotShow"
QT_MOC_LITERAL(1, 15, 9), // "playLocal"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 11), // "setSaveType"
QT_MOC_LITERAL(4, 38, 4) // "type"

    },
    "QFFmpegNotShow\0playLocal\0\0setSaveType\0"
    "type"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFFmpegNotShow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void QFFmpegNotShow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFFmpegNotShow *_t = static_cast<QFFmpegNotShow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->playLocal(); break;
        case 1: _t->setSaveType((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QFFmpegNotShow::staticMetaObject = {
    { &QFFmpeg::staticMetaObject, qt_meta_stringdata_QFFmpegNotShow.data,
      qt_meta_data_QFFmpegNotShow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFFmpegNotShow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFFmpegNotShow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFFmpegNotShow.stringdata0))
        return static_cast<void*>(const_cast< QFFmpegNotShow*>(this));
    return QFFmpeg::qt_metacast(_clname);
}

int QFFmpegNotShow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFFmpeg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
