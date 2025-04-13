#ifndef KEYBORAD_H
#define KEYBORAD_H

#include <QWidget>
#include "widget.h"
#include <QString>

namespace Ui {
class keyborad;
}

class keyborad : public QWidget
{
    Q_OBJECT

public:
    explicit keyborad(QWidget *parent = nullptr);
    ~keyborad();
    QString expression;
    Widget *page2;

signals:
    void table_number_entered(int table_number);

private slots:
    void on_pushButton_queren_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_qingchu_clicked();

    void on_pushButton_xiaochu_clicked();

private:
    Ui::keyborad *uik;

};

#endif // KEYBORAD_H
