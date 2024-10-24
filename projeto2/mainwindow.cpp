#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
#include <QCryptographicHash>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);



    // Configurar estilo moderno
    QString style = R"(
    QMainWindow {
        background: qlineargradient(
            x1: 0, y1: 0,
            x2: 1, y2: 1,
            stop: 0 #2C3E50,
            stop: 1 #3498DB
        );
    }

    QWidget#centralwidget {
        background: transparent;
    }

    QFrame#loginFrame {
        background: rgba(255, 255, 255, 0.95);
        border-radius: 15px;
        border: 1px solid rgba(255, 255, 255, 0.3);
        padding: 20px;
    }

    QLineEdit {
        padding: 12px;
        border: 2px solid rgba(52, 152, 219, 0.2);
        border-radius: 8px;
        background: rgba(255, 255, 255, 0.9);
        font-size: 15px;
        min-height: 25px;
        selection-background-color: #3498DB;
        selection-color: white;
    }

    QLineEdit:focus {
        border: 2px solid #3498DB;
        background: white;
    }

    QLineEdit:hover {
        background: white;
        border: 2px solid rgba(52, 152, 219, 0.5);
    }

    QPushButton {
        background: qlineargradient(
            x1: 0, y1: 0,
            x2: 1, y2: 0,
            stop: 0 #3498DB,
            stop: 1 #2980B9
        );
        color: white;
        border: none;
        border-radius: 8px;
        padding: 12px 20px;
        font-size: 15px;
        font-weight: bold;
        min-height: 40px;
    }

    QPushButton:hover {
        background: qlineargradient(
            x1: 0, y1: 0,
            x2: 1, y2: 0,
            stop: 0 #2980B9,
            stop: 1 #2C3E50
        );
    }

    QPushButton:pressed {
        background: #2C3E50;
        padding: 12px 20px;
    }

    QLabel {
        color: #2C3E50;
        font-size: 15px;
        font-weight: 500;
    }

    #labelTitle {
        color: #2C3E50;
        font-size: 32px;
        font-weight: bold;
        margin-bottom: 20px;
    }

    /* Estilo para o texto de placeholder nos QLineEdit */
    QLineEdit[placeholderText] {
        color: #95A5A6;
    }
)";
    this->setStyleSheet(style);

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
            close();
        }
    }
}



void MainWindow::on_pushButton_2_clicked()
{
    close();
}

