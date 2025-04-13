/********************************************************************************
** Form generated from reading UI file 'keyborad.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KEYBORAD_H
#define UI_KEYBORAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_keyborad
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton_queren;
    QPushButton *pushButton_1;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_qingchu;
    QPushButton *pushButton_xiaochu;
    QLabel *label;

    void setupUi(QWidget *keyborad)
    {
        if (keyborad->objectName().isEmpty())
            keyborad->setObjectName(QString::fromUtf8("keyborad"));
        keyborad->resize(392, 328);
        layoutWidget = new QWidget(keyborad);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 371, 321));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout->addWidget(lineEdit, 1, 0, 1, 2);

        pushButton_queren = new QPushButton(layoutWidget);
        pushButton_queren->setObjectName(QString::fromUtf8("pushButton_queren"));

        gridLayout->addWidget(pushButton_queren, 1, 2, 1, 1);

        pushButton_1 = new QPushButton(layoutWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 1, 1, 1);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 2, 2, 1, 1);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 3, 0, 1, 1);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 3, 1, 1, 1);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 3, 2, 1, 1);

        pushButton_7 = new QPushButton(layoutWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        gridLayout->addWidget(pushButton_7, 4, 0, 1, 1);

        pushButton_8 = new QPushButton(layoutWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 4, 1, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 4, 2, 1, 1);

        pushButton_0 = new QPushButton(layoutWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 5, 0, 1, 1);

        pushButton_qingchu = new QPushButton(layoutWidget);
        pushButton_qingchu->setObjectName(QString::fromUtf8("pushButton_qingchu"));

        gridLayout->addWidget(pushButton_qingchu, 5, 1, 1, 1);

        pushButton_xiaochu = new QPushButton(layoutWidget);
        pushButton_xiaochu->setObjectName(QString::fromUtf8("pushButton_xiaochu"));

        gridLayout->addWidget(pushButton_xiaochu, 5, 2, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 3);


        retranslateUi(keyborad);

        QMetaObject::connectSlotsByName(keyborad);
    } // setupUi

    void retranslateUi(QWidget *keyborad)
    {
        keyborad->setWindowTitle(QApplication::translate("keyborad", "\347\202\271\350\217\234\347\263\273\347\273\237", nullptr));
        pushButton_queren->setText(QApplication::translate("keyborad", "\347\241\256\350\256\244", nullptr));
        pushButton_1->setText(QApplication::translate("keyborad", "1", nullptr));
        pushButton_2->setText(QApplication::translate("keyborad", "2", nullptr));
        pushButton_3->setText(QApplication::translate("keyborad", "3", nullptr));
        pushButton_4->setText(QApplication::translate("keyborad", "4", nullptr));
        pushButton_5->setText(QApplication::translate("keyborad", "5", nullptr));
        pushButton_6->setText(QApplication::translate("keyborad", "6", nullptr));
        pushButton_7->setText(QApplication::translate("keyborad", "7", nullptr));
        pushButton_8->setText(QApplication::translate("keyborad", "8", nullptr));
        pushButton_9->setText(QApplication::translate("keyborad", "9", nullptr));
        pushButton_0->setText(QApplication::translate("keyborad", "0", nullptr));
        pushButton_qingchu->setText(QApplication::translate("keyborad", "\346\270\205\351\231\244", nullptr));
        pushButton_xiaochu->setText(QApplication::translate("keyborad", "<---", nullptr));
        label->setText(QApplication::translate("keyborad", "\350\257\267\350\276\223\345\205\245\346\241\214\345\217\267\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class keyborad: public Ui_keyborad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KEYBORAD_H
