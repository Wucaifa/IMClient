/********************************************************************************
** Form generated from reading UI file 'grouptipitem.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPTIPITEM_H
#define UI_GROUPTIPITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GroupTipItem
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *GroupTipItem)
    {
        if (GroupTipItem->objectName().isEmpty())
            GroupTipItem->setObjectName(QString::fromUtf8("GroupTipItem"));
        GroupTipItem->resize(400, 34);
        GroupTipItem->setMinimumSize(QSize(0, 16));
        GroupTipItem->setMaximumSize(QSize(16777215, 34));
        gridLayout = new QGridLayout(GroupTipItem);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(GroupTipItem);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(0, 16));
        label->setMaximumSize(QSize(16777215, 16));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(GroupTipItem);

        QMetaObject::connectSlotsByName(GroupTipItem);
    } // setupUi

    void retranslateUi(QWidget *GroupTipItem)
    {
        GroupTipItem->setWindowTitle(QCoreApplication::translate("GroupTipItem", "Form", nullptr));
        label->setText(QCoreApplication::translate("GroupTipItem", "\346\226\260\347\232\204\346\234\213\345\217\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GroupTipItem: public Ui_GroupTipItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPTIPITEM_H
