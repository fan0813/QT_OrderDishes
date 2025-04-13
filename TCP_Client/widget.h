#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QVector>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QTcpSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    //菜名
    QVector<QString> names = { "红烧肉", "松鼠鳜鱼", "鱼香肉丝", "青菜", "拍黄瓜", "毛豆", "花生米", "皮蛋", "可乐", "雪碧" };
    //计算总价
    int count_price();

public slots:
    void update_table_number(int table_number);

private slots:
    void on_btn_hsr_add_clicked();

    void on_btn_hsr_sub_clicked();

    void on_btn_ssgy_add_clicked();

    void on_btn_ssgy_sub_clicked();

    void on_btn_yxrs_add_clicked();

    void on_btn_yxrs_sub_clicked();

    void on_btn_qc_add_clicked();

    void on_btn_qc_sub_clicked();

    void on_btn_phg_add_clicked();

    void on_btn_phg_sub_clicked();

    void on_btn_md_add_clicked();

    void on_btn_md_sub_clicked();

    void on_btn_hsm_add_clicked();

    void on_btn_hsm_sub_clicked();

    void on_btn_pd_add_clicked();

    void on_btn_pd_sub_clicked();

    void on_btn_kl_add_clicked();

    void on_btn_kl_sub_clicked();

    void on_btn_xb_add_clicked();

    void on_btn_xb_sub_clicked();

    void on_order_info_clicked();

    void on_exit_clicked();

    void on_send_order_clicked();

private:
    Ui::Widget *ui;
    QVector<int> dishes_num;
    int current_table_number;
    QList<int> prices = { 32, 68, 36, 16, 12, 16, 8, 18, 3, 3 };
    QSqlDatabase order_db;
    QSqlQuery sqlQuery;
    QTcpSocket *m_tcp;
    QString IP = "192.168.233.129";
};
#endif // WIDGET_H
