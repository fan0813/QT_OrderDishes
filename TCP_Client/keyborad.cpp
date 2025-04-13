#include "keyborad.h"
#include "ui_keyborad.h"

keyborad::keyborad(QWidget *parent) :
    QWidget(parent),
    uik(new Ui::keyborad)
{
    uik->setupUi(this);
}

keyborad::~keyborad()
{
    delete uik;
}

void keyborad::on_pushButton_queren_clicked()
{
    int table_number = uik->lineEdit->text().toInt();
    this->page2 = new Widget;
    connect(this, &keyborad::table_number_entered, this->page2, &Widget::update_table_number);
    emit table_number_entered(table_number);
    this->close();
    this->page2->show();
}

void keyborad::on_pushButton_1_clicked()
{
    expression += "1";
    uik->lineEdit->setText(expression);
}



void keyborad::on_pushButton_2_clicked()
{
    expression += "2";
    uik->lineEdit->setText(expression);
}

void keyborad::on_pushButton_3_clicked()
{
    expression += "3";
    uik->lineEdit->setText(expression);
}

void keyborad::on_pushButton_4_clicked()
{
    expression += "4";
    uik->lineEdit->setText(expression);
}

void keyborad::on_pushButton_5_clicked()
{
    expression += "5";
    uik->lineEdit->setText(expression);
}

void keyborad::on_pushButton_6_clicked()
{
    expression += "6";
    uik->lineEdit->setText(expression);
}

void keyborad::on_pushButton_7_clicked()
{
    expression += "7";
    uik->lineEdit->setText(expression);
}

void keyborad::on_pushButton_8_clicked()
{
    expression += "8";
    uik->lineEdit->setText(expression);
}

void keyborad::on_pushButton_9_clicked()
{
    expression += "9";
    uik->lineEdit->setText(expression);
}

void keyborad::on_pushButton_0_clicked()
{
    expression += "0";
    uik->lineEdit->setText(expression);
}

void keyborad::on_pushButton_qingchu_clicked()
{
    //全部清除
    expression.clear();
    uik->lineEdit->clear();
}

void keyborad::on_pushButton_xiaochu_clicked()
{
    //清除一位
    expression.chop(1);
    uik->lineEdit->setText(expression);
}
