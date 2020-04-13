/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *LoginScreen;
    QLabel *labelUsername;
    QLabel *labelPassword;
    QLineEdit *lineEditUsername;
    QLineEdit *lineEditPassword;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonReset;
    QWidget *StudentScreen;
    QTableView *tableviewAllStadiums;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(10, 10, 781, 531));
        stackedWidget->setFrameShape(QFrame::Box);
        LoginScreen = new QWidget();
        LoginScreen->setObjectName(QString::fromUtf8("LoginScreen"));
        LoginScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(150, 150, 150);"));
        labelUsername = new QLabel(LoginScreen);
        labelUsername->setObjectName(QString::fromUtf8("labelUsername"));
        labelUsername->setGeometry(QRect(180, 210, 81, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier"));
        labelUsername->setFont(font);
        labelUsername->setFrameShape(QFrame::Box);
        labelPassword = new QLabel(LoginScreen);
        labelPassword->setObjectName(QString::fromUtf8("labelPassword"));
        labelPassword->setGeometry(QRect(180, 250, 81, 31));
        labelPassword->setFont(font);
        labelPassword->setFrameShape(QFrame::Box);
        lineEditUsername = new QLineEdit(LoginScreen);
        lineEditUsername->setObjectName(QString::fromUtf8("lineEditUsername"));
        lineEditUsername->setGeometry(QRect(280, 210, 211, 31));
        lineEditUsername->setFont(font);
        lineEditUsername->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEditPassword = new QLineEdit(LoginScreen);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(280, 250, 211, 31));
        lineEditPassword->setFont(font);
        lineEditPassword->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        pushButtonLogin = new QPushButton(LoginScreen);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        pushButtonLogin->setGeometry(QRect(510, 250, 61, 31));
        pushButtonLogin->setFont(font);
        pushButtonReset = new QPushButton(LoginScreen);
        pushButtonReset->setObjectName(QString::fromUtf8("pushButtonReset"));
        pushButtonReset->setGeometry(QRect(510, 210, 61, 31));
        pushButtonReset->setFont(font);
        pushButtonReset->setStyleSheet(QString::fromUtf8(""));
        pushButtonReset->setCheckable(false);
        pushButtonReset->setAutoDefault(false);
        pushButtonReset->setFlat(false);
        stackedWidget->addWidget(LoginScreen);
        StudentScreen = new QWidget();
        StudentScreen->setObjectName(QString::fromUtf8("StudentScreen"));
        StudentScreen->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tableviewAllStadiums = new QTableView(StudentScreen);
        tableviewAllStadiums->setObjectName(QString::fromUtf8("tableviewAllStadiums"));
        tableviewAllStadiums->setGeometry(QRect(65, 50, 641, 391));
        pushButton = new QPushButton(StudentScreen);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 480, 93, 28));
        stackedWidget->addWidget(StudentScreen);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);
        pushButtonReset->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelUsername->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEditUsername->setText(QString());
        pushButtonLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButtonReset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H