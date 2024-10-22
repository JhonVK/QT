#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_multiButton_clicked()
{
    int primeiroNum=ui->f1->text().toInt();
    int segundoNum=ui->f2->text().toInt();
    int result= primeiroNum*segundoNum;
    ui->r1->setText(QString::number(result));
}


void MainWindow::on_pushButton_clicked()
{
    int primeiroNum=ui->f1->text().toInt();
    int segundoNum=ui->f2->text().toInt();
    int result= primeiroNum+segundoNum;
    ui->r1->setText(QString::number(result));
}


void MainWindow::on_subButton_3_clicked()
{
    int primeiroNum=ui->f1->text().toInt();
    int segundoNum=ui->f2->text().toInt();
    int result= primeiroNum-segundoNum;
    ui->r1->setText(QString::number(result));
}


void MainWindow::on_divideButton_4_clicked()
{
    int primeiroNum=ui->f1->text().toInt();
    int segundoNum=ui->f2->text().toInt();
    int result= primeiroNum/segundoNum;
    ui->r1->setText(QString::number(result));
}

