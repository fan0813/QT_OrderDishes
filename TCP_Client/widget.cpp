#include "widget.h"
#include "ui_widget.h"
#include "menu.h"
#include "keyborad.h"
#include <QDebug>
#include <QStandardPaths>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QTcpSocket>
#include <QHostAddress>

#define PORT 8080

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , dishes_num(10,0)
{
    ui->setupUi(this);
    //设置图片
    ui->hsr->setPixmap(QPixmap("./res/1.jpg").scaled(200,200));
    ui->ssgy->setPixmap(QPixmap("./res/2.jpg").scaled(200,200));
    ui->yxrs->setPixmap(QPixmap("./res/3.jpg").scaled(200,200));
    ui->qc->setPixmap(QPixmap("./res/4.jpg").scaled(200,200));
    ui->phg->setPixmap(QPixmap("./res/5.jpg").scaled(200,200));
    ui->md->setPixmap(QPixmap("./res/6.jpg").scaled(200,200));
    ui->hsm->setPixmap(QPixmap("./res/7.jpg").scaled(200,200));
    ui->pd->setPixmap(QPixmap("./res/8.jpg").scaled(200,200));
    ui->kl->setPixmap(QPixmap("./res/10.jpg").scaled(200,200));
    ui->xb->setPixmap(QPixmap("./res/9.jpg").scaled(200,200));

    //dishes_num.resize(prices.size());
    //std::fill(dishes_num.begin(), dishes_num.end(), 0);

    //数据库设置
    order_db = QSqlDatabase::addDatabase("QSQLITE");
    order_db.setDatabaseName("order.db");

    if (!order_db.open())
    {
        qDebug() << "数据库连接失败!" << order_db.lastError();
    }

    //表格设置
    QSqlQuery createQuery(order_db);
    if (!createQuery.exec(
        "CREATE TABLE IF NOT EXISTS order_dishes ("
        "   id    INTEGER PRIMARY KEY,"
        "   name  TEXT NOT NULL,"
        "   price REAL,"
        "   num   INTEGER DEFAULT 0"
        ")"
    )) {
        qDebug() << "创建表失败：" << createQuery.lastError().text();
        return;
    }

    // 插入数据
    QSqlQuery sqlQuery(order_db); // 绑定到 order_db 连接
    sqlQuery.prepare("INSERT OR REPLACE INTO order_dishes (id, name, price, num) VALUES (?, ?, ?, ?)");

    for (int i = 0; i < names.size(); i++) {
        sqlQuery.addBindValue(i + 1); // id
        sqlQuery.addBindValue(names[i]);
        sqlQuery.addBindValue(prices[i]);
        sqlQuery.addBindValue(0); // num 初始化为 0

        if (!sqlQuery.exec()) {
            qDebug() << "插入数据失败：" << sqlQuery.lastError().text();
        }
    }

    QSqlQuery query(order_db);

    // 执行 SELECT 查询
    if (!query.exec("SELECT * FROM order_dishes")) {
        qDebug() << "查询失败：" << query.lastError().text();
        return;
    }

    // 遍历结果集
    while (query.next()) {
        int id = query.value("id").toInt();
        QString name = query.value("name").toString();
        double price = query.value("price").toDouble();
        int num = query.value("num").toInt();

        qDebug() << "id:" << id
                 << "name:" << name
                 << "price:" << price
                 << "num:" << num;
    }

    //TCP通讯
    m_tcp = new QTcpSocket(this);
    m_tcp->connectToHost(QHostAddress(IP), PORT);

    connect(m_tcp, &QTcpSocket::connected, this, [=](){
        qDebug() << "成功连接服务器";
    });

    connect(m_tcp, &QTcpSocket::disconnected, this, [=](){
        qDebug() << "断开连接";
    });
}

Widget::~Widget()
{
    delete ui;
}

int Widget::count_price()
{
    int total = 0;
    for (int i = 0; i < 10; i++){
        total += dishes_num[i] * prices[i];
    }
    return total;
}

void Widget::update_table_number(int table_number)
{
    current_table_number = table_number; // 保存桌号
    ui->labeltable->setText(QString("%1").arg(table_number));// 显示桌号
}


void Widget::on_btn_hsr_add_clicked()
{
    if(dishes_num[0] < 99){  //给个最大值限定
        this->dishes_num[0]++;
        ui->hsr_num->setText(QString::number(dishes_num[0]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_hsr_sub_clicked()
{
    if (dishes_num[0] > 0) { // 防止变成负数
        this->dishes_num[0]--;
        ui->hsr_num->setText(QString::number(dishes_num[0]));
        int prince = count_price();
        ui->labelprice->setText(QString("%1").arg(prince));
    }
}

void Widget::on_btn_ssgy_add_clicked()
{
    if(dishes_num[1] < 99){  //给个最大值限定
        this->dishes_num[1]++;
        ui->ssgy_num->setText(QString::number(dishes_num[1]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_ssgy_sub_clicked()
{
    if (dishes_num[1] > 0) { // 防止变成负数
        this->dishes_num[1]--;
        ui->ssgy_num->setText(QString::number(dishes_num[1]));
        int prince = count_price();
        ui->labelprice->setText(QString("%1").arg(prince));
    }
}

void Widget::on_btn_yxrs_add_clicked()
{
    if(dishes_num[2] < 99){  //给个最大值限定
        this->dishes_num[2]++;
        ui->yxrs_num->setText(QString::number(dishes_num[2]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_yxrs_sub_clicked()
{
    if (dishes_num[2] > 0) { // 防止变成负数
        this->dishes_num[2]--;
        ui->yxrs_num->setText(QString::number(dishes_num[2]));
        int prince = count_price();
        ui->labelprice->setText(QString("%1").arg(prince));
    }
}

void Widget::on_btn_qc_add_clicked()
{
    if(dishes_num[3] < 99){  //给个最大值限定
        this->dishes_num[3]++;
        ui->qc_num->setText(QString::number(dishes_num[3]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_qc_sub_clicked()
{
    if (dishes_num[3] > 0) { // 防止变成负数
        this->dishes_num[3]--;
        ui->qc_num->setText(QString::number(dishes_num[3]));
        int prince = count_price();
        ui->labelprice->setText(QString("%1").arg(prince));
    }
}

void Widget::on_btn_phg_add_clicked()
{
    if(dishes_num[4] < 99){  //给个最大值限定
        this->dishes_num[4]++;
        ui->phg_num->setText(QString::number(dishes_num[4]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_phg_sub_clicked()
{
    if (dishes_num[4] > 0) { // 防止变成负数
        this->dishes_num[4]--;
        ui->phg_num->setText(QString::number(dishes_num[4]));
        int prince = count_price();
        ui->labelprice->setText(QString("%1").arg(prince));
    }
}

void Widget::on_btn_md_add_clicked()
{
    if(dishes_num[5] < 99){  //给个最大值限定
        this->dishes_num[5]++;
        ui->md_num->setText(QString::number(dishes_num[5]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_md_sub_clicked()
{
    if (dishes_num[5] > 0) { // 防止变成负数
        this->dishes_num[5]--;
        ui->md_num->setText(QString::number(dishes_num[5]));
        int prince = count_price();
        ui->labelprice->setText(QString("%1").arg(prince));
    }
}

void Widget::on_btn_hsm_add_clicked()
{
    if(dishes_num[6] < 99){  //给个最大值限定
        this->dishes_num[6]++;
        ui->hsm_num->setText(QString::number(dishes_num[6]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_hsm_sub_clicked()
{
    if (dishes_num[6] > 0) { // 防止变成负数
        this->dishes_num[6]--;
        ui->hsm_num->setText(QString::number(dishes_num[6]));
        int prince = count_price();
        ui->labelprice->setText(QString("%1").arg(prince));
    }
}

void Widget::on_btn_pd_add_clicked()
{
    if(dishes_num[7] < 99){  //给个最大值限定
        this->dishes_num[7]++;
        ui->pd_num->setText(QString::number(dishes_num[7]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_pd_sub_clicked()
{
    if (dishes_num[7] > 0) { // 防止变成负数
        this->dishes_num[7]--;
        ui->pd_num->setText(QString::number(dishes_num[7]));
        int prince = count_price();
        ui->labelprice->setText(QString("%1").arg(prince));
    }
}

void Widget::on_btn_kl_add_clicked()
{
    if(dishes_num[8] < 99){  //给个最大值限定
        this->dishes_num[8]++;
        ui->kl_num->setText(QString::number(dishes_num[8]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_kl_sub_clicked()
{
    if(dishes_num[8] > 0){  //给个最大值限定
        this->dishes_num[8]--;
        ui->kl_num->setText(QString::number(dishes_num[8]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}

void Widget::on_btn_xb_add_clicked()
{
    if(dishes_num[9] < 99){  //给个最大值限定
        this->dishes_num[9]++;
        ui->xb_num->setText(QString::number(dishes_num[9]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}



void Widget::on_btn_xb_sub_clicked()
{
    if(dishes_num[9] > 0){  //给个最大值限定
        this->dishes_num[9]--;
        ui->xb_num->setText(QString::number(dishes_num[9]));
        int price = count_price();
        ui->labelprice->setText(QString("%1").arg(price));
    }
}


void Widget::on_order_info_clicked()
{
    menu *menu_info = new menu();
    menu_info->order_info(dishes_num, names);
    menu_info->show();
}

void Widget::on_exit_clicked()
{
    keyborad *keyborad1 = new keyborad();
    keyborad1->show();
    this->close();
}

void Widget::on_send_order_clicked()
{
        QString str;
        str.append("桌号：");
        str.append(QString::number(current_table_number));
        str.append("  ");
        int total_price = count_price();
        str.append("订单总价:");
        str.append(QString::number(total_price));
        str.append("元");
        str.append(" ");
        for(size_t i = 0; i < 10;i++){
            if(dishes_num[i] > 0){
                str.append(names[i]);
                str.append(":");
                str.append(QString::number(dishes_num[i]));
                str.append("  ");
            }

        }
        m_tcp -> write(str.toUtf8());
}
