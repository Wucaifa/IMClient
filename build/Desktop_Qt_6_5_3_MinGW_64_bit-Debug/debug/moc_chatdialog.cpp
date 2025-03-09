/****************************************************************************
** Meta object code from reading C++ file 'chatdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../chatdialog.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSChatDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSChatDialogENDCLASS = QtMocHelpers::stringData(
    "ChatDialog",
    "slot_loading_chat_user",
    "",
    "slot_side_chat",
    "slot_side_contact",
    "slot_text_changed",
    "str",
    "slot_focus_out",
    "slot_loading_contact_user",
    "slot_switch_apply_friend_page",
    "slot_friend_info_page",
    "std::shared_ptr<UserInfo>",
    "user_info",
    "slot_show_search",
    "show",
    "slot_apply_friend",
    "std::shared_ptr<AddFriendApply>",
    "apply",
    "slot_add_auth_friend",
    "std::shared_ptr<AuthInfo>",
    "auth_info",
    "slot_auth_rsp",
    "std::shared_ptr<AuthRsp>",
    "auth_rsp",
    "slot_jump_chat_item",
    "std::shared_ptr<SearchInfo>",
    "si",
    "slot_jump_chat_item_from_infopage",
    "ui",
    "slot_item_clicked",
    "QListWidgetItem*",
    "item",
    "slot_text_chat_msg",
    "std::shared_ptr<TextChatMsg>",
    "msg",
    "slot_append_send_chat_msg",
    "std::shared_ptr<TextChatData>",
    "msgdata"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSChatDialogENDCLASS_t {
    uint offsetsAndSizes[76];
    char stringdata0[11];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[18];
    char stringdata5[18];
    char stringdata6[4];
    char stringdata7[15];
    char stringdata8[26];
    char stringdata9[30];
    char stringdata10[22];
    char stringdata11[26];
    char stringdata12[10];
    char stringdata13[17];
    char stringdata14[5];
    char stringdata15[18];
    char stringdata16[32];
    char stringdata17[6];
    char stringdata18[21];
    char stringdata19[26];
    char stringdata20[10];
    char stringdata21[14];
    char stringdata22[25];
    char stringdata23[9];
    char stringdata24[20];
    char stringdata25[28];
    char stringdata26[3];
    char stringdata27[34];
    char stringdata28[3];
    char stringdata29[18];
    char stringdata30[17];
    char stringdata31[5];
    char stringdata32[19];
    char stringdata33[29];
    char stringdata34[4];
    char stringdata35[26];
    char stringdata36[30];
    char stringdata37[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSChatDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSChatDialogENDCLASS_t qt_meta_stringdata_CLASSChatDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "ChatDialog"
        QT_MOC_LITERAL(11, 22),  // "slot_loading_chat_user"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 14),  // "slot_side_chat"
        QT_MOC_LITERAL(50, 17),  // "slot_side_contact"
        QT_MOC_LITERAL(68, 17),  // "slot_text_changed"
        QT_MOC_LITERAL(86, 3),  // "str"
        QT_MOC_LITERAL(90, 14),  // "slot_focus_out"
        QT_MOC_LITERAL(105, 25),  // "slot_loading_contact_user"
        QT_MOC_LITERAL(131, 29),  // "slot_switch_apply_friend_page"
        QT_MOC_LITERAL(161, 21),  // "slot_friend_info_page"
        QT_MOC_LITERAL(183, 25),  // "std::shared_ptr<UserInfo>"
        QT_MOC_LITERAL(209, 9),  // "user_info"
        QT_MOC_LITERAL(219, 16),  // "slot_show_search"
        QT_MOC_LITERAL(236, 4),  // "show"
        QT_MOC_LITERAL(241, 17),  // "slot_apply_friend"
        QT_MOC_LITERAL(259, 31),  // "std::shared_ptr<AddFriendApply>"
        QT_MOC_LITERAL(291, 5),  // "apply"
        QT_MOC_LITERAL(297, 20),  // "slot_add_auth_friend"
        QT_MOC_LITERAL(318, 25),  // "std::shared_ptr<AuthInfo>"
        QT_MOC_LITERAL(344, 9),  // "auth_info"
        QT_MOC_LITERAL(354, 13),  // "slot_auth_rsp"
        QT_MOC_LITERAL(368, 24),  // "std::shared_ptr<AuthRsp>"
        QT_MOC_LITERAL(393, 8),  // "auth_rsp"
        QT_MOC_LITERAL(402, 19),  // "slot_jump_chat_item"
        QT_MOC_LITERAL(422, 27),  // "std::shared_ptr<SearchInfo>"
        QT_MOC_LITERAL(450, 2),  // "si"
        QT_MOC_LITERAL(453, 33),  // "slot_jump_chat_item_from_info..."
        QT_MOC_LITERAL(487, 2),  // "ui"
        QT_MOC_LITERAL(490, 17),  // "slot_item_clicked"
        QT_MOC_LITERAL(508, 16),  // "QListWidgetItem*"
        QT_MOC_LITERAL(525, 4),  // "item"
        QT_MOC_LITERAL(530, 18),  // "slot_text_chat_msg"
        QT_MOC_LITERAL(549, 28),  // "std::shared_ptr<TextChatMsg>"
        QT_MOC_LITERAL(578, 3),  // "msg"
        QT_MOC_LITERAL(582, 25),  // "slot_append_send_chat_msg"
        QT_MOC_LITERAL(608, 29),  // "std::shared_ptr<TextChatData>"
        QT_MOC_LITERAL(638, 7)   // "msgdata"
    },
    "ChatDialog",
    "slot_loading_chat_user",
    "",
    "slot_side_chat",
    "slot_side_contact",
    "slot_text_changed",
    "str",
    "slot_focus_out",
    "slot_loading_contact_user",
    "slot_switch_apply_friend_page",
    "slot_friend_info_page",
    "std::shared_ptr<UserInfo>",
    "user_info",
    "slot_show_search",
    "show",
    "slot_apply_friend",
    "std::shared_ptr<AddFriendApply>",
    "apply",
    "slot_add_auth_friend",
    "std::shared_ptr<AuthInfo>",
    "auth_info",
    "slot_auth_rsp",
    "std::shared_ptr<AuthRsp>",
    "auth_rsp",
    "slot_jump_chat_item",
    "std::shared_ptr<SearchInfo>",
    "si",
    "slot_jump_chat_item_from_infopage",
    "ui",
    "slot_item_clicked",
    "QListWidgetItem*",
    "item",
    "slot_text_chat_msg",
    "std::shared_ptr<TextChatMsg>",
    "msg",
    "slot_append_send_chat_msg",
    "std::shared_ptr<TextChatData>",
    "msgdata"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSChatDialogENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x0a,    1 /* Public */,
       3,    0,  117,    2, 0x0a,    2 /* Public */,
       4,    0,  118,    2, 0x0a,    3 /* Public */,
       5,    1,  119,    2, 0x0a,    4 /* Public */,
       7,    0,  122,    2, 0x0a,    6 /* Public */,
       8,    0,  123,    2, 0x0a,    7 /* Public */,
       9,    0,  124,    2, 0x0a,    8 /* Public */,
      10,    1,  125,    2, 0x0a,    9 /* Public */,
      13,    1,  128,    2, 0x0a,   11 /* Public */,
      15,    1,  131,    2, 0x0a,   13 /* Public */,
      18,    1,  134,    2, 0x0a,   15 /* Public */,
      21,    1,  137,    2, 0x0a,   17 /* Public */,
      24,    1,  140,    2, 0x0a,   19 /* Public */,
      27,    1,  143,    2, 0x0a,   21 /* Public */,
      29,    1,  146,    2, 0x0a,   23 /* Public */,
      32,    1,  149,    2, 0x0a,   25 /* Public */,
      35,    1,  152,    2, 0x0a,   27 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 11,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 36,   37,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChatDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSChatDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSChatDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSChatDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatDialog, std::true_type>,
        // method 'slot_loading_chat_user'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_side_chat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_side_contact'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_text_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slot_focus_out'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_loading_contact_user'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_switch_apply_friend_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slot_friend_info_page'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<UserInfo>, std::false_type>,
        // method 'slot_show_search'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slot_apply_friend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<AddFriendApply>, std::false_type>,
        // method 'slot_add_auth_friend'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<AuthInfo>, std::false_type>,
        // method 'slot_auth_rsp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<AuthRsp>, std::false_type>,
        // method 'slot_jump_chat_item'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<SearchInfo>, std::false_type>,
        // method 'slot_jump_chat_item_from_infopage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<UserInfo>, std::false_type>,
        // method 'slot_item_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QListWidgetItem *, std::false_type>,
        // method 'slot_text_chat_msg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<TextChatMsg>, std::false_type>,
        // method 'slot_append_send_chat_msg'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<TextChatData>, std::false_type>
    >,
    nullptr
} };

void ChatDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_loading_chat_user(); break;
        case 1: _t->slot_side_chat(); break;
        case 2: _t->slot_side_contact(); break;
        case 3: _t->slot_text_changed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->slot_focus_out(); break;
        case 5: _t->slot_loading_contact_user(); break;
        case 6: _t->slot_switch_apply_friend_page(); break;
        case 7: _t->slot_friend_info_page((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<UserInfo>>>(_a[1]))); break;
        case 8: _t->slot_show_search((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->slot_apply_friend((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<AddFriendApply>>>(_a[1]))); break;
        case 10: _t->slot_add_auth_friend((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<AuthInfo>>>(_a[1]))); break;
        case 11: _t->slot_auth_rsp((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<AuthRsp>>>(_a[1]))); break;
        case 12: _t->slot_jump_chat_item((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<SearchInfo>>>(_a[1]))); break;
        case 13: _t->slot_jump_chat_item_from_infopage((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<UserInfo>>>(_a[1]))); break;
        case 14: _t->slot_item_clicked((*reinterpret_cast< std::add_pointer_t<QListWidgetItem*>>(_a[1]))); break;
        case 15: _t->slot_text_chat_msg((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<TextChatMsg>>>(_a[1]))); break;
        case 16: _t->slot_append_send_chat_msg((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<TextChatData>>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ChatDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSChatDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChatDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
