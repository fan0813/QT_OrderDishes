/********************************************************************************
** Form generated from reading UI file 'bill.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BILL_H
#define UI_BILL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bill
{
public:
    QTextBrowser *textBrowser;

    void setupUi(QWidget *bill)
    {
        if (bill->objectName().isEmpty())
            bill->setObjectName(QString::fromUtf8("bill"));
        bill->resize(400, 300);
        textBrowser = new QTextBrowser(bill);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 0, 401, 301));

        retranslateUi(bill);

        QMetaObject::connectSlotsByName(bill);
    } // setupUi

    void retranslateUi(QWidget *bill)
    {
        bill->setWindowTitle(QApplication::translate("bill", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bill: public Ui_bill {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BILL_H
