/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <applyfriendpage.h>
#include <chatpage.h>
#include <contactuserlist.h>
#include <friendinfopage.h>
#include <statewidget.h>
#include "chatuserlist.h"
#include "clickedbtn.h"
#include "customizeedit.h"
#include "searchlist.h"

QT_BEGIN_NAMESPACE

class Ui_ChatDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *side_bar;
    QVBoxLayout *verticalLayout_4;
    QWidget *widget;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *side_head_lb;
    StateWidget *side_chat_lb;
    StateWidget *side_contact_lb;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout;
    QWidget *search_wid;
    QHBoxLayout *horizontalLayout_2;
    CustomizeEdit *search_edit;
    QSpacerItem *horizontalSpacer;
    ClickedBtn *add_btn;
    ContactUserList *con_user_list;
    SearchList *search_list;
    ChatUserList *chat_user_list;
    QStackedWidget *stackedWidget;
    ChatPage *chat_page;
    ApplyFriendPage *friend_apply_page;
    FriendInfoPage *friend_info_page;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName(QString::fromUtf8("ChatDialog"));
        ChatDialog->resize(564, 487);
        horizontalLayout = new QHBoxLayout(ChatDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        side_bar = new QWidget(ChatDialog);
        side_bar->setObjectName(QString::fromUtf8("side_bar"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(side_bar->sizePolicy().hasHeightForWidth());
        side_bar->setSizePolicy(sizePolicy);
        side_bar->setMinimumSize(QSize(56, 0));
        side_bar->setMaximumSize(QSize(56, 16777215));
        verticalLayout_4 = new QVBoxLayout(side_bar);
        verticalLayout_4->setSpacing(30);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(10, 30, 0, 0);
        widget = new QWidget(side_bar);
        widget->setObjectName(QString::fromUtf8("widget"));

        verticalLayout_4->addWidget(widget);

        widget_2 = new QWidget(side_bar);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setMinimumSize(QSize(29, 29));
        verticalLayout_5 = new QVBoxLayout(widget_2);
        verticalLayout_5->setSpacing(30);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        side_head_lb = new QLabel(widget_2);
        side_head_lb->setObjectName(QString::fromUtf8("side_head_lb"));
        side_head_lb->setMinimumSize(QSize(35, 35));
        side_head_lb->setMaximumSize(QSize(35, 35));

        verticalLayout_5->addWidget(side_head_lb);

        side_chat_lb = new StateWidget(widget_2);
        side_chat_lb->setObjectName(QString::fromUtf8("side_chat_lb"));
        side_chat_lb->setMinimumSize(QSize(30, 30));
        side_chat_lb->setMaximumSize(QSize(30, 30));

        verticalLayout_5->addWidget(side_chat_lb);

        side_contact_lb = new StateWidget(widget_2);
        side_contact_lb->setObjectName(QString::fromUtf8("side_contact_lb"));
        side_contact_lb->setMinimumSize(QSize(30, 30));
        side_contact_lb->setMaximumSize(QSize(30, 30));

        verticalLayout_5->addWidget(side_contact_lb);


        verticalLayout_4->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout->addWidget(side_bar);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        search_wid = new QWidget(ChatDialog);
        search_wid->setObjectName(QString::fromUtf8("search_wid"));
        search_wid->setMinimumSize(QSize(0, 60));
        search_wid->setMaximumSize(QSize(16777215, 60));
        horizontalLayout_2 = new QHBoxLayout(search_wid);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
        search_edit = new CustomizeEdit(search_wid);
        search_edit->setObjectName(QString::fromUtf8("search_edit"));
        search_edit->setMinimumSize(QSize(0, 24));
        search_edit->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_2->addWidget(search_edit);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_btn = new ClickedBtn(search_wid);
        add_btn->setObjectName(QString::fromUtf8("add_btn"));
        add_btn->setMinimumSize(QSize(24, 24));
        add_btn->setMaximumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(add_btn);


        verticalLayout->addWidget(search_wid);

        con_user_list = new ContactUserList(ChatDialog);
        con_user_list->setObjectName(QString::fromUtf8("con_user_list"));

        verticalLayout->addWidget(con_user_list);

        search_list = new SearchList(ChatDialog);
        search_list->setObjectName(QString::fromUtf8("search_list"));

        verticalLayout->addWidget(search_list);

        chat_user_list = new ChatUserList(ChatDialog);
        chat_user_list->setObjectName(QString::fromUtf8("chat_user_list"));
        chat_user_list->setMinimumSize(QSize(250, 0));
        chat_user_list->setMaximumSize(QSize(250, 16777215));

        verticalLayout->addWidget(chat_user_list);


        horizontalLayout->addLayout(verticalLayout);

        stackedWidget = new QStackedWidget(ChatDialog);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(50, 0));
        chat_page = new ChatPage();
        chat_page->setObjectName(QString::fromUtf8("chat_page"));
        stackedWidget->addWidget(chat_page);
        friend_apply_page = new ApplyFriendPage();
        friend_apply_page->setObjectName(QString::fromUtf8("friend_apply_page"));
        stackedWidget->addWidget(friend_apply_page);
        friend_info_page = new FriendInfoPage();
        friend_info_page->setObjectName(QString::fromUtf8("friend_info_page"));
        stackedWidget->addWidget(friend_info_page);

        horizontalLayout->addWidget(stackedWidget);


        retranslateUi(ChatDialog);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(ChatDialog);
    } // setupUi

    void retranslateUi(QDialog *ChatDialog)
    {
        ChatDialog->setWindowTitle(QCoreApplication::translate("ChatDialog", "Dialog", nullptr));
        side_head_lb->setText(QString());
        add_btn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChatDialog: public Ui_ChatDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATDIALOG_H
