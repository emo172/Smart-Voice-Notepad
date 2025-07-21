#include <QtWidgets/QApplication>
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    login w;
    w.setWindowTitle("登录界面");
    w.show();
    return a.exec();
}
