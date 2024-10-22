/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *f1;
    QLineEdit *f2;
    QPushButton *multiButton;
    QPushButton *pushButton;
    QPushButton *subButton_3;
    QPushButton *divideButton_4;
    QLabel *label_3;
    QLineEdit *r1;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(427, 372);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 40, 49, 16));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 49, 16));
        f1 = new QLineEdit(centralwidget);
        f1->setObjectName("f1");
        f1->setGeometry(QRect(110, 40, 113, 24));
        f2 = new QLineEdit(centralwidget);
        f2->setObjectName("f2");
        f2->setGeometry(QRect(110, 70, 113, 24));
        multiButton = new QPushButton(centralwidget);
        multiButton->setObjectName("multiButton");
        multiButton->setGeometry(QRect(30, 150, 80, 24));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 150, 80, 24));
        subButton_3 = new QPushButton(centralwidget);
        subButton_3->setObjectName("subButton_3");
        subButton_3->setGeometry(QRect(190, 150, 80, 24));
        divideButton_4 = new QPushButton(centralwidget);
        divideButton_4->setObjectName("divideButton_4");
        divideButton_4->setGeometry(QRect(270, 150, 80, 24));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 220, 49, 16));
        r1 = new QLineEdit(centralwidget);
        r1->setObjectName("r1");
        r1->setGeometry(QRect(130, 220, 113, 24));
        r1->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Num 1:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Num 2:", nullptr));
        multiButton->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subButton_3->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        divideButton_4->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "result? ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
