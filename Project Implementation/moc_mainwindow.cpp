/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "Messaging App Codebase/headers/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[32];
    char stringdata0[596];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 13), // "setClientPort"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 1), // "p"
QT_MOC_LITERAL(4, 28, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(5, 50, 24), // "on_addUserButton_clicked"
QT_MOC_LITERAL(6, 75, 27), // "on_removeUserButton_clicked"
QT_MOC_LITERAL(7, 103, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(8, 129, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(9, 151, 24), // "on_buttonConnect_clicked"
QT_MOC_LITERAL(10, 176, 10), // "updateFile"
QT_MOC_LITERAL(11, 187, 11), // "std::string"
QT_MOC_LITERAL(12, 199, 8), // "filePath"
QT_MOC_LITERAL(13, 208, 6), // "isUser"
QT_MOC_LITERAL(14, 215, 19), // "getCurrentRoomIndex"
QT_MOC_LITERAL(15, 235, 25), // "on_roomDropDown_activated"
QT_MOC_LITERAL(16, 261, 5), // "index"
QT_MOC_LITERAL(17, 267, 24), // "on_addRoomButton_clicked"
QT_MOC_LITERAL(18, 292, 27), // "on_deleteRoomButton_clicked"
QT_MOC_LITERAL(19, 320, 17), // "getCurrentChannel"
QT_MOC_LITERAL(20, 338, 7), // "Channel"
QT_MOC_LITERAL(21, 346, 28), // "on_channelDropDown_activated"
QT_MOC_LITERAL(22, 375, 27), // "on_addChannelButton_clicked"
QT_MOC_LITERAL(23, 403, 30), // "on_deleteChannelButton_clicked"
QT_MOC_LITERAL(24, 434, 15), // "read_userConfig"
QT_MOC_LITERAL(25, 450, 8), // "username"
QT_MOC_LITERAL(26, 459, 15), // "read_roomConfig"
QT_MOC_LITERAL(27, 475, 22), // "on_loginButton_clicked"
QT_MOC_LITERAL(28, 498, 26), // "on_createAccButton_clicked"
QT_MOC_LITERAL(29, 525, 23), // "on_signupButton_clicked"
QT_MOC_LITERAL(30, 549, 27), // "on_signupBackButton_clicked"
QT_MOC_LITERAL(31, 577, 18) // "brokerDisconnected"

    },
    "MainWindow\0setClientPort\0\0p\0"
    "on_sendButton_clicked\0on_addUserButton_clicked\0"
    "on_removeUserButton_clicked\0"
    "on_settingsButton_clicked\0"
    "on_backButton_clicked\0on_buttonConnect_clicked\0"
    "updateFile\0std::string\0filePath\0isUser\0"
    "getCurrentRoomIndex\0on_roomDropDown_activated\0"
    "index\0on_addRoomButton_clicked\0"
    "on_deleteRoomButton_clicked\0"
    "getCurrentChannel\0Channel\0"
    "on_channelDropDown_activated\0"
    "on_addChannelButton_clicked\0"
    "on_deleteChannelButton_clicked\0"
    "read_userConfig\0username\0read_roomConfig\0"
    "on_loginButton_clicked\0"
    "on_createAccButton_clicked\0"
    "on_signupButton_clicked\0"
    "on_signupBackButton_clicked\0"
    "brokerDisconnected"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      23,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  129,    2, 0x0a /* Public */,
       4,    0,  132,    2, 0x08 /* Private */,
       5,    0,  133,    2, 0x08 /* Private */,
       6,    0,  134,    2, 0x08 /* Private */,
       7,    0,  135,    2, 0x08 /* Private */,
       8,    0,  136,    2, 0x08 /* Private */,
       9,    0,  137,    2, 0x08 /* Private */,
      10,    2,  138,    2, 0x08 /* Private */,
      14,    0,  143,    2, 0x08 /* Private */,
      15,    1,  144,    2, 0x08 /* Private */,
      17,    0,  147,    2, 0x08 /* Private */,
      18,    0,  148,    2, 0x08 /* Private */,
      19,    0,  149,    2, 0x08 /* Private */,
      21,    1,  150,    2, 0x08 /* Private */,
      22,    0,  153,    2, 0x08 /* Private */,
      23,    0,  154,    2, 0x08 /* Private */,
      24,    1,  155,    2, 0x08 /* Private */,
      26,    1,  158,    2, 0x08 /* Private */,
      27,    0,  161,    2, 0x08 /* Private */,
      28,    0,  162,    2, 0x08 /* Private */,
      29,    0,  163,    2, 0x08 /* Private */,
      30,    0,  164,    2, 0x08 /* Private */,
      31,    0,  165,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Bool,   12,   13,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 20,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   25,
    QMetaType::Void, 0x80000000 | 11,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->setClientPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_sendButton_clicked(); break;
        case 2: _t->on_addUserButton_clicked(); break;
        case 3: _t->on_removeUserButton_clicked(); break;
        case 4: _t->on_settingsButton_clicked(); break;
        case 5: _t->on_backButton_clicked(); break;
        case 6: _t->on_buttonConnect_clicked(); break;
        case 7: _t->updateFile((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 8: { int _r = _t->getCurrentRoomIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->on_roomDropDown_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_addRoomButton_clicked(); break;
        case 11: _t->on_deleteRoomButton_clicked(); break;
        case 12: { Channel _r = _t->getCurrentChannel();
            if (_a[0]) *reinterpret_cast< Channel*>(_a[0]) = std::move(_r); }  break;
        case 13: _t->on_channelDropDown_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_addChannelButton_clicked(); break;
        case 15: _t->on_deleteChannelButton_clicked(); break;
        case 16: _t->read_userConfig((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 17: _t->read_roomConfig((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 18: _t->on_loginButton_clicked(); break;
        case 19: _t->on_createAccButton_clicked(); break;
        case 20: _t->on_signupButton_clicked(); break;
        case 21: _t->on_signupBackButton_clicked(); break;
        case 22: _t->brokerDisconnected(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 23)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 23;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 23)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 23;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
