/********************************************************************************
** Form generated from reading UI file 'chatdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATDIALOG_H
#define UI_CHATDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
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
    QGridLayout *gridLayout;
    QWidget *side_bar;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_7;
    QLabel *side_head_lb;
    StateWidget *side_chat_lb;
    StateWidget *side_contact_lb;
    QWidget *widget;
    QSpacerItem *verticalSpacer;
    QWidget *chat_user_wid;
    QVBoxLayout *verticalLayout_2;
    QWidget *search_wid;
    QHBoxLayout *horizontalLayout_2;
    CustomizeEdit *search_edit;
    QSpacerItem *horizontalSpacer;
    ClickedBtn *add_btn;
    SearchList *search_list;
    ChatUserList *chat_user_list;
    ContactUserList *con_user_list;
    QStackedWidget *stackedWidget;
    ChatPage *chat_page;
    ApplyFriendPage *friend_apply_page;
    FriendInfoPage *friend_info_page;

    void setupUi(QDialog *ChatDialog)
    {
        if (ChatDialog->objectName().isEmpty())
            ChatDialog->setObjectName("ChatDialog");
        ChatDialog->resize(564, 487);
        gridLayout = new QGridLayout(ChatDialog);
        gridLayout->setObjectName("gridLayout");
        side_bar = new QWidget(ChatDialog);
        side_bar->setObjectName("side_bar");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(side_bar->sizePolicy().hasHeightForWidth());
        side_bar->setSizePolicy(sizePolicy);
        side_bar->setMinimumSize(QSize(56, 0));
        side_bar->setMaximumSize(QSize(56, 16777215));
        verticalLayout_5 = new QVBoxLayout(side_bar);
        verticalLayout_5->setSpacing(30);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(10, 30, 0, 0);
        widget_2 = new QWidget(side_bar);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(29, 29));
        verticalLayout_7 = new QVBoxLayout(widget_2);
        verticalLayout_7->setSpacing(30);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        side_head_lb = new QLabel(widget_2);
        side_head_lb->setObjectName("side_head_lb");
        side_head_lb->setMinimumSize(QSize(35, 35));
        side_head_lb->setMaximumSize(QSize(35, 35));

        verticalLayout_7->addWidget(side_head_lb);

        side_chat_lb = new StateWidget(widget_2);
        side_chat_lb->setObjectName("side_chat_lb");
        side_chat_lb->setMinimumSize(QSize(30, 30));
        side_chat_lb->setMaximumSize(QSize(30, 30));

        verticalLayout_7->addWidget(side_chat_lb);

        side_contact_lb = new StateWidget(widget_2);
        side_contact_lb->setObjectName("side_contact_lb");
        side_contact_lb->setMinimumSize(QSize(30, 30));
        side_contact_lb->setMaximumSize(QSize(30, 30));

        verticalLayout_7->addWidget(side_contact_lb);


        verticalLayout_5->addWidget(widget_2);

        widget = new QWidget(side_bar);
        widget->setObjectName("widget");

        verticalLayout_5->addWidget(widget);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);


        gridLayout->addWidget(side_bar, 0, 0, 1, 1);

        chat_user_wid = new QWidget(ChatDialog);
        chat_user_wid->setObjectName("chat_user_wid");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(chat_user_wid->sizePolicy().hasHeightForWidth());
        chat_user_wid->setSizePolicy(sizePolicy1);
        chat_user_wid->setMinimumSize(QSize(250, 0));
        chat_user_wid->setMaximumSize(QSize(250, 16777215));
        verticalLayout_2 = new QVBoxLayout(chat_user_wid);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        search_wid = new QWidget(chat_user_wid);
        search_wid->setObjectName("search_wid");
        search_wid->setMinimumSize(QSize(250, 60));
        search_wid->setMaximumSize(QSize(250, 60));
        horizontalLayout_2 = new QHBoxLayout(search_wid);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(9, 9, 9, 9);
        search_edit = new CustomizeEdit(search_wid);
        search_edit->setObjectName("search_edit");
        search_edit->setMinimumSize(QSize(0, 24));
        search_edit->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_2->addWidget(search_edit);

        horizontalSpacer = new QSpacerItem(5, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        add_btn = new ClickedBtn(search_wid);
        add_btn->setObjectName("add_btn");
        add_btn->setMinimumSize(QSize(24, 24));
        add_btn->setMaximumSize(QSize(24, 24));

        horizontalLayout_2->addWidget(add_btn);


        verticalLayout_2->addWidget(search_wid);

        search_list = new SearchList(chat_user_wid);
        search_list->setObjectName("search_list");

        verticalLayout_2->addWidget(search_list);

        chat_user_list = new ChatUserList(chat_user_wid);
        chat_user_list->setObjectName("chat_user_list");
        chat_user_list->setMinimumSize(QSize(250, 0));
        chat_user_list->setMaximumSize(QSize(250, 16777215));

        verticalLayout_2->addWidget(chat_user_list);

        con_user_list = new ContactUserList(chat_user_wid);
        con_user_list->setObjectName("con_user_list");

        verticalLayout_2->addWidget(con_user_list);


        gridLayout->addWidget(chat_user_wid, 0, 1, 1, 1);

        stackedWidget = new QStackedWidget(ChatDialog);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMinimumSize(QSize(400, 0));
        stackedWidget->setMaximumSize(QSize(400, 16777215));
        chat_page = new ChatPage();
        chat_page->setObjectName("chat_page");
        chat_page->setMinimumSize(QSize(400, 0));
        chat_page->setMaximumSize(QSize(400, 16777215));
        stackedWidget->addWidget(chat_page);
        friend_apply_page = new ApplyFriendPage();
        friend_apply_page->setObjectName("friend_apply_page");
        friend_apply_page->setMinimumSize(QSize(400, 0));
        friend_apply_page->setMaximumSize(QSize(400, 16777215));
        stackedWidget->addWidget(friend_apply_page);
        friend_info_page = new FriendInfoPage();
        friend_info_page->setObjectName("friend_info_page");
        friend_info_page->setMinimumSize(QSize(400, 0));
        friend_info_page->setMaximumSize(QSize(400, 16777215));
        stackedWidget->addWidget(friend_info_page);

        gridLayout->addWidget(stackedWidget, 0, 2, 1, 1);


        retranslateUi(ChatDialog);

        stackedWidget->setCurrentIndex(2);


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
