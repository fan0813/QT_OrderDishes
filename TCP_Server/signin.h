#ifndef SIGNIN_H
#define SIGNIN_H

#include <QWidget>

namespace Ui {
class SignIn;
}

class SignIn : public QWidget
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();

    void usernameEdit();

    void passwordEdit();

private slots:
    void on_pushButton_clicked();

private:
    Ui::SignIn *ui;
    QString username;
    QString password;
    QString ensure_password;
};

#endif // SIGNIN_H
