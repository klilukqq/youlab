/****************************************************************************
** Meta object code from reading C++ file 'dayExtend.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../MyProject/gui/day/dayExtend.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dayExtend.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_dayExtend_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_dayExtend_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_dayExtend_t qt_meta_stringdata_dayExtend = {
    {
QT_MOC_LITERAL(0, 0, 9), // "dayExtend"
QT_MOC_LITERAL(1, 10, 18), // "on_Setting_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 19), // "on_Next_day_clicked"
QT_MOC_LITERAL(4, 50, 19), // "on_Prev_day_clicked"
QT_MOC_LITERAL(5, 70, 10), // "prevFormat"
QT_MOC_LITERAL(6, 81, 10), // "nextFormat"
QT_MOC_LITERAL(7, 92, 23), // "on_ChangeFormat_clicked"
QT_MOC_LITERAL(8, 116, 6) // "update"

    },
    "dayExtend\0on_Setting_clicked\0\0"
    "on_Next_day_clicked\0on_Prev_day_clicked\0"
    "prevFormat\0nextFormat\0on_ChangeFormat_clicked\0"
    "update"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_dayExtend[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x0a /* Public */,
       6,    0,   53,    2, 0x0a /* Public */,
       7,    0,   54,    2, 0x0a /* Public */,
       8,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void dayExtend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<dayExtend *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Setting_clicked(); break;
        case 1: _t->on_Next_day_clicked(); break;
        case 2: _t->on_Prev_day_clicked(); break;
        case 3: _t->prevFormat(); break;
        case 4: _t->nextFormat(); break;
        case 5: _t->on_ChangeFormat_clicked(); break;
        case 6: _t->update(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject dayExtend::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_dayExtend.data,
    qt_meta_data_dayExtend,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *dayExtend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *dayExtend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_dayExtend.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int dayExtend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
