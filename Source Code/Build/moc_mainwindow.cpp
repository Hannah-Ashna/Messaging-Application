/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Src/headers/mainwindow.h"
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
    QByteArrayData data[49];
    char stringdata0[838];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 18), // "brokerDisconnected"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 13), // "setClientPort"
QT_MOC_LITERAL(4, 45, 1), // "p"
QT_MOC_LITERAL(5, 47, 24), // "on_buttonConnect_clicked"
QT_MOC_LITERAL(6, 72, 24), // "on_refreshButton_clicked"
QT_MOC_LITERAL(7, 97, 10), // "notifyUser"
QT_MOC_LITERAL(8, 108, 11), // "std::string"
QT_MOC_LITERAL(9, 120, 7), // "message"
QT_MOC_LITERAL(10, 128, 19), // "getCurrentRoomIndex"
QT_MOC_LITERAL(11, 148, 25), // "on_roomDropDown_activated"
QT_MOC_LITERAL(12, 174, 5), // "index"
QT_MOC_LITERAL(13, 180, 24), // "on_addRoomButton_clicked"
QT_MOC_LITERAL(14, 205, 27), // "on_deleteRoomButton_clicked"
QT_MOC_LITERAL(15, 233, 17), // "getCurrentChannel"
QT_MOC_LITERAL(16, 251, 7), // "Channel"
QT_MOC_LITERAL(17, 259, 28), // "on_channelDropDown_activated"
QT_MOC_LITERAL(18, 288, 27), // "on_addChannelButton_clicked"
QT_MOC_LITERAL(19, 316, 30), // "on_deleteChannelButton_clicked"
QT_MOC_LITERAL(20, 347, 14), // "updateContacts"
QT_MOC_LITERAL(21, 362, 22), // "on_onlineRadio_toggled"
QT_MOC_LITERAL(22, 385, 6), // "active"
QT_MOC_LITERAL(23, 392, 17), // "updateOnlineUsers"
QT_MOC_LITERAL(24, 410, 4), // "name"
QT_MOC_LITERAL(25, 415, 6), // "status"
QT_MOC_LITERAL(26, 422, 21), // "on_sendButton_clicked"
QT_MOC_LITERAL(27, 444, 24), // "on_addUserButton_clicked"
QT_MOC_LITERAL(28, 469, 27), // "on_removeUserButton_clicked"
QT_MOC_LITERAL(29, 497, 23), // "on_addModButton_clicked"
QT_MOC_LITERAL(30, 521, 26), // "on_removeModButton_clicked"
QT_MOC_LITERAL(31, 548, 25), // "on_settingsButton_clicked"
QT_MOC_LITERAL(32, 574, 21), // "on_backButton_clicked"
QT_MOC_LITERAL(33, 596, 10), // "updateFile"
QT_MOC_LITERAL(34, 607, 8), // "filePath"
QT_MOC_LITERAL(35, 616, 15), // "read_userConfig"
QT_MOC_LITERAL(36, 632, 8), // "username"
QT_MOC_LITERAL(37, 641, 15), // "read_roomConfig"
QT_MOC_LITERAL(38, 657, 12), // "generateSalt"
QT_MOC_LITERAL(39, 670, 17), // "getHashedPassword"
QT_MOC_LITERAL(40, 688, 4), // "salt"
QT_MOC_LITERAL(41, 693, 8), // "password"
QT_MOC_LITERAL(42, 702, 22), // "on_loginButton_clicked"
QT_MOC_LITERAL(43, 725, 26), // "on_createAccButton_clicked"
QT_MOC_LITERAL(44, 752, 23), // "on_signupButton_clicked"
QT_MOC_LITERAL(45, 776, 27), // "on_signupBackButton_clicked"
QT_MOC_LITERAL(46, 804, 10), // "setupUsers"
QT_MOC_LITERAL(47, 815, 9), // "loadAdmin"
QT_MOC_LITERAL(48, 825, 12) // "TimerTimeout"

    },
    "MainWindow\0brokerDisconnected\0\0"
    "setClientPort\0p\0on_buttonConnect_clicked\0"
    "on_refreshButton_clicked\0notifyUser\0"
    "std::string\0message\0getCurrentRoomIndex\0"
    "on_roomDropDown_activated\0index\0"
    "on_addRoomButton_clicked\0"
    "on_deleteRoomButton_clicked\0"
    "getCurrentChannel\0Channel\0"
    "on_channelDropDown_activated\0"
    "on_addChannelButton_clicked\0"
    "on_deleteChannelButton_clicked\0"
    "updateContacts\0on_onlineRadio_toggled\0"
    "active\0updateOnlineUsers\0name\0status\0"
    "on_sendButton_clicked\0on_addUserButton_clicked\0"
    "on_removeUserButton_clicked\0"
    "on_addModButton_clicked\0"
    "on_removeModButton_clicked\0"
    "on_settingsButton_clicked\0"
    "on_backButton_clicked\0updateFile\0"
    "filePath\0read_userConfig\0username\0"
    "read_roomConfig\0generateSalt\0"
    "getHashedPassword\0salt\0password\0"
    "on_loginButton_clicked\0"
    "on_createAccButton_clicked\0"
    "on_signupButton_clicked\0"
    "on_signupBackButton_clicked\0setupUsers\0"
    "loadAdmin\0TimerTimeout"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  189,    2, 0x08 /* Private */,
       3,    1,  190,    2, 0x08 /* Private */,
       5,    0,  193,    2, 0x08 /* Private */,
       6,    0,  194,    2, 0x08 /* Private */,
       7,    1,  195,    2, 0x08 /* Private */,
      10,    0,  198,    2, 0x08 /* Private */,
      11,    1,  199,    2, 0x08 /* Private */,
      13,    0,  202,    2, 0x08 /* Private */,
      14,    0,  203,    2, 0x08 /* Private */,
      15,    0,  204,    2, 0x08 /* Private */,
      17,    1,  205,    2, 0x08 /* Private */,
      18,    0,  208,    2, 0x08 /* Private */,
      19,    0,  209,    2, 0x08 /* Private */,
      20,    0,  210,    2, 0x08 /* Private */,
      21,    1,  211,    2, 0x08 /* Private */,
      23,    2,  214,    2, 0x08 /* Private */,
      26,    0,  219,    2, 0x08 /* Private */,
      27,    0,  220,    2, 0x08 /* Private */,
      28,    0,  221,    2, 0x08 /* Private */,
      29,    0,  222,    2, 0x08 /* Private */,
      30,    0,  223,    2, 0x08 /* Private */,
      31,    0,  224,    2, 0x08 /* Private */,
      32,    0,  225,    2, 0x08 /* Private */,
      33,    1,  226,    2, 0x08 /* Private */,
      35,    1,  229,    2, 0x08 /* Private */,
      37,    1,  232,    2, 0x08 /* Private */,
      38,    0,  235,    2, 0x08 /* Private */,
      39,    2,  236,    2, 0x08 /* Private */,
      42,    0,  241,    2, 0x08 /* Private */,
      43,    0,  242,    2, 0x08 /* Private */,
      44,    0,  243,    2, 0x08 /* Private */,
      45,    0,  244,    2, 0x08 /* Private */,
      46,    0,  245,    2, 0x08 /* Private */,
      47,    0,  246,    2, 0x08 /* Private */,
      48,    0,  247,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Int,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 16,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,   24,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   34,
    QMetaType::Void, 0x80000000 | 8,   36,
    QMetaType::Void, 0x80000000 | 8,   36,
    QMetaType::QString,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   40,   41,
    QMetaType::Void,
    QMetaType::Void,
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
        case 0: _t->brokerDisconnected(); break;
        case 1: _t->setClientPort((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_buttonConnect_clicked(); break;
        case 3: _t->on_refreshButton_clicked(); break;
        case 4: _t->notifyUser((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 5: { int _r = _t->getCurrentRoomIndex();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->on_roomDropDown_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_addRoomButton_clicked(); break;
        case 8: _t->on_deleteRoomButton_clicked(); break;
        case 9: { Channel _r = _t->getCurrentChannel();
            if (_a[0]) *reinterpret_cast< Channel*>(_a[0]) = std::move(_r); }  break;
        case 10: _t->on_channelDropDown_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_addChannelButton_clicked(); break;
        case 12: _t->on_deleteChannelButton_clicked(); break;
        case 13: _t->updateContacts(); break;
        case 14: _t->on_onlineRadio_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 15: _t->updateOnlineUsers((*reinterpret_cast< std::string(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 16: _t->on_sendButton_clicked(); break;
        case 17: _t->on_addUserButton_clicked(); break;
        case 18: _t->on_removeUserButton_clicked(); break;
        case 19: _t->on_addModButton_clicked(); break;
        case 20: _t->on_removeModButton_clicked(); break;
        case 21: _t->on_settingsButton_clicked(); break;
        case 22: _t->on_backButton_clicked(); break;
        case 23: _t->updateFile((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 24: _t->read_userConfig((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 25: _t->read_roomConfig((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 26: { QString _r = _t->generateSalt();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 27: { QString _r = _t->getHashedPassword((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 28: _t->on_loginButton_clicked(); break;
        case 29: _t->on_createAccButton_clicked(); break;
        case 30: _t->on_signupButton_clicked(); break;
        case 31: _t->on_signupBackButton_clicked(); break;
        case 32: _t->setupUsers(); break;
        case 33: _t->loadAdmin(); break;
        case 34: _t->TimerTimeout(); break;
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
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 35;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
