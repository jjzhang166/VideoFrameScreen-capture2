/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[18];
    char stringdata0[208];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 12), // "sendSavePath"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "savePath"
QT_MOC_LITERAL(4, 30, 13), // "showVideoName"
QT_MOC_LITERAL(5, 44, 16), // "playAndSaveVideo"
QT_MOC_LITERAL(6, 61, 15), // "getSavePathRoot"
QT_MOC_LITERAL(7, 77, 9), // "playPause"
QT_MOC_LITERAL(8, 87, 16), // "slotValueChanged"
QT_MOC_LITERAL(9, 104, 5), // "value"
QT_MOC_LITERAL(10, 110, 14), // "slotUpdateTime"
QT_MOC_LITERAL(11, 125, 4), // "time"
QT_MOC_LITERAL(12, 130, 16), // "saveVideoPicture"
QT_MOC_LITERAL(13, 147, 16), // "seekAndStopStart"
QT_MOC_LITERAL(14, 164, 14), // "seekAndStopEnd"
QT_MOC_LITERAL(15, 179, 8), // "setImage"
QT_MOC_LITERAL(16, 188, 5), // "image"
QT_MOC_LITERAL(17, 194, 13) // "slotPlayVideo"

    },
    "Widget\0sendSavePath\0\0savePath\0"
    "showVideoName\0playAndSaveVideo\0"
    "getSavePathRoot\0playPause\0slotValueChanged\0"
    "value\0slotUpdateTime\0time\0saveVideoPicture\0"
    "seekAndStopStart\0seekAndStopEnd\0"
    "setImage\0image\0slotPlayVideo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   77,    2, 0x0a /* Public */,
       5,    0,   78,    2, 0x0a /* Public */,
       6,    0,   79,    2, 0x0a /* Public */,
       7,    0,   80,    2, 0x0a /* Public */,
       8,    1,   81,    2, 0x0a /* Public */,
      10,    1,   84,    2, 0x0a /* Public */,
      12,    0,   87,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x0a /* Public */,
      14,    0,   89,    2, 0x0a /* Public */,
      15,    1,   90,    2, 0x08 /* Private */,
      17,    0,   93,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   16,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendSavePath((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->showVideoName(); break;
        case 2: _t->playAndSaveVideo(); break;
        case 3: _t->getSavePathRoot(); break;
        case 4: _t->playPause(); break;
        case 5: _t->slotValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->slotUpdateTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 7: _t->saveVideoPicture(); break;
        case 8: _t->seekAndStopStart(); break;
        case 9: _t->seekAndStopEnd(); break;
        case 10: _t->setImage((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 11: _t->slotPlayVideo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::sendSavePath)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Widget::sendSavePath(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
