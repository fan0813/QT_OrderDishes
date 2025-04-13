#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QObject>
#include <QThread>
#include <QTcpSocket>

class mythread : public QThread
{
    Q_OBJECT
public:
    explicit mythread(QTcpSocket* tcp, QObject *parent = nullptr);

protected:
    void run() override;

signals:
    void trans_over(QString data);

private:
    QTcpSocket *m_tcp;
    QString data;
    QVector<int> dishes_num;

};

#endif // MYTHREAD_H
