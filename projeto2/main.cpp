#include "mainwindow.h"
#include <QWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Login");
    w.resize(400, 300);

    w.show();

    return a.exec();
}
