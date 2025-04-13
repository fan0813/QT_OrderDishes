#ifndef MENU_H
#define MENU_H

#include <QWidget>

namespace Ui {
class menu;
}

class menu : public QWidget
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = nullptr);
    ~menu();

    void order_info(QVector<int> num_Dishes, QVector<QString> names);

private slots:
    void on_btn_close_clicked();

private:
    Ui::menu *ui;   
};

#endif // MENU_H
