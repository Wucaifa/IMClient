/********************************************************************************
** Form generated from reading UI file 'friendlabel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDLABEL_H
#define UI_FRIENDLABEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>
#include "clickedlabel.h"

QT_BEGIN_NAMESPACE

class Ui_FriendLabel
{
public:
    QGridLayout *gridLayout;
    QLabel *tip_lb;
    QWidget *close_wid;
    QHBoxLayout *horizontalLayout_2;
    ClickedLabel *close_lb;

    void setupUi(QWidget *FriendLabel)
    {
        if (FriendLabel->objectName().isEmpty())
            FriendLabel->setObjectName(QString::fromUtf8("FriendLabel"));
        FriendLabel->resize(400, 43);
        FriendLabel->setMinimumSize(QSize(0, 43));
        FriendLabel->setMaximumSize(QSize(16777215, 43));
        gridLayout = new QGridLayout(FriendLabel);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tip_lb = new QLabel(FriendLabel);
        tip_lb->setObjectName(QString::fromUtf8("tip_lb"));
        tip_lb->setMinimumSize(QSize(0, 20));
        tip_lb->setMaximumSize(QSize(16777215, 20));

        gridLayout->addWidget(tip_lb, 0, 0, 1, 1);

        close_wid = new QWidget(FriendLabel);
        close_wid->setObjectName(QString::fromUtf8("close_wid"));
        close_wid->setMinimumSize(QSize(25, 25));
        close_wid->setMaximumSize(QSize(25, 25));
        horizontalLayout_2 = new QHBoxLayout(close_wid);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        close_lb = new ClickedLabel(close_wid);
        close_lb->setObjectName(QString::fromUtf8("close_lb"));
        close_lb->setMinimumSize(QSize(15, 15));
        close_lb->setMaximumSize(QSize(15, 15));
        close_lb->setStyleSheet(QString::fromUtf8("border-image: url(:/res/tipclose.png);"));

        horizontalLayout_2->addWidget(close_lb);


        gridLayout->addWidget(close_wid, 0, 1, 1, 1);


        retranslateUi(FriendLabel);

        QMetaObject::connectSlotsByName(FriendLabel);
    } // setupUi

    void retranslateUi(QWidget *FriendLabel)
    {
        FriendLabel->setWindowTitle(QCoreApplication::translate("FriendLabel", "Form", nullptr));
        tip_lb->setText(QCoreApplication::translate("FriendLabel", "TextLabel", nullptr));
        close_lb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FriendLabel: public Ui_FriendLabel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDLABEL_H
