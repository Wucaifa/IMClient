/****************************************************************************
** Meta object code from reading C++ file 'usermgr.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../usermgr.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermgr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSUserMgrENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSUserMgrENDCLASS = QtMocHelpers::stringData(
    "UserMgr",
    "SlotAddFriendRsp",
    "",
    "std::shared_ptr<AuthRsp>",
    "rsp",
    "SlotAddFriendAuth",
    "std::shared_ptr<AuthInfo>",
    "auth"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSUserMgrENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[8];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[25];
    char stringdata4[4];
    char stringdata5[18];
    char stringdata6[26];
    char stringdata7[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSUserMgrENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSUserMgrENDCLASS_t qt_meta_stringdata_CLASSUserMgrENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "UserMgr"
        QT_MOC_LITERAL(8, 16),  // "SlotAddFriendRsp"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 24),  // "std::shared_ptr<AuthRsp>"
        QT_MOC_LITERAL(51, 3),  // "rsp"
        QT_MOC_LITERAL(55, 17),  // "SlotAddFriendAuth"
        QT_MOC_LITERAL(73, 25),  // "std::shared_ptr<AuthInfo>"
        QT_MOC_LITERAL(99, 4)   // "auth"
    },
    "UserMgr",
    "SlotAddFriendRsp",
    "",
    "std::shared_ptr<AuthRsp>",
    "rsp",
    "SlotAddFriendAuth",
    "std::shared_ptr<AuthInfo>",
    "auth"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSUserMgrENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x0a,    1 /* Public */,
       5,    1,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject UserMgr::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSUserMgrENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSUserMgrENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSUserMgrENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserMgr, std::true_type>,
        // method 'SlotAddFriendRsp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<AuthRsp>, std::false_type>,
        // method 'SlotAddFriendAuth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<AuthInfo>, std::false_type>
    >,
    nullptr
} };

void UserMgr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserMgr *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->SlotAddFriendRsp((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<AuthRsp>>>(_a[1]))); break;
        case 1: _t->SlotAddFriendAuth((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<AuthInfo>>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *UserMgr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *UserMgr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSUserMgrENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Singleton<UserMgr>"))
        return static_cast< Singleton<UserMgr>*>(this);
    if (!strcmp(_clname, "std::enable_shared_from_this<UserMgr>"))
        return static_cast< std::enable_shared_from_this<UserMgr>*>(this);
    return QObject::qt_metacast(_clname);
}

int UserMgr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
