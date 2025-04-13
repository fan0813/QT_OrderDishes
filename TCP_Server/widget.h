#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    static void sqldata_init();

private slots:
    void on_btn_exit_clicked();

    void on_btn_login_clicked();

    void on_btn_signin_clicked();

private:
    Ui::Widget *ui;
    QString username;
    QString password;
};
#endif // WIDGET_H
