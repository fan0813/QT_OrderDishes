#ifndef BILL_H
#define BILL_H

#include <QWidget>
#include <QTcpServer>

namespace Ui {
class bill;
}

class bill : public QWidget
{
    Q_OBJECT

public:
    explicit bill(QWidget *parent = nullptr);
    ~bill();

    int dish_price();

private slots:
    void new_table(QString data);

private:
    QString data;
    Ui::bill *ui;
    QTcpServer *m_server;
    QVector<int> dishes_num;
    QVector<int> prices = { 32, 68, 36, 16, 12, 16, 8, 18, 3, 3 };

};

#endif // BILL_H
