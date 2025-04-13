#include "menu.h"
#include "ui_menu.h"
#include <QVector>
#include "widget.h"

menu::menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::order_info(QVector<int> dishes_num, QVector<QString> names)
{
    QString str;
        for (int i = 0; i < names.size(); i++) {
            if (dishes_num[i] != 0) { // 检查非零值
                str = names[i];
                str.append(" * ");
                str.append(QString::number(dishes_num[i]));
                ui->textBrowser->append(str); // 确保能看到内容
            }
        }
}

void menu::on_btn_close_clicked()
{
    this->close();
}
