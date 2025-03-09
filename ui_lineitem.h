/********************************************************************************
** Form generated from reading UI file 'lineitem.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEITEM_H
#define UI_LINEITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LineItem
{
public:
    QGridLayout *gridLayout;
    QFrame *line;

    void setupUi(QWidget *LineItem)
    {
        if (LineItem->objectName().isEmpty())
            LineItem->setObjectName(QString::fromUtf8("LineItem"));
        LineItem->resize(400, 21);
        LineItem->setMinimumSize(QSize(0, 16));
        LineItem->setMaximumSize(QSize(16777215, 21));
        gridLayout = new QGridLayout(LineItem);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        line = new QFrame(LineItem);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 0, 1, 1);


        retranslateUi(LineItem);

        QMetaObject::connectSlotsByName(LineItem);
    } // setupUi

    void retranslateUi(QWidget *LineItem)
    {
        LineItem->setWindowTitle(QCoreApplication::translate("LineItem", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LineItem: public Ui_LineItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEITEM_H
