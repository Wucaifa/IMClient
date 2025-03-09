/********************************************************************************
** Form generated from reading UI file 'resetdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETDIALOG_H
#define UI_RESETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>
#include "timerbtn.h"

QT_BEGIN_NAMESPACE

class Ui_ResetDialog
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *email_lb;
    QLineEdit *email_edit;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *varify_lb;
    QLineEdit *varify_edit;
    TimerBtn *varify_btn;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_9;
    QLabel *user_lb;
    QLineEdit *user_edit;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *pwd_lb;
    QLineEdit *pwd_edit;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *sure_btn;
    QPushButton *return_btn;
    QLabel *err_tip;

    void setupUi(QDialog *ResetDialog)
    {
        if (ResetDialog->objectName().isEmpty())
            ResetDialog->setObjectName("ResetDialog");
        ResetDialog->resize(300, 500);
        gridLayout = new QGridLayout(ResetDialog);
        gridLayout->setObjectName("gridLayout");
        verticalSpacer_3 = new QSpacerItem(20, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 8, 0, 1, 1);

        widget_2 = new QWidget(ResetDialog);
        widget_2->setObjectName("widget_2");
        horizontalLayout_10 = new QHBoxLayout(widget_2);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        email_lb = new QLabel(widget_2);
        email_lb->setObjectName("email_lb");
        email_lb->setMinimumSize(QSize(48, 25));
        email_lb->setMaximumSize(QSize(48, 25));

        horizontalLayout_10->addWidget(email_lb);

        email_edit = new QLineEdit(widget_2);
        email_edit->setObjectName("email_edit");
        email_edit->setMinimumSize(QSize(0, 25));
        email_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_10->addWidget(email_edit);


        gridLayout->addWidget(widget_2, 3, 0, 1, 1);

        widget_3 = new QWidget(ResetDialog);
        widget_3->setObjectName("widget_3");
        horizontalLayout_6 = new QHBoxLayout(widget_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        varify_lb = new QLabel(widget_3);
        varify_lb->setObjectName("varify_lb");
        varify_lb->setMinimumSize(QSize(0, 25));
        varify_lb->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(varify_lb);

        varify_edit = new QLineEdit(widget_3);
        varify_edit->setObjectName("varify_edit");
        varify_edit->setMinimumSize(QSize(0, 25));
        varify_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(varify_edit);

        varify_btn = new TimerBtn(widget_3);
        varify_btn->setObjectName("varify_btn");
        varify_btn->setMinimumSize(QSize(0, 25));
        varify_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_6->addWidget(varify_btn);


        gridLayout->addWidget(widget_3, 4, 0, 1, 1);

        widget = new QWidget(ResetDialog);
        widget->setObjectName("widget");
        horizontalLayout_9 = new QHBoxLayout(widget);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        user_lb = new QLabel(widget);
        user_lb->setObjectName("user_lb");
        user_lb->setMinimumSize(QSize(0, 25));
        user_lb->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_9->addWidget(user_lb);

        user_edit = new QLineEdit(widget);
        user_edit->setObjectName("user_edit");
        user_edit->setMinimumSize(QSize(0, 25));
        user_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_9->addWidget(user_edit);


        gridLayout->addWidget(widget, 2, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 72, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 0, 1, 1);

        widget_4 = new QWidget(ResetDialog);
        widget_4->setObjectName("widget_4");
        horizontalLayout_8 = new QHBoxLayout(widget_4);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        pwd_lb = new QLabel(widget_4);
        pwd_lb->setObjectName("pwd_lb");
        pwd_lb->setMinimumSize(QSize(0, 25));
        pwd_lb->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_8->addWidget(pwd_lb);

        pwd_edit = new QLineEdit(widget_4);
        pwd_edit->setObjectName("pwd_edit");
        pwd_edit->setMinimumSize(QSize(0, 25));
        pwd_edit->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_8->addWidget(pwd_edit);


        gridLayout->addWidget(widget_4, 5, 0, 1, 1);

        widget_5 = new QWidget(ResetDialog);
        widget_5->setObjectName("widget_5");
        horizontalLayout_7 = new QHBoxLayout(widget_5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        sure_btn = new QPushButton(widget_5);
        sure_btn->setObjectName("sure_btn");
        sure_btn->setMinimumSize(QSize(0, 25));
        sure_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_7->addWidget(sure_btn);

        return_btn = new QPushButton(widget_5);
        return_btn->setObjectName("return_btn");
        return_btn->setMinimumSize(QSize(0, 25));
        return_btn->setMaximumSize(QSize(16777215, 25));

        horizontalLayout_7->addWidget(return_btn);


        gridLayout->addWidget(widget_5, 7, 0, 1, 1);

        err_tip = new QLabel(ResetDialog);
        err_tip->setObjectName("err_tip");
        err_tip->setMinimumSize(QSize(0, 25));
        err_tip->setMaximumSize(QSize(16777215, 25));

        gridLayout->addWidget(err_tip, 1, 0, 1, 1);


        retranslateUi(ResetDialog);

        QMetaObject::connectSlotsByName(ResetDialog);
    } // setupUi

    void retranslateUi(QDialog *ResetDialog)
    {
        ResetDialog->setWindowTitle(QCoreApplication::translate("ResetDialog", "Dialog", nullptr));
        email_lb->setText(QCoreApplication::translate("ResetDialog", "\351\202\256\347\256\261\357\274\232", nullptr));
        varify_lb->setText(QCoreApplication::translate("ResetDialog", "\351\252\214\350\257\201\347\240\201\357\274\232", nullptr));
        varify_btn->setText(QCoreApplication::translate("ResetDialog", "\350\216\267\345\217\226", nullptr));
        user_lb->setText(QCoreApplication::translate("ResetDialog", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        pwd_lb->setText(QCoreApplication::translate("ResetDialog", "\346\226\260\345\257\206\347\240\201\357\274\232", nullptr));
        sure_btn->setText(QCoreApplication::translate("ResetDialog", "\347\241\256\350\256\244", nullptr));
        return_btn->setText(QCoreApplication::translate("ResetDialog", "\350\277\224\345\233\236", nullptr));
        err_tip->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ResetDialog: public Ui_ResetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETDIALOG_H
