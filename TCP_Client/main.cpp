#include "widget.h"

#include <QApplication>
#include "keyborad.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    keyborad page1;
    page1.show();
    return a.exec();
}
