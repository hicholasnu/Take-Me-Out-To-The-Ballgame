/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
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
    QPushButton *pushButtonResetLogin;
    QWidget *UserScreen;
    QTableView *tableviewAllStadiums;
    QLabel *labelShowCurrentSort;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelSortByTeam;
    QComboBox *comboBoxChooseRoofType;
    QComboBox *comboBoxChooseTeamName;
    QComboBox *comboBoxChooseLeague;
    QLabel *labelSortByLeague;
    QLabel *labelSortByRoofType;
    QLabel *labelGridLayout;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout_3;
    QLabel *labelSortByTeamName;
    QPushButton *pushButtonSortByTeamNames;
    QLabel *labelSortByStadiumName;
    QPushButton *pushButtonSortByStadiumNames;
    QLabel *labelSortByBallparkType;
    QPushButton *pushButtonSortByBallparkTypology;
    QLabel *labelSortByDateOpened;
    QPushButton *pushButtonSortByDateOpened;
    QLabel *labelSortBySeatingCapacity;
    QPushButton *pushButtonSortBySeatingCapacity;
    QLabel *labelSortByGreatestDistance;
    QPushButton *pushButtonSortByGreatestFromCenter;
    QLabel *labelSortByLeastDistance;
    QPushButton *pushButtonSortByLeastFromCenter;
    QLabel *labelResetStadiumsTable;
    QPushButton *pushButtonResetStadiumsTable;
    QLabel *labelAdditionalInfo;
    QPushButton *pushButtonUserLogout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(10, 10, 781, 531));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget->setFrameShape(QFrame::Box);
        LoginScreen = new QWidget();
        LoginScreen->setObjectName(QString::fromUtf8("LoginScreen"));
        LoginScreen->setStyleSheet(QString::fromUtf8(""));
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
        lineEditUsername->setStyleSheet(QString::fromUtf8(""));
        lineEditPassword = new QLineEdit(LoginScreen);
        lineEditPassword->setObjectName(QString::fromUtf8("lineEditPassword"));
        lineEditPassword->setGeometry(QRect(280, 250, 211, 31));
        lineEditPassword->setFont(font);
        lineEditPassword->setStyleSheet(QString::fromUtf8(""));
        lineEditPassword->setEchoMode(QLineEdit::Password);
        pushButtonLogin = new QPushButton(LoginScreen);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        pushButtonLogin->setGeometry(QRect(510, 250, 61, 31));
        pushButtonLogin->setFont(font);
        pushButtonResetLogin = new QPushButton(LoginScreen);
        pushButtonResetLogin->setObjectName(QString::fromUtf8("pushButtonResetLogin"));
        pushButtonResetLogin->setGeometry(QRect(510, 210, 61, 31));
        pushButtonResetLogin->setFont(font);
        pushButtonResetLogin->setStyleSheet(QString::fromUtf8(""));
        pushButtonResetLogin->setCheckable(false);
        pushButtonResetLogin->setAutoDefault(false);
        pushButtonResetLogin->setFlat(false);
        stackedWidget->addWidget(LoginScreen);
        UserScreen = new QWidget();
        UserScreen->setObjectName(QString::fromUtf8("UserScreen"));
        UserScreen->setStyleSheet(QString::fromUtf8(""));
        tableviewAllStadiums = new QTableView(UserScreen);
        tableviewAllStadiums->setObjectName(QString::fromUtf8("tableviewAllStadiums"));
        tableviewAllStadiums->setGeometry(QRect(30, 50, 461, 331));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier"));
        font1.setPointSize(8);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        tableviewAllStadiums->setFont(font1);
        tableviewAllStadiums->setStyleSheet(QString::fromUtf8("\n"
"font: 8pt \"Courier\";"));
        tableviewAllStadiums->setFrameShape(QFrame::Box);
        tableviewAllStadiums->setFrameShadow(QFrame::Plain);
        tableviewAllStadiums->setLineWidth(2);
        labelShowCurrentSort = new QLabel(UserScreen);
        labelShowCurrentSort->setObjectName(QString::fromUtf8("labelShowCurrentSort"));
        labelShowCurrentSort->setGeometry(QRect(110, 20, 621, 20));
        labelShowCurrentSort->setFont(font);
        labelShowCurrentSort->setFrameShape(QFrame::Box);
        labelShowCurrentSort->setFrameShadow(QFrame::Plain);
        labelShowCurrentSort->setLineWidth(1);
        gridLayoutWidget = new QWidget(UserScreen);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(520, 50, 211, 176));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelSortByTeam = new QLabel(gridLayoutWidget);
        labelSortByTeam->setObjectName(QString::fromUtf8("labelSortByTeam"));
        labelSortByTeam->setFont(font);

        gridLayout->addWidget(labelSortByTeam, 3, 0, 1, 1);

        comboBoxChooseRoofType = new QComboBox(gridLayoutWidget);
        comboBoxChooseRoofType->setObjectName(QString::fromUtf8("comboBoxChooseRoofType"));
        comboBoxChooseRoofType->setFont(font);
        comboBoxChooseRoofType->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(comboBoxChooseRoofType, 8, 0, 1, 1);

        comboBoxChooseTeamName = new QComboBox(gridLayoutWidget);
        comboBoxChooseTeamName->setObjectName(QString::fromUtf8("comboBoxChooseTeamName"));
        comboBoxChooseTeamName->setFont(font);
        comboBoxChooseTeamName->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(comboBoxChooseTeamName, 4, 0, 1, 1);

        comboBoxChooseLeague = new QComboBox(gridLayoutWidget);
        comboBoxChooseLeague->setObjectName(QString::fromUtf8("comboBoxChooseLeague"));
        comboBoxChooseLeague->setFont(font);
        comboBoxChooseLeague->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(comboBoxChooseLeague, 6, 0, 1, 1);

        labelSortByLeague = new QLabel(gridLayoutWidget);
        labelSortByLeague->setObjectName(QString::fromUtf8("labelSortByLeague"));
        labelSortByLeague->setFont(font);

        gridLayout->addWidget(labelSortByLeague, 5, 0, 1, 1);

        labelSortByRoofType = new QLabel(gridLayoutWidget);
        labelSortByRoofType->setObjectName(QString::fromUtf8("labelSortByRoofType"));
        labelSortByRoofType->setFont(font);

        gridLayout->addWidget(labelSortByRoofType, 7, 0, 1, 1);

        labelGridLayout = new QLabel(gridLayoutWidget);
        labelGridLayout->setObjectName(QString::fromUtf8("labelGridLayout"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Courier"));
        font2.setPointSize(10);
        font2.setBold(true);
        font2.setUnderline(true);
        font2.setWeight(75);
        labelGridLayout->setFont(font2);

        gridLayout->addWidget(labelGridLayout, 2, 0, 1, 1);

        formLayoutWidget = new QWidget(UserScreen);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(520, 240, 206, 275));
        formLayout_3 = new QFormLayout(formLayoutWidget);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 45, 0);
        labelSortByTeamName = new QLabel(formLayoutWidget);
        labelSortByTeamName->setObjectName(QString::fromUtf8("labelSortByTeamName"));
        labelSortByTeamName->setFont(font);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, labelSortByTeamName);

        pushButtonSortByTeamNames = new QPushButton(formLayoutWidget);
        pushButtonSortByTeamNames->setObjectName(QString::fromUtf8("pushButtonSortByTeamNames"));
        pushButtonSortByTeamNames->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));
        pushButtonSortByTeamNames->setFlat(false);

        formLayout_3->setWidget(0, QFormLayout::FieldRole, pushButtonSortByTeamNames);

        labelSortByStadiumName = new QLabel(formLayoutWidget);
        labelSortByStadiumName->setObjectName(QString::fromUtf8("labelSortByStadiumName"));
        labelSortByStadiumName->setFont(font);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, labelSortByStadiumName);

        pushButtonSortByStadiumNames = new QPushButton(formLayoutWidget);
        pushButtonSortByStadiumNames->setObjectName(QString::fromUtf8("pushButtonSortByStadiumNames"));
        pushButtonSortByStadiumNames->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, pushButtonSortByStadiumNames);

        labelSortByBallparkType = new QLabel(formLayoutWidget);
        labelSortByBallparkType->setObjectName(QString::fromUtf8("labelSortByBallparkType"));
        labelSortByBallparkType->setFont(font);

        formLayout_3->setWidget(2, QFormLayout::LabelRole, labelSortByBallparkType);

        pushButtonSortByBallparkTypology = new QPushButton(formLayoutWidget);
        pushButtonSortByBallparkTypology->setObjectName(QString::fromUtf8("pushButtonSortByBallparkTypology"));
        pushButtonSortByBallparkTypology->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, pushButtonSortByBallparkTypology);

        labelSortByDateOpened = new QLabel(formLayoutWidget);
        labelSortByDateOpened->setObjectName(QString::fromUtf8("labelSortByDateOpened"));
        labelSortByDateOpened->setFont(font);

        formLayout_3->setWidget(3, QFormLayout::LabelRole, labelSortByDateOpened);

        pushButtonSortByDateOpened = new QPushButton(formLayoutWidget);
        pushButtonSortByDateOpened->setObjectName(QString::fromUtf8("pushButtonSortByDateOpened"));
        pushButtonSortByDateOpened->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, pushButtonSortByDateOpened);

        labelSortBySeatingCapacity = new QLabel(formLayoutWidget);
        labelSortBySeatingCapacity->setObjectName(QString::fromUtf8("labelSortBySeatingCapacity"));
        labelSortBySeatingCapacity->setFont(font);

        formLayout_3->setWidget(4, QFormLayout::LabelRole, labelSortBySeatingCapacity);

        pushButtonSortBySeatingCapacity = new QPushButton(formLayoutWidget);
        pushButtonSortBySeatingCapacity->setObjectName(QString::fromUtf8("pushButtonSortBySeatingCapacity"));
        pushButtonSortBySeatingCapacity->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, pushButtonSortBySeatingCapacity);

        labelSortByGreatestDistance = new QLabel(formLayoutWidget);
        labelSortByGreatestDistance->setObjectName(QString::fromUtf8("labelSortByGreatestDistance"));
        labelSortByGreatestDistance->setFont(font);

        formLayout_3->setWidget(5, QFormLayout::LabelRole, labelSortByGreatestDistance);

        pushButtonSortByGreatestFromCenter = new QPushButton(formLayoutWidget);
        pushButtonSortByGreatestFromCenter->setObjectName(QString::fromUtf8("pushButtonSortByGreatestFromCenter"));
        pushButtonSortByGreatestFromCenter->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));

        formLayout_3->setWidget(5, QFormLayout::FieldRole, pushButtonSortByGreatestFromCenter);

        labelSortByLeastDistance = new QLabel(formLayoutWidget);
        labelSortByLeastDistance->setObjectName(QString::fromUtf8("labelSortByLeastDistance"));
        labelSortByLeastDistance->setFont(font);

        formLayout_3->setWidget(6, QFormLayout::LabelRole, labelSortByLeastDistance);

        pushButtonSortByLeastFromCenter = new QPushButton(formLayoutWidget);
        pushButtonSortByLeastFromCenter->setObjectName(QString::fromUtf8("pushButtonSortByLeastFromCenter"));
        pushButtonSortByLeastFromCenter->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));

        formLayout_3->setWidget(6, QFormLayout::FieldRole, pushButtonSortByLeastFromCenter);

        labelResetStadiumsTable = new QLabel(formLayoutWidget);
        labelResetStadiumsTable->setObjectName(QString::fromUtf8("labelResetStadiumsTable"));
        labelResetStadiumsTable->setFont(font);

        formLayout_3->setWidget(7, QFormLayout::LabelRole, labelResetStadiumsTable);

        pushButtonResetStadiumsTable = new QPushButton(formLayoutWidget);
        pushButtonResetStadiumsTable->setObjectName(QString::fromUtf8("pushButtonResetStadiumsTable"));
        pushButtonResetStadiumsTable->setStyleSheet(QString::fromUtf8("background-color: rgb(225, 225, 225);"));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, pushButtonResetStadiumsTable);

        labelAdditionalInfo = new QLabel(UserScreen);
        labelAdditionalInfo->setObjectName(QString::fromUtf8("labelAdditionalInfo"));
        labelAdditionalInfo->setGeometry(QRect(80, 410, 371, 61));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Courier"));
        font3.setPointSize(10);
        labelAdditionalInfo->setFont(font3);
        labelAdditionalInfo->setFrameShape(QFrame::Box);
        pushButtonUserLogout = new QPushButton(UserScreen);
        pushButtonUserLogout->setObjectName(QString::fromUtf8("pushButtonUserLogout"));
        pushButtonUserLogout->setGeometry(QRect(30, 20, 61, 21));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Courier"));
        font4.setPointSize(6);
        pushButtonUserLogout->setFont(font4);
        stackedWidget->addWidget(UserScreen);
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
        pushButtonResetLogin->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        labelUsername->setText(QApplication::translate("MainWindow", "Username", nullptr));
        labelPassword->setText(QApplication::translate("MainWindow", "Password", nullptr));
        lineEditUsername->setText(QString());
        pushButtonLogin->setText(QApplication::translate("MainWindow", "Login", nullptr));
        pushButtonResetLogin->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        labelShowCurrentSort->setText(QApplication::translate("MainWindow", "Currently Sorted By: All", nullptr));
        labelSortByTeam->setText(QApplication::translate("MainWindow", "Sort by Team Name", nullptr));
        labelSortByLeague->setText(QApplication::translate("MainWindow", "Sort by League", nullptr));
        labelSortByRoofType->setText(QApplication::translate("MainWindow", "Sort by Roof Type", nullptr));
        labelGridLayout->setText(QApplication::translate("MainWindow", "Sorting Menu", nullptr));
        labelSortByTeamName->setText(QApplication::translate("MainWindow", "All Teams", nullptr));
        pushButtonSortByTeamNames->setText(QString());
        labelSortByStadiumName->setText(QApplication::translate("MainWindow", "All Stadiums", nullptr));
        pushButtonSortByStadiumNames->setText(QString());
        labelSortByBallparkType->setText(QApplication::translate("MainWindow", "Ballpark Type", nullptr));
        pushButtonSortByBallparkTypology->setText(QString());
        labelSortByDateOpened->setText(QApplication::translate("MainWindow", "Date Opened", nullptr));
        pushButtonSortByDateOpened->setText(QString());
        labelSortBySeatingCapacity->setText(QApplication::translate("MainWindow", "Seating Capa.", nullptr));
        pushButtonSortBySeatingCapacity->setText(QString());
        labelSortByGreatestDistance->setText(QApplication::translate("MainWindow", "Max Dist Cent.", nullptr));
        pushButtonSortByGreatestFromCenter->setText(QString());
        labelSortByLeastDistance->setText(QApplication::translate("MainWindow", "Min Dist Cent.", nullptr));
        pushButtonSortByLeastFromCenter->setText(QString());
        labelResetStadiumsTable->setText(QApplication::translate("MainWindow", "RESET", nullptr));
        pushButtonResetStadiumsTable->setText(QString());
        labelAdditionalInfo->setText(QString());
        pushButtonUserLogout->setText(QApplication::translate("MainWindow", "Logout", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
