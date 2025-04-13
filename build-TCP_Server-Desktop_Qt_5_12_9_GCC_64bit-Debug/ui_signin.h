/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QLabel *label;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_password;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_ensure_password;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->resize(400, 300);
        label = new QLabel(SignIn);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 10, 161, 31));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        widget = new QWidget(SignIn);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(130, 50, 171, 219));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        lineEdit_password = new QLineEdit(widget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, lineEdit_password);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));

        formLayout->setWidget(1, QFormLayout::SpanningRole, lineEdit_username);

        lineEdit_ensure_password = new QLineEdit(widget);
        lineEdit_ensure_password->setObjectName(QString::fromUtf8("lineEdit_ensure_password"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, lineEdit_ensure_password);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(7, QFormLayout::SpanningRole, pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(6, QFormLayout::LabelRole, verticalSpacer);


        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QWidget *SignIn)
    {
        SignIn->setWindowTitle(QApplication::translate("SignIn", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("SignIn", "Welcome to us!", nullptr));
        label_2->setText(QApplication::translate("SignIn", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QApplication::translate("SignIn", "\345\257\206\347\240\201    \357\274\232", nullptr));
        label_4->setText(QApplication::translate("SignIn", "\347\241\256\350\256\244\345\257\206\347\240\201 \357\274\232", nullptr));
        pushButton->setText(QApplication::translate("SignIn", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
