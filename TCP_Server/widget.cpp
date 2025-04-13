#include "widget.h"
#include "ui_widget.h"
#include "signin.h"
#include "bill.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::sqldata_init()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("user.db");
    if (!db.open()) {
        qDebug() << "Error:" << db.lastError().text();
        return;
    }

    QString createTableSql =
        "CREATE TABLE IF NOT EXISTS user ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "username TEXT UNIQUE NOT NULL,"
        "password TEXT NOT NULL"
        ");";

    QSqlQuery creatQuery;

    if(!creatQuery.exec(createTableSql)){
           qDebug()<<"table create error";
       }
       else{
           qDebug()<<"table create success";
       }
}


void Widget::on_btn_exit_clicked()
{
    this->close();
}

void Widget::on_btn_login_clicked()
{
    sqldata_init();
    username = ui->lineEdit_username->text();
    password = ui->lineEdit_password->text();

    QString sql = QString("select * from user where username='%1' and password='%2'").arg(username).arg(password);
    QSqlQuery query(sql);

    if(!query.next()){
        qDebug() << "失败";
        QMessageBox::information(this, "错误", "用户名或密码错误");

    }
    else{
        qDebug() << "成功";
        this->close();
        bill *bill1 = new bill();
        bill1->show();
    }



}

void Widget::on_btn_signin_clicked()
{
    this->close();
    SignIn *signin = new SignIn();
    signin->show();
}
