#include "mythread.h"

mythread::mythread(QTcpSocket* tcp, QObject *parent) : QThread(parent)
{
    m_tcp = tcp;
}

void mythread::run()
{
    connect(m_tcp, &QTcpSocket::readyRead, this, [=](){
       data = m_tcp->readAll();
//       QStringList numbers = data.split(",");
//       for (const QString &numStr : numbers) {
//           bool ok;
//           int num = numStr.toInt(&ok);
//           if (ok){
//               dishes_num.append(num);
//           }
//       }
       emit trans_over(data);
       dishes_num.clear();
    });
    exec();
}
