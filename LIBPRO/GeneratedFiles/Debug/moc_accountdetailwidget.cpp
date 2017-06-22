/****************************************************************************
** Meta object code from reading C++ file 'accountdetailwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../accountdetailwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountdetailwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_accountDetailWidget_t {
    QByteArrayData data[8];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_accountDetailWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_accountDetailWidget_t qt_meta_stringdata_accountDetailWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "accountDetailWidget"
QT_MOC_LITERAL(1, 20, 16), // "on_block_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 18), // "on_unblock_clicked"
QT_MOC_LITERAL(4, 57, 17), // "on_demote_clicked"
QT_MOC_LITERAL(5, 75, 18), // "on_promote_clicked"
QT_MOC_LITERAL(6, 94, 20), // "on_resetpass_clicked"
QT_MOC_LITERAL(7, 115, 17) // "on_remove_clicked"

    },
    "accountDetailWidget\0on_block_clicked\0"
    "\0on_unblock_clicked\0on_demote_clicked\0"
    "on_promote_clicked\0on_resetpass_clicked\0"
    "on_remove_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_accountDetailWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void accountDetailWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        accountDetailWidget *_t = static_cast<accountDetailWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_block_clicked(); break;
        case 1: _t->on_unblock_clicked(); break;
        case 2: _t->on_demote_clicked(); break;
        case 3: _t->on_promote_clicked(); break;
        case 4: _t->on_resetpass_clicked(); break;
        case 5: _t->on_remove_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject accountDetailWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_accountDetailWidget.data,
      qt_meta_data_accountDetailWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *accountDetailWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *accountDetailWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_accountDetailWidget.stringdata0))
        return static_cast<void*>(const_cast< accountDetailWidget*>(this));
    if (!strcmp(_clname, "Ui::accountDetailWidget"))
        return static_cast< Ui::accountDetailWidget*>(const_cast< accountDetailWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int accountDetailWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
