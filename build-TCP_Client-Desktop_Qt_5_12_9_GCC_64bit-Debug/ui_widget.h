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
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_rc;
    QLabel *hsr;
    QLabel *hsr_label;
    QPushButton *btn_hsr_add;
    QPushButton *btn_hsr_sub;
    QLabel *hsr_num;
    QLabel *ssgy;
    QLabel *ssgy_lable;
    QPushButton *btn_ssgy_sub;
    QLabel *ssgy_num;
    QPushButton *btn_ssgy_add;
    QLabel *yxrs;
    QLabel *yxrs_label;
    QPushButton *btn_yxrs_add;
    QPushButton *btn_yxrs_sub;
    QLabel *yxrs_num;
    QLabel *qc;
    QLabel *qc_label;
    QPushButton *btn_qc_add;
    QPushButton *btn_qc_sub;
    QLabel *qc_num;
    QWidget *tab_lc;
    QLabel *phg;
    QLabel *md;
    QLabel *phg_label;
    QPushButton *btn_phg_add;
    QLabel *phg_num;
    QPushButton *btn_phg_sub;
    QLabel *md_label;
    QPushButton *btn_md_add;
    QLabel *md_num;
    QPushButton *btn_md_sub;
    QLabel *hsm;
    QLabel *hsm_label;
    QPushButton *btn_hsm_add;
    QLabel *hsm_num;
    QPushButton *btn_hsm_sub;
    QLabel *pd;
    QLabel *pd_label;
    QPushButton *btn_pd_add;
    QLabel *pd_num;
    QPushButton *btn_pd_sub;
    QWidget *tab_yl;
    QLabel *kl;
    QLabel *kl_lable;
    QPushButton *btn_kl_add;
    QLabel *kl_num;
    QPushButton *btn_kl_sub;
    QLabel *xb;
    QLabel *xb_lable_;
    QPushButton *btn_xb_add;
    QLabel *xb_num;
    QPushButton *btn_xb_sub;
    QLabel *zhuohao;
    QLabel *zongjia;
    QPushButton *order_info;
    QPushButton *send_order;
    QPushButton *exit;
    QLabel *labeltable;
    QLabel *labelprice;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(521, 362);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 741, 311));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{width:150}\n"
"QTabBar::tab{height:50}"));
        tab_rc = new QWidget();
        tab_rc->setObjectName(QString::fromUtf8("tab_rc"));
        hsr = new QLabel(tab_rc);
        hsr->setObjectName(QString::fromUtf8("hsr"));
        hsr->setGeometry(QRect(0, 0, 151, 121));
        hsr_label = new QLabel(tab_rc);
        hsr_label->setObjectName(QString::fromUtf8("hsr_label"));
        hsr_label->setGeometry(QRect(160, 30, 91, 31));
        btn_hsr_add = new QPushButton(tab_rc);
        btn_hsr_add->setObjectName(QString::fromUtf8("btn_hsr_add"));
        btn_hsr_add->setGeometry(QRect(160, 70, 21, 21));
        btn_hsr_sub = new QPushButton(tab_rc);
        btn_hsr_sub->setObjectName(QString::fromUtf8("btn_hsr_sub"));
        btn_hsr_sub->setGeometry(QRect(210, 70, 21, 21));
        hsr_num = new QLabel(tab_rc);
        hsr_num->setObjectName(QString::fromUtf8("hsr_num"));
        hsr_num->setGeometry(QRect(190, 70, 21, 16));
        ssgy = new QLabel(tab_rc);
        ssgy->setObjectName(QString::fromUtf8("ssgy"));
        ssgy->setGeometry(QRect(270, 0, 131, 111));
        ssgy_lable = new QLabel(tab_rc);
        ssgy_lable->setObjectName(QString::fromUtf8("ssgy_lable"));
        ssgy_lable->setGeometry(QRect(410, 30, 111, 31));
        btn_ssgy_sub = new QPushButton(tab_rc);
        btn_ssgy_sub->setObjectName(QString::fromUtf8("btn_ssgy_sub"));
        btn_ssgy_sub->setGeometry(QRect(470, 70, 21, 21));
        ssgy_num = new QLabel(tab_rc);
        ssgy_num->setObjectName(QString::fromUtf8("ssgy_num"));
        ssgy_num->setGeometry(QRect(450, 70, 21, 16));
        btn_ssgy_add = new QPushButton(tab_rc);
        btn_ssgy_add->setObjectName(QString::fromUtf8("btn_ssgy_add"));
        btn_ssgy_add->setGeometry(QRect(420, 70, 21, 21));
        yxrs = new QLabel(tab_rc);
        yxrs->setObjectName(QString::fromUtf8("yxrs"));
        yxrs->setGeometry(QRect(0, 130, 151, 111));
        yxrs_label = new QLabel(tab_rc);
        yxrs_label->setObjectName(QString::fromUtf8("yxrs_label"));
        yxrs_label->setGeometry(QRect(160, 160, 101, 21));
        btn_yxrs_add = new QPushButton(tab_rc);
        btn_yxrs_add->setObjectName(QString::fromUtf8("btn_yxrs_add"));
        btn_yxrs_add->setGeometry(QRect(160, 200, 21, 21));
        btn_yxrs_sub = new QPushButton(tab_rc);
        btn_yxrs_sub->setObjectName(QString::fromUtf8("btn_yxrs_sub"));
        btn_yxrs_sub->setGeometry(QRect(210, 200, 21, 21));
        yxrs_num = new QLabel(tab_rc);
        yxrs_num->setObjectName(QString::fromUtf8("yxrs_num"));
        yxrs_num->setGeometry(QRect(190, 200, 21, 16));
        qc = new QLabel(tab_rc);
        qc->setObjectName(QString::fromUtf8("qc"));
        qc->setGeometry(QRect(270, 130, 131, 111));
        qc_label = new QLabel(tab_rc);
        qc_label->setObjectName(QString::fromUtf8("qc_label"));
        qc_label->setGeometry(QRect(410, 160, 101, 21));
        btn_qc_add = new QPushButton(tab_rc);
        btn_qc_add->setObjectName(QString::fromUtf8("btn_qc_add"));
        btn_qc_add->setGeometry(QRect(410, 200, 21, 21));
        btn_qc_sub = new QPushButton(tab_rc);
        btn_qc_sub->setObjectName(QString::fromUtf8("btn_qc_sub"));
        btn_qc_sub->setGeometry(QRect(460, 200, 21, 21));
        qc_num = new QLabel(tab_rc);
        qc_num->setObjectName(QString::fromUtf8("qc_num"));
        qc_num->setGeometry(QRect(440, 200, 21, 16));
        tabWidget->addTab(tab_rc, QString());
        tab_lc = new QWidget();
        tab_lc->setObjectName(QString::fromUtf8("tab_lc"));
        phg = new QLabel(tab_lc);
        phg->setObjectName(QString::fromUtf8("phg"));
        phg->setGeometry(QRect(0, 0, 151, 111));
        md = new QLabel(tab_lc);
        md->setObjectName(QString::fromUtf8("md"));
        md->setGeometry(QRect(280, 0, 131, 111));
        phg_label = new QLabel(tab_lc);
        phg_label->setObjectName(QString::fromUtf8("phg_label"));
        phg_label->setGeometry(QRect(160, 30, 101, 21));
        btn_phg_add = new QPushButton(tab_lc);
        btn_phg_add->setObjectName(QString::fromUtf8("btn_phg_add"));
        btn_phg_add->setGeometry(QRect(160, 80, 21, 21));
        phg_num = new QLabel(tab_lc);
        phg_num->setObjectName(QString::fromUtf8("phg_num"));
        phg_num->setGeometry(QRect(190, 80, 21, 16));
        btn_phg_sub = new QPushButton(tab_lc);
        btn_phg_sub->setObjectName(QString::fromUtf8("btn_phg_sub"));
        btn_phg_sub->setGeometry(QRect(210, 80, 21, 21));
        md_label = new QLabel(tab_lc);
        md_label->setObjectName(QString::fromUtf8("md_label"));
        md_label->setGeometry(QRect(430, 30, 101, 21));
        btn_md_add = new QPushButton(tab_lc);
        btn_md_add->setObjectName(QString::fromUtf8("btn_md_add"));
        btn_md_add->setGeometry(QRect(430, 70, 21, 21));
        md_num = new QLabel(tab_lc);
        md_num->setObjectName(QString::fromUtf8("md_num"));
        md_num->setGeometry(QRect(460, 70, 21, 16));
        btn_md_sub = new QPushButton(tab_lc);
        btn_md_sub->setObjectName(QString::fromUtf8("btn_md_sub"));
        btn_md_sub->setGeometry(QRect(480, 70, 21, 21));
        hsm = new QLabel(tab_lc);
        hsm->setObjectName(QString::fromUtf8("hsm"));
        hsm->setGeometry(QRect(0, 140, 151, 111));
        hsm_label = new QLabel(tab_lc);
        hsm_label->setObjectName(QString::fromUtf8("hsm_label"));
        hsm_label->setGeometry(QRect(160, 170, 101, 21));
        btn_hsm_add = new QPushButton(tab_lc);
        btn_hsm_add->setObjectName(QString::fromUtf8("btn_hsm_add"));
        btn_hsm_add->setGeometry(QRect(160, 220, 21, 21));
        hsm_num = new QLabel(tab_lc);
        hsm_num->setObjectName(QString::fromUtf8("hsm_num"));
        hsm_num->setGeometry(QRect(190, 220, 21, 16));
        btn_hsm_sub = new QPushButton(tab_lc);
        btn_hsm_sub->setObjectName(QString::fromUtf8("btn_hsm_sub"));
        btn_hsm_sub->setGeometry(QRect(210, 220, 21, 21));
        pd = new QLabel(tab_lc);
        pd->setObjectName(QString::fromUtf8("pd"));
        pd->setGeometry(QRect(280, 130, 141, 121));
        pd_label = new QLabel(tab_lc);
        pd_label->setObjectName(QString::fromUtf8("pd_label"));
        pd_label->setGeometry(QRect(430, 170, 101, 21));
        btn_pd_add = new QPushButton(tab_lc);
        btn_pd_add->setObjectName(QString::fromUtf8("btn_pd_add"));
        btn_pd_add->setGeometry(QRect(430, 220, 21, 21));
        pd_num = new QLabel(tab_lc);
        pd_num->setObjectName(QString::fromUtf8("pd_num"));
        pd_num->setGeometry(QRect(460, 220, 21, 16));
        btn_pd_sub = new QPushButton(tab_lc);
        btn_pd_sub->setObjectName(QString::fromUtf8("btn_pd_sub"));
        btn_pd_sub->setGeometry(QRect(480, 220, 21, 21));
        tabWidget->addTab(tab_lc, QString());
        tab_yl = new QWidget();
        tab_yl->setObjectName(QString::fromUtf8("tab_yl"));
        kl = new QLabel(tab_yl);
        kl->setObjectName(QString::fromUtf8("kl"));
        kl->setGeometry(QRect(0, 0, 141, 111));
        kl_lable = new QLabel(tab_yl);
        kl_lable->setObjectName(QString::fromUtf8("kl_lable"));
        kl_lable->setGeometry(QRect(160, 30, 101, 21));
        btn_kl_add = new QPushButton(tab_yl);
        btn_kl_add->setObjectName(QString::fromUtf8("btn_kl_add"));
        btn_kl_add->setGeometry(QRect(160, 70, 21, 21));
        kl_num = new QLabel(tab_yl);
        kl_num->setObjectName(QString::fromUtf8("kl_num"));
        kl_num->setGeometry(QRect(190, 70, 21, 16));
        btn_kl_sub = new QPushButton(tab_yl);
        btn_kl_sub->setObjectName(QString::fromUtf8("btn_kl_sub"));
        btn_kl_sub->setGeometry(QRect(210, 70, 21, 21));
        xb = new QLabel(tab_yl);
        xb->setObjectName(QString::fromUtf8("xb"));
        xb->setGeometry(QRect(260, 0, 131, 111));
        xb_lable_ = new QLabel(tab_yl);
        xb_lable_->setObjectName(QString::fromUtf8("xb_lable_"));
        xb_lable_->setGeometry(QRect(400, 30, 71, 21));
        btn_xb_add = new QPushButton(tab_yl);
        btn_xb_add->setObjectName(QString::fromUtf8("btn_xb_add"));
        btn_xb_add->setGeometry(QRect(400, 70, 21, 21));
        xb_num = new QLabel(tab_yl);
        xb_num->setObjectName(QString::fromUtf8("xb_num"));
        xb_num->setGeometry(QRect(430, 70, 20, 20));
        btn_xb_sub = new QPushButton(tab_yl);
        btn_xb_sub->setObjectName(QString::fromUtf8("btn_xb_sub"));
        btn_xb_sub->setGeometry(QRect(450, 70, 21, 21));
        tabWidget->addTab(tab_yl, QString());
        zhuohao = new QLabel(Widget);
        zhuohao->setObjectName(QString::fromUtf8("zhuohao"));
        zhuohao->setGeometry(QRect(10, 330, 41, 17));
        zongjia = new QLabel(Widget);
        zongjia->setObjectName(QString::fromUtf8("zongjia"));
        zongjia->setGeometry(QRect(80, 330, 41, 17));
        order_info = new QPushButton(Widget);
        order_info->setObjectName(QString::fromUtf8("order_info"));
        order_info->setGeometry(QRect(160, 320, 89, 31));
        send_order = new QPushButton(Widget);
        send_order->setObjectName(QString::fromUtf8("send_order"));
        send_order->setGeometry(QRect(270, 320, 89, 31));
        exit = new QPushButton(Widget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setGeometry(QRect(370, 320, 89, 31));
        labeltable = new QLabel(Widget);
        labeltable->setObjectName(QString::fromUtf8("labeltable"));
        labeltable->setGeometry(QRect(50, 330, 21, 17));
        labelprice = new QLabel(Widget);
        labelprice->setObjectName(QString::fromUtf8("labelprice"));
        labelprice->setGeometry(QRect(120, 330, 31, 20));

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\350\217\234\345\215\225", nullptr));
        hsr->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        hsr_label->setText(QApplication::translate("Widget", "\347\272\242\347\203\247\350\202\211    32\357\277\245", nullptr));
        btn_hsr_add->setText(QApplication::translate("Widget", "+", nullptr));
        btn_hsr_sub->setText(QApplication::translate("Widget", "-", nullptr));
        hsr_num->setText(QApplication::translate("Widget", "0", nullptr));
        ssgy->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        ssgy_lable->setText(QApplication::translate("Widget", "\346\235\276\351\274\240\351\263\234\351\261\274    68\357\277\245", nullptr));
        btn_ssgy_sub->setText(QApplication::translate("Widget", "-", nullptr));
        ssgy_num->setText(QApplication::translate("Widget", "0", nullptr));
        btn_ssgy_add->setText(QApplication::translate("Widget", "+", nullptr));
        yxrs->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        yxrs_label->setText(QApplication::translate("Widget", "\351\261\274\351\246\231\350\202\211\344\270\235   36\357\277\245", nullptr));
        btn_yxrs_add->setText(QApplication::translate("Widget", "+", nullptr));
        btn_yxrs_sub->setText(QApplication::translate("Widget", "-", nullptr));
        yxrs_num->setText(QApplication::translate("Widget", "0", nullptr));
        qc->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        qc_label->setText(QApplication::translate("Widget", "\351\235\222\350\217\234    16\357\277\245", nullptr));
        btn_qc_add->setText(QApplication::translate("Widget", "+", nullptr));
        btn_qc_sub->setText(QApplication::translate("Widget", "-", nullptr));
        qc_num->setText(QApplication::translate("Widget", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_rc), QApplication::translate("Widget", "\347\203\255\350\217\234", nullptr));
        phg->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        md->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        phg_label->setText(QApplication::translate("Widget", "\346\213\215\351\273\204\347\223\234    12\357\277\245", nullptr));
        btn_phg_add->setText(QApplication::translate("Widget", "+", nullptr));
        phg_num->setText(QApplication::translate("Widget", "0", nullptr));
        btn_phg_sub->setText(QApplication::translate("Widget", "-", nullptr));
        md_label->setText(QApplication::translate("Widget", "\346\257\233\350\261\206   16\357\277\245", nullptr));
        btn_md_add->setText(QApplication::translate("Widget", "+", nullptr));
        md_num->setText(QApplication::translate("Widget", "0", nullptr));
        btn_md_sub->setText(QApplication::translate("Widget", "-", nullptr));
        hsm->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        hsm_label->setText(QApplication::translate("Widget", "\350\212\261\347\224\237\347\261\263    8\357\277\245", nullptr));
        btn_hsm_add->setText(QApplication::translate("Widget", "+", nullptr));
        hsm_num->setText(QApplication::translate("Widget", "0", nullptr));
        btn_hsm_sub->setText(QApplication::translate("Widget", "-", nullptr));
        pd->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        pd_label->setText(QApplication::translate("Widget", "\347\232\256\350\233\213   18\357\277\245", nullptr));
        btn_pd_add->setText(QApplication::translate("Widget", "+", nullptr));
        pd_num->setText(QApplication::translate("Widget", "0", nullptr));
        btn_pd_sub->setText(QApplication::translate("Widget", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_lc), QApplication::translate("Widget", "\345\207\211\350\217\234", nullptr));
        kl->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        kl_lable->setText(QApplication::translate("Widget", "\345\217\257\344\271\220    3\357\277\245", nullptr));
        btn_kl_add->setText(QApplication::translate("Widget", "+", nullptr));
        kl_num->setText(QApplication::translate("Widget", "0", nullptr));
        btn_kl_sub->setText(QApplication::translate("Widget", "-", nullptr));
        xb->setText(QApplication::translate("Widget", "TextLabel", nullptr));
        xb_lable_->setText(QApplication::translate("Widget", "\351\233\252\347\242\247    3\357\277\245", nullptr));
        btn_xb_add->setText(QApplication::translate("Widget", "+", nullptr));
        xb_num->setText(QApplication::translate("Widget", "0", nullptr));
        btn_xb_sub->setText(QApplication::translate("Widget", "-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_yl), QApplication::translate("Widget", "\351\245\256\346\226\231", nullptr));
        zhuohao->setText(QApplication::translate("Widget", "\346\241\214\345\217\267\357\274\232", nullptr));
        zongjia->setText(QApplication::translate("Widget", "\346\200\273\344\273\267\357\274\232", nullptr));
        order_info->setText(QApplication::translate("Widget", "\350\256\242\345\215\225\344\277\241\346\201\257", nullptr));
        send_order->setText(QApplication::translate("Widget", "\346\217\220\344\272\244\350\256\242\345\215\225", nullptr));
        exit->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        labeltable->setText(QApplication::translate("Widget", "0", nullptr));
        labelprice->setText(QApplication::translate("Widget", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
