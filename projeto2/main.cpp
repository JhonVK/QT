#include "mainwindow.h"
#include <QWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Exemplo de Mudança de Plano de Fundo");
    w.resize(400, 300);

    // Cria um novo objeto QPalette
    QPalette palette;
    // Define a cor de fundo para o widget
    palette.setColor(QPalette::Window, Qt::blue);

    // Aplica o novo QPalette ao widget
    w.setPalette(palette);
    w.show();

    return a.exec();
}
