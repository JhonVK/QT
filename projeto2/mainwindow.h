#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void botaoValidar();


private:
    Ui::MainWindow *ui;
    QHash<QString, QString> credentials;


    int failedAttempts;
    static const int MAX_FAILED_ATTEMPTS = 3;      // Máximo de tentativas
    static const int LOCKOUT_DURATION = 30000;     // Tempo de bloqueio (30 segundos)

};
#endif // MAINWINDOW_H
