/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
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
    QPushButton *pushButtonDFSBFS;
    QWidget *TripScreen;
    QLabel *label;
    QLabel *labelTotalDistance;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonDFS;
    QPushButton *pushButtonBFS;
    QPushButton *pushButtonMST_2;
    QWidget *AdminMaintenanceScreen;
    QLabel *labelMaintenanceScreenTitle;
    QPushButton *pushButtonChangeToSouvenirs;
    QPushButton *pushButtonChangeToStadiums;
    QWidget *AdminSouvenirsScreen;
    QTableView *tableviewAllSouvenirs;
    QPushButton *pushButtonResetAllSouvenirs;
    QComboBox *comboBoxChooseStadium;
    QPushButton *pushButtonEditPrice;
    QDoubleSpinBox *doubleSpinBoxEditPrice;
    QLabel *labelShowStadium;
    QLabel *labelShowItem;
    QPushButton *pushButtonDeleteSouvenir;
    QLabel *labelPromptNewItem;
    QLineEdit *lineEditNewItem;
    QPushButton *pushButtonAddNewSouvenir;
    QDoubleSpinBox *doubleSpinBoxNewSouvenirPrice;
    QPushButton *pushButtonReturnToMaintenanceScreen;
    QWidget *AdminStadiumScreen;
    QPushButton *pushButtonReturnToMaintenanceScreen_2;
    QTableView *tableViewAllStadiumsADMIN;
    QPushButton *pushButtonResetAllStadiumsTableADMIN;
    QComboBox *comboBoxChooseTeamNameADMIN;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout;
    QLabel *labelSeatingCapacity;
    QLabel *labelLocation;
    QLabel *labelStadiumName;
    QLabel *labelPlayingSurface;
    QLabel *labelLeague;
    QLineEdit *lineEditStadiumName;
    QSpinBox *spinBoxSeatingCapacity;
    QLineEdit *lineEditLocation;
    QLineEdit *lineEditPlayingSurface;
    QLineEdit *lineEditLeague;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_2;
    QLabel *labelDateOpened;
    QSpinBox *spinBoxDateOpened;
    QLabel *labelDistanceToCenterField;
    QSpinBox *spinBoxDistanceToCenterField;
    QLabel *labelBallParkTypology;
    QLineEdit *lineEditBallParkTypology;
    QLabel *labelRoofType;
    QLineEdit *lineEditRoofType;
    QPushButton *pushButtonEditData;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(803, 602);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setEnabled(true);
        stackedWidget->setGeometry(QRect(20, 10, 761, 531));
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
        pushButtonDFSBFS = new QPushButton(UserScreen);
        pushButtonDFSBFS->setObjectName(QString::fromUtf8("pushButtonDFSBFS"));
        pushButtonDFSBFS->setGeometry(QRect(270, 490, 93, 28));
        stackedWidget->addWidget(UserScreen);
        TripScreen = new QWidget();
        TripScreen->setObjectName(QString::fromUtf8("TripScreen"));
        label = new QLabel(TripScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(480, 440, 91, 16));
        labelTotalDistance = new QLabel(TripScreen);
        labelTotalDistance->setObjectName(QString::fromUtf8("labelTotalDistance"));
        labelTotalDistance->setGeometry(QRect(580, 430, 121, 31));
        labelTotalDistance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(TripScreen);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 421, 491));
        comboBox = new QComboBox(TripScreen);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(460, 20, 291, 22));
        verticalLayoutWidget = new QWidget(TripScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(470, 130, 160, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonDFS = new QPushButton(verticalLayoutWidget);
        pushButtonDFS->setObjectName(QString::fromUtf8("pushButtonDFS"));

        verticalLayout->addWidget(pushButtonDFS);

        pushButtonBFS = new QPushButton(verticalLayoutWidget);
        pushButtonBFS->setObjectName(QString::fromUtf8("pushButtonBFS"));

        verticalLayout->addWidget(pushButtonBFS);

        pushButtonMST_2 = new QPushButton(verticalLayoutWidget);
        pushButtonMST_2->setObjectName(QString::fromUtf8("pushButtonMST_2"));

        verticalLayout->addWidget(pushButtonMST_2);

        stackedWidget->addWidget(TripScreen);
        AdminMaintenanceScreen = new QWidget();
        AdminMaintenanceScreen->setObjectName(QString::fromUtf8("AdminMaintenanceScreen"));
        labelMaintenanceScreenTitle = new QLabel(AdminMaintenanceScreen);
        labelMaintenanceScreenTitle->setObjectName(QString::fromUtf8("labelMaintenanceScreenTitle"));
        labelMaintenanceScreenTitle->setGeometry(QRect(310, 80, 128, 13));
        pushButtonChangeToSouvenirs = new QPushButton(AdminMaintenanceScreen);
        pushButtonChangeToSouvenirs->setObjectName(QString::fromUtf8("pushButtonChangeToSouvenirs"));
        pushButtonChangeToSouvenirs->setGeometry(QRect(180, 150, 75, 23));
        pushButtonChangeToStadiums = new QPushButton(AdminMaintenanceScreen);
        pushButtonChangeToStadiums->setObjectName(QString::fromUtf8("pushButtonChangeToStadiums"));
        pushButtonChangeToStadiums->setGeometry(QRect(490, 150, 75, 23));
        stackedWidget->addWidget(AdminMaintenanceScreen);
        AdminSouvenirsScreen = new QWidget();
        AdminSouvenirsScreen->setObjectName(QString::fromUtf8("AdminSouvenirsScreen"));
        tableviewAllSouvenirs = new QTableView(AdminSouvenirsScreen);
        tableviewAllSouvenirs->setObjectName(QString::fromUtf8("tableviewAllSouvenirs"));
        tableviewAllSouvenirs->setGeometry(QRect(20, 50, 461, 301));
        pushButtonResetAllSouvenirs = new QPushButton(AdminSouvenirsScreen);
        pushButtonResetAllSouvenirs->setObjectName(QString::fromUtf8("pushButtonResetAllSouvenirs"));
        pushButtonResetAllSouvenirs->setGeometry(QRect(20, 370, 93, 28));
        comboBoxChooseStadium = new QComboBox(AdminSouvenirsScreen);
        comboBoxChooseStadium->setObjectName(QString::fromUtf8("comboBoxChooseStadium"));
        comboBoxChooseStadium->setGeometry(QRect(20, 20, 361, 22));
        pushButtonEditPrice = new QPushButton(AdminSouvenirsScreen);
        pushButtonEditPrice->setObjectName(QString::fromUtf8("pushButtonEditPrice"));
        pushButtonEditPrice->setGeometry(QRect(500, 180, 93, 28));
        doubleSpinBoxEditPrice = new QDoubleSpinBox(AdminSouvenirsScreen);
        doubleSpinBoxEditPrice->setObjectName(QString::fromUtf8("doubleSpinBoxEditPrice"));
        doubleSpinBoxEditPrice->setGeometry(QRect(500, 150, 151, 22));
        doubleSpinBoxEditPrice->setMaximum(99999.000000000000000);
        labelShowStadium = new QLabel(AdminSouvenirsScreen);
        labelShowStadium->setObjectName(QString::fromUtf8("labelShowStadium"));
        labelShowStadium->setGeometry(QRect(500, 90, 161, 21));
        labelShowStadium->setFrameShape(QFrame::Box);
        labelShowItem = new QLabel(AdminSouvenirsScreen);
        labelShowItem->setObjectName(QString::fromUtf8("labelShowItem"));
        labelShowItem->setGeometry(QRect(500, 120, 161, 21));
        labelShowItem->setFrameShape(QFrame::Box);
        labelShowItem->setLineWidth(1);
        pushButtonDeleteSouvenir = new QPushButton(AdminSouvenirsScreen);
        pushButtonDeleteSouvenir->setObjectName(QString::fromUtf8("pushButtonDeleteSouvenir"));
        pushButtonDeleteSouvenir->setGeometry(QRect(610, 180, 51, 28));
        labelPromptNewItem = new QLabel(AdminSouvenirsScreen);
        labelPromptNewItem->setObjectName(QString::fromUtf8("labelPromptNewItem"));
        labelPromptNewItem->setGeometry(QRect(500, 260, 111, 21));
        labelPromptNewItem->setFrameShape(QFrame::Box);
        labelPromptNewItem->setLineWidth(1);
        lineEditNewItem = new QLineEdit(AdminSouvenirsScreen);
        lineEditNewItem->setObjectName(QString::fromUtf8("lineEditNewItem"));
        lineEditNewItem->setGeometry(QRect(500, 300, 201, 20));
        pushButtonAddNewSouvenir = new QPushButton(AdminSouvenirsScreen);
        pushButtonAddNewSouvenir->setObjectName(QString::fromUtf8("pushButtonAddNewSouvenir"));
        pushButtonAddNewSouvenir->setGeometry(QRect(500, 370, 51, 28));
        doubleSpinBoxNewSouvenirPrice = new QDoubleSpinBox(AdminSouvenirsScreen);
        doubleSpinBoxNewSouvenirPrice->setObjectName(QString::fromUtf8("doubleSpinBoxNewSouvenirPrice"));
        doubleSpinBoxNewSouvenirPrice->setGeometry(QRect(500, 330, 151, 22));
        doubleSpinBoxNewSouvenirPrice->setMaximum(99999.000000000000000);
        pushButtonReturnToMaintenanceScreen = new QPushButton(AdminSouvenirsScreen);
        pushButtonReturnToMaintenanceScreen->setObjectName(QString::fromUtf8("pushButtonReturnToMaintenanceScreen"));
        pushButtonReturnToMaintenanceScreen->setGeometry(QRect(660, 20, 75, 23));
        stackedWidget->addWidget(AdminSouvenirsScreen);
        AdminStadiumScreen = new QWidget();
        AdminStadiumScreen->setObjectName(QString::fromUtf8("AdminStadiumScreen"));
        pushButtonReturnToMaintenanceScreen_2 = new QPushButton(AdminStadiumScreen);
        pushButtonReturnToMaintenanceScreen_2->setObjectName(QString::fromUtf8("pushButtonReturnToMaintenanceScreen_2"));
        pushButtonReturnToMaintenanceScreen_2->setGeometry(QRect(660, 20, 75, 23));
        tableViewAllStadiumsADMIN = new QTableView(AdminStadiumScreen);
        tableViewAllStadiumsADMIN->setObjectName(QString::fromUtf8("tableViewAllStadiumsADMIN"));
        tableViewAllStadiumsADMIN->setGeometry(QRect(30, 60, 701, 101));
        pushButtonResetAllStadiumsTableADMIN = new QPushButton(AdminStadiumScreen);
        pushButtonResetAllStadiumsTableADMIN->setObjectName(QString::fromUtf8("pushButtonResetAllStadiumsTableADMIN"));
        pushButtonResetAllStadiumsTableADMIN->setGeometry(QRect(650, 170, 75, 23));
        comboBoxChooseTeamNameADMIN = new QComboBox(AdminStadiumScreen);
        comboBoxChooseTeamNameADMIN->setObjectName(QString::fromUtf8("comboBoxChooseTeamNameADMIN"));
        comboBoxChooseTeamNameADMIN->setGeometry(QRect(30, 20, 271, 22));
        formLayoutWidget_2 = new QWidget(AdminStadiumScreen);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(20, 290, 381, 131));
        formLayout = new QFormLayout(formLayoutWidget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelSeatingCapacity = new QLabel(formLayoutWidget_2);
        labelSeatingCapacity->setObjectName(QString::fromUtf8("labelSeatingCapacity"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelSeatingCapacity);

        labelLocation = new QLabel(formLayoutWidget_2);
        labelLocation->setObjectName(QString::fromUtf8("labelLocation"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelLocation);

        labelStadiumName = new QLabel(formLayoutWidget_2);
        labelStadiumName->setObjectName(QString::fromUtf8("labelStadiumName"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelStadiumName);

        labelPlayingSurface = new QLabel(formLayoutWidget_2);
        labelPlayingSurface->setObjectName(QString::fromUtf8("labelPlayingSurface"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelPlayingSurface);

        labelLeague = new QLabel(formLayoutWidget_2);
        labelLeague->setObjectName(QString::fromUtf8("labelLeague"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelLeague);

        lineEditStadiumName = new QLineEdit(formLayoutWidget_2);
        lineEditStadiumName->setObjectName(QString::fromUtf8("lineEditStadiumName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditStadiumName);

        spinBoxSeatingCapacity = new QSpinBox(formLayoutWidget_2);
        spinBoxSeatingCapacity->setObjectName(QString::fromUtf8("spinBoxSeatingCapacity"));
        spinBoxSeatingCapacity->setMaximum(999999999);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxSeatingCapacity);

        lineEditLocation = new QLineEdit(formLayoutWidget_2);
        lineEditLocation->setObjectName(QString::fromUtf8("lineEditLocation"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditLocation);

        lineEditPlayingSurface = new QLineEdit(formLayoutWidget_2);
        lineEditPlayingSurface->setObjectName(QString::fromUtf8("lineEditPlayingSurface"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditPlayingSurface);

        lineEditLeague = new QLineEdit(formLayoutWidget_2);
        lineEditLeague->setObjectName(QString::fromUtf8("lineEditLeague"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditLeague);

        formLayoutWidget_3 = new QWidget(AdminStadiumScreen);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(410, 290, 331, 131));
        formLayout_2 = new QFormLayout(formLayoutWidget_3);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        labelDateOpened = new QLabel(formLayoutWidget_3);
        labelDateOpened->setObjectName(QString::fromUtf8("labelDateOpened"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelDateOpened);

        spinBoxDateOpened = new QSpinBox(formLayoutWidget_3);
        spinBoxDateOpened->setObjectName(QString::fromUtf8("spinBoxDateOpened"));
        spinBoxDateOpened->setMaximum(999999999);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBoxDateOpened);

        labelDistanceToCenterField = new QLabel(formLayoutWidget_3);
        labelDistanceToCenterField->setObjectName(QString::fromUtf8("labelDistanceToCenterField"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelDistanceToCenterField);

        spinBoxDistanceToCenterField = new QSpinBox(formLayoutWidget_3);
        spinBoxDistanceToCenterField->setObjectName(QString::fromUtf8("spinBoxDistanceToCenterField"));
        spinBoxDistanceToCenterField->setMaximum(999999999);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBoxDistanceToCenterField);

        labelBallParkTypology = new QLabel(formLayoutWidget_3);
        labelBallParkTypology->setObjectName(QString::fromUtf8("labelBallParkTypology"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelBallParkTypology);

        lineEditBallParkTypology = new QLineEdit(formLayoutWidget_3);
        lineEditBallParkTypology->setObjectName(QString::fromUtf8("lineEditBallParkTypology"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditBallParkTypology);

        labelRoofType = new QLabel(formLayoutWidget_3);
        labelRoofType->setObjectName(QString::fromUtf8("labelRoofType"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelRoofType);

        lineEditRoofType = new QLineEdit(formLayoutWidget_3);
        lineEditRoofType->setObjectName(QString::fromUtf8("lineEditRoofType"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEditRoofType);

        pushButtonEditData = new QPushButton(formLayoutWidget_3);
        pushButtonEditData->setObjectName(QString::fromUtf8("pushButtonEditData"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, pushButtonEditData);

        stackedWidget->addWidget(AdminStadiumScreen);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 803, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);
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
        pushButtonDFSBFS->setText(QApplication::translate("MainWindow", "dfs/bfs/mst", nullptr));
        label->setText(QApplication::translate("MainWindow", "Total Distance", nullptr));
        labelTotalDistance->setText(QString());
        pushButtonDFS->setText(QApplication::translate("MainWindow", "DFS", nullptr));
        pushButtonBFS->setText(QApplication::translate("MainWindow", "BFS", nullptr));
        pushButtonMST_2->setText(QApplication::translate("MainWindow", "MST", nullptr));
        labelMaintenanceScreenTitle->setText(QApplication::translate("MainWindow", "Administrator Maintenance", nullptr));
        pushButtonChangeToSouvenirs->setText(QApplication::translate("MainWindow", "Souvenirs", nullptr));
        pushButtonChangeToStadiums->setText(QApplication::translate("MainWindow", "Stadiums", nullptr));
        pushButtonResetAllSouvenirs->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        pushButtonEditPrice->setText(QApplication::translate("MainWindow", "Edit Price", nullptr));
        labelShowStadium->setText(QString());
        labelShowItem->setText(QApplication::translate("MainWindow", "No Souvenir Selected!", nullptr));
        pushButtonDeleteSouvenir->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        labelPromptNewItem->setText(QApplication::translate("MainWindow", "New Souvenir To Add", nullptr));
        pushButtonAddNewSouvenir->setText(QApplication::translate("MainWindow", "Add", nullptr));
        pushButtonReturnToMaintenanceScreen->setText(QApplication::translate("MainWindow", "Return", nullptr));
        pushButtonReturnToMaintenanceScreen_2->setText(QApplication::translate("MainWindow", "Return", nullptr));
        pushButtonResetAllStadiumsTableADMIN->setText(QApplication::translate("MainWindow", "Reset", nullptr));
        labelSeatingCapacity->setText(QApplication::translate("MainWindow", "Seating Capacity:", nullptr));
        labelLocation->setText(QApplication::translate("MainWindow", "Location:", nullptr));
        labelStadiumName->setText(QApplication::translate("MainWindow", "Stadium Name:", nullptr));
        labelPlayingSurface->setText(QApplication::translate("MainWindow", "Playing Surface:", nullptr));
        labelLeague->setText(QApplication::translate("MainWindow", "League:", nullptr));
        labelDateOpened->setText(QApplication::translate("MainWindow", "Date Opened:", nullptr));
        labelDistanceToCenterField->setText(QApplication::translate("MainWindow", "Distance To Center Field:", nullptr));
        labelBallParkTypology->setText(QApplication::translate("MainWindow", "Ballpark Typology:", nullptr));
        labelRoofType->setText(QApplication::translate("MainWindow", "Roof Type:", nullptr));
        pushButtonEditData->setText(QApplication::translate("MainWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
