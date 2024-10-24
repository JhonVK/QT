#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    failedAttempts=0;
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(botaoValidar()));
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);


    credentials.insert("admin", "admin123");
    credentials.insert("user1", "senha456");
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::botaoValidar(){
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if (credentials.contains(username)) {
        QString storedHash = credentials.value(username);
        if (storedHash == password) {
            this->close();
        }
    }
}
