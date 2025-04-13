/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit_password;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btn_signin;
    QSpacerItem *horizontalSpacer;
    QPushButton *btn_login;
    QPushButton *btn_exit;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(367, 309);
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 121, 41));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        lineEdit_username = new QLineEdit(Widget);
        lineEdit_username->setObjectName(QString::fromUtf8("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(110, 100, 211, 25));
        lineEdit_password = new QLineEdit(Widget);
        lineEdit_password->setObjectName(QString::fromUtf8("lineEdit_password"));
        lineEdit_password->setGeometry(QRect(110, 150, 211, 25));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(50, 100, 51, 21));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 150, 51, 21));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 210, 301, 33));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn_signin = new QPushButton(widget);
        btn_signin->setObjectName(QString::fromUtf8("btn_signin"));

        gridLayout->addWidget(btn_signin, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 1, 1, 1);

        btn_login = new QPushButton(widget);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));

        gridLayout->addWidget(btn_login, 0, 0, 1, 1);

        btn_exit = new QPushButton(widget);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));

        gridLayout->addWidget(btn_exit, 0, 4, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(60, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\347\231\273\351\231\206\347\225\214\351\235\242", nullptr));
        label->setText(QApplication::translate("Widget", "Login Now\357\274\232", nullptr));
        lineEdit_username->setText(QString());
        label_2->setText(QApplication::translate("Widget", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_3->setText(QApplication::translate("Widget", "\345\257\206    \347\240\201:", nullptr));
        btn_signin->setText(QApplication::translate("Widget", "\346\263\250\345\206\214", nullptr));
        btn_login->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
