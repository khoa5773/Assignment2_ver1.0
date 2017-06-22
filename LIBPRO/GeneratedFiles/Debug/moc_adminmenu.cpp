/****************************************************************************
** Meta object code from reading C++ file 'adminmenu.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../adminmenu.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminmenu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_adminmenu_t {
    QByteArrayData data[13];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_adminmenu_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_adminmenu_t qt_meta_stringdata_adminmenu = {
    {
QT_MOC_LITERAL(0, 0, 9), // "adminmenu"
QT_MOC_LITERAL(1, 10, 10), // "chooserole"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 18), // "on_Account_clicked"
QT_MOC_LITERAL(4, 41, 21), // "on_chooseRole_clicked"
QT_MOC_LITERAL(5, 63, 23), // "on_searchButton_clicked"
QT_MOC_LITERAL(6, 87, 18), // "setupAccountWidget"
QT_MOC_LITERAL(7, 106, 19), // "destroyAcountWidget"
QT_MOC_LITERAL(8, 126, 25), // "on_checkUser_stateChanged"
QT_MOC_LITERAL(9, 152, 23), // "on_checkAd_stateChanged"
QT_MOC_LITERAL(10, 176, 24), // "on_checkLib_stateChanged"
QT_MOC_LITERAL(11, 201, 18), // "on_addUser_clicked"
QT_MOC_LITERAL(12, 220, 23) // "on_logoutButton_clicked"

    },
    "adminmenu\0chooserole\0\0on_Account_clicked\0"
    "on_chooseRole_clicked\0on_searchButton_clicked\0"
    "setupAccountWidget\0destroyAcountWidget\0"
    "on_checkUser_stateChanged\0"
    "on_checkAd_stateChanged\0"
    "on_checkLib_stateChanged\0on_addUser_clicked\0"
    "on_logoutButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_adminmenu[] = {

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
       1,    0,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   75,    2, 0x0a /* Public */,
       4,    0,   76,    2, 0x0a /* Public */,
       5,    0,   77,    2, 0x0a /* Public */,
       6,    2,   78,    2, 0x0a /* Public */,
       6,    1,   83,    2, 0x0a /* Public */,
       7,    0,   86,    2, 0x0a /* Public */,
       8,    1,   87,    2, 0x0a /* Public */,
       9,    1,   90,    2, 0x0a /* Public */,
      10,    1,   93,    2, 0x0a /* Public */,
      11,    0,   96,    2, 0x0a /* Public */,
      12,    0,   97,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void adminmenu::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        adminmenu *_t = static_cast<adminmenu *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->chooserole(); break;
        case 1: _t->on_Account_clicked(); break;
        case 2: _t->on_chooseRole_clicked(); break;
        case 3: _t->on_searchButton_clicked(); break;
        case 4: _t->setupAccountWidget((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 5: _t->setupAccountWidget((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->destroyAcountWidget(); break;
        case 7: _t->on_checkUser_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_checkAd_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_checkLib_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_addUser_clicked(); break;
        case 11: _t->on_logoutButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (adminmenu::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&adminmenu::chooserole)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject adminmenu::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_adminmenu.data,
      qt_meta_data_adminmenu,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *adminmenu::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *adminmenu::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_adminmenu.stringdata0))
        return static_cast<void*>(const_cast< adminmenu*>(this));
    if (!strcmp(_clname, "Ui::adminmenu"))
        return static_cast< Ui::adminmenu*>(const_cast< adminmenu*>(this));
    return QWidget::qt_metacast(_clname);
}

int adminmenu::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void adminmenu::chooserole()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
