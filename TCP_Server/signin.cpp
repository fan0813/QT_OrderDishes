#include "signin.h"
#include "ui_signin.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include "widget.h"
#include <QDebug>

SignIn::SignIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::usernameEdit()
{
    username = ui->lineEdit_username->text();

    if(username.isEmpty()){
        QMessageBox::warning(this, "警告", "用户名为空!");
    }

    if(username.length() < 5){
        QMessageBox::warning(this, "警告", "用户名不可少于5个字符!");
    }
}

void SignIn::passwordEdit()
{
    password = ui->lineEdit_password->text();

    if(password.isEmpty()){
        QMessageBox::warning(this, "警告", "密码为空!");
    }

    if(password.length() < 5){
        QMessageBox::warning(this, "警告", "密码不可少于5个字符!");
    }
}


void SignIn::on_pushButton_clicked()
{
    Widget::sqldata_init();
    usernameEdit();
    passwordEdit();

    ensure_password = ui->lineEdit_ensure_password->text();

    if(ensure_password == password){
        QString sql = QString("insert into user(username,password) values('%1','%2');").arg(username).arg(password);

        QSqlQuery query;

        if(!query.exec(sql)){
            qDebug() << "数据插入失败";
            QMessageBox::information(this, "失败", "数据插入失败!");
        }else{
            qDebug() << "数据插入成功";
            QMessageBox::information(this, "成功", "数据插入成功!");
            Widget *widget = new Widget();
            this->close();
            widget->show();

        }
    }else{
        QMessageBox::information(this, "错误", "确认密码错误");
    }


}
