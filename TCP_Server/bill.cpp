#include "bill.h"
#include "ui_bill.h"
#include "mythread.h"
#include <QTcpServer>
#include <QTcpSocket>
#include <QtWidgets>
#include <QDebug>
#include <QThread>
#include <QTextBrowser>
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <numeric> // For std::accumulate

#define PORT 8080

bill::bill(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::bill)
{
    ui->setupUi(this);

    m_server = new QTcpServer();
    if(!m_server->listen(QHostAddress::Any, PORT)){
        qDebug() << "服务器启动失败!" << m_server->errorString();
        return;
    }

    connect(m_server, &QTcpServer::newConnection, this, [=]() {
            QTcpSocket* tcp = m_server->nextPendingConnection(); //等待下次链接
            mythread* order = new mythread(tcp); // 创建 TcpOrder 实例
            order->start();
            connect(order, &mythread::trans_over, this, &bill::new_table);
        });
}

bill::~bill()
{
    delete ui;
}

int bill::dish_price()
{
    int total = 0;

    for (int i = 1; i < dishes_num.size(); i++) {
               total += dishes_num[i] * prices[i - 1];
     }
    return total;
}

void bill::new_table(QString data)
{
    data = data;
    QVector<QString> names = { "红烧肉", "松鼠鳜鱼", "鱼香肉丝", "青菜", "拍黄瓜", "毛豆", "花生米", "皮蛋", "可乐", "雪碧" };

    ui->textBrowser->append(data);
//    QString str;
//    QString str_desknum;
//    str_desknum = "桌号:";
//    str_desknum.append(QString::number(dishes_num[0]));
//    str.append(str_desknum);

//    for (int i = 1; i < dishes_num.size(); ++i) {
//           if(dishes_num[i]>0){
//           str.append(QString("%1 - %2 份").arg(names[i-1]).arg(dishes_num[i]));}
//    }
//    int i = dish_price();
//    str.append("总价:");
//    str.append(QString::number(i));
}
