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
    QPushButton *pushButtonShortest;
    QPushButton *pushButtonCustom;
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
    QWidget *ShortestTripScreen;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButtonDodgerStadium;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonMarlinsPark;
    QLabel *label_4;
    QLabel *labelTotalDistance_2;
    QPushButton *pushButtonShowTeamNamesAndStadiums;
    QWidget *TeamNamesAndStadiumsInfoScreen;
    QTableView *tableViewTeamNamesAndStadiums;
    QPushButton *pushButtonReturnToShortestTripScreen;
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
    QPushButton *pushButtonEditData;
    QComboBox *comboBoxChooseFieldToEdit;
    QLabel *labelChooseFieldToEdit;
    QLabel *labelCurrentData;
    QLabel *labelShowCurrentData;
    QLineEdit *lineEditInputStringData;
    QSpinBox *spinBoxInputIntData;
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
        pushButtonDFSBFS->setGeometry(QRect(70, 490, 93, 28));
        pushButtonShortest = new QPushButton(UserScreen);
        pushButtonShortest->setObjectName(QString::fromUtf8("pushButtonShortest"));
        pushButtonShortest->setGeometry(QRect(190, 490, 93, 28));
        pushButtonCustom = new QPushButton(UserScreen);
        pushButtonCustom->setObjectName(QString::fromUtf8("pushButtonCustom"));
        pushButtonCustom->setGeometry(QRect(320, 490, 93, 28));
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
        ShortestTripScreen = new QWidget();
        ShortestTripScreen->setObjectName(QString::fromUtf8("ShortestTripScreen"));
        textBrowser_2 = new QTextBrowser(ShortestTripScreen);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(20, 20, 381, 491));
        pushButtonDodgerStadium = new QPushButton(ShortestTripScreen);
        pushButtonDodgerStadium->setObjectName(QString::fromUtf8("pushButtonDodgerStadium"));
        pushButtonDodgerStadium->setGeometry(QRect(520, 80, 191, 28));
        comboBox_2 = new QComboBox(ShortestTripScreen);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(520, 140, 191, 22));
        label_2 = new QLabel(ShortestTripScreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(430, 90, 55, 16));
        label_3 = new QLabel(ShortestTripScreen);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(430, 140, 71, 20));
        pushButtonMarlinsPark = new QPushButton(ShortestTripScreen);
        pushButtonMarlinsPark->setObjectName(QString::fromUtf8("pushButtonMarlinsPark"));
        pushButtonMarlinsPark->setGeometry(QRect(520, 260, 171, 28));
        label_4 = new QLabel(ShortestTripScreen);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(440, 450, 91, 16));
        labelTotalDistance_2 = new QLabel(ShortestTripScreen);
        labelTotalDistance_2->setObjectName(QString::fromUtf8("labelTotalDistance_2"));
        labelTotalDistance_2->setGeometry(QRect(540, 440, 161, 31));
        labelTotalDistance_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButtonShowTeamNamesAndStadiums = new QPushButton(ShortestTripScreen);
        pushButtonShowTeamNamesAndStadiums->setObjectName(QString::fromUtf8("pushButtonShowTeamNamesAndStadiums"));
        pushButtonShowTeamNamesAndStadiums->setGeometry(QRect(520, 30, 181, 28));
        stackedWidget->addWidget(ShortestTripScreen);
        TeamNamesAndStadiumsInfoScreen = new QWidget();
        TeamNamesAndStadiumsInfoScreen->setObjectName(QString::fromUtf8("TeamNamesAndStadiumsInfoScreen"));
        tableViewTeamNamesAndStadiums = new QTableView(TeamNamesAndStadiumsInfoScreen);
        tableViewTeamNamesAndStadiums->setObjectName(QString::fromUtf8("tableViewTeamNamesAndStadiums"));
        tableViewTeamNamesAndStadiums->setGeometry(QRect(30, 30, 511, 471));
        pushButtonReturnToShortestTripScreen = new QPushButton(TeamNamesAndStadiumsInfoScreen);
        pushButtonReturnToShortestTripScreen->setObjectName(QString::fromUtf8("pushButtonReturnToShortestTripScreen"));
        pushButtonReturnToShortestTripScreen->setGeometry(QRect(610, 40, 93, 28));
        stackedWidget->addWidget(TeamNamesAndStadiumsInfoScreen);
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
        pushButtonEditData = new QPushButton(AdminStadiumScreen);
        pushButtonEditData->setObjectName(QString::fromUtf8("pushButtonEditData"));
        pushButtonEditData->setGeometry(QRect(490, 440, 93, 28));
        comboBoxChooseFieldToEdit = new QComboBox(AdminStadiumScreen);
        comboBoxChooseFieldToEdit->addItem(QString());
        comboBoxChooseFieldToEdit->addItem(QString());
        comboBoxChooseFieldToEdit->addItem(QString());
        comboBoxChooseFieldToEdit->addItem(QString());
        comboBoxChooseFieldToEdit->addItem(QString());
        comboBoxChooseFieldToEdit->addItem(QString());
        comboBoxChooseFieldToEdit->addItem(QString());
        comboBoxChooseFieldToEdit->addItem(QString());
        comboBoxChooseFieldToEdit->addItem(QString());
        comboBoxChooseFieldToEdit->setObjectName(QString::fromUtf8("comboBoxChooseFieldToEdit"));
        comboBoxChooseFieldToEdit->setGeometry(QRect(40, 220, 131, 22));
        labelChooseFieldToEdit = new QLabel(AdminStadiumScreen);
        labelChooseFieldToEdit->setObjectName(QString::fromUtf8("labelChooseFieldToEdit"));
        labelChooseFieldToEdit->setGeometry(QRect(40, 200, 121, 16));
        labelCurrentData = new QLabel(AdminStadiumScreen);
        labelCurrentData->setObjectName(QString::fromUtf8("labelCurrentData"));
        labelCurrentData->setGeometry(QRect(290, 220, 71, 16));
        labelShowCurrentData = new QLabel(AdminStadiumScreen);
        labelShowCurrentData->setObjectName(QString::fromUtf8("labelShowCurrentData"));
        labelShowCurrentData->setGeometry(QRect(370, 220, 241, 21));
        labelShowCurrentData->setFrameShape(QFrame::Box);
        lineEditInputStringData = new QLineEdit(AdminStadiumScreen);
        lineEditInputStringData->setObjectName(QString::fromUtf8("lineEditInputStringData"));
        lineEditInputStringData->setGeometry(QRect(370, 250, 241, 20));
        spinBoxInputIntData = new QSpinBox(AdminStadiumScreen);
        spinBoxInputIntData->setObjectName(QString::fromUtf8("spinBoxInputIntData"));
        spinBoxInputIntData->setGeometry(QRect(370, 250, 42, 22));
        stackedWidget->addWidget(AdminStadiumScreen);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 803, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(3);
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
        pushButtonShortest->setText(QApplication::translate("MainWindow", "Shortest Trip", nullptr));
        pushButtonCustom->setText(QApplication::translate("MainWindow", "Custom Trip", nullptr));
        label->setText(QApplication::translate("MainWindow", "Total Distance", nullptr));
        labelTotalDistance->setText(QString());
        pushButtonDFS->setText(QApplication::translate("MainWindow", "DFS", nullptr));
        pushButtonBFS->setText(QApplication::translate("MainWindow", "BFS", nullptr));
        pushButtonMST_2->setText(QApplication::translate("MainWindow", "MST", nullptr));
        pushButtonDodgerStadium->setText(QApplication::translate("MainWindow", "Dodger Stadium", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Start:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Destination:", nullptr));
        pushButtonMarlinsPark->setText(QApplication::translate("MainWindow", "Marlins Park", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Total Distance:", nullptr));
        labelTotalDistance_2->setText(QString());
        pushButtonShowTeamNamesAndStadiums->setText(QApplication::translate("MainWindow", "Team Names / Stadiums List", nullptr));
        pushButtonReturnToShortestTripScreen->setText(QApplication::translate("MainWindow", "Return", nullptr));
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
        pushButtonEditData->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        comboBoxChooseFieldToEdit->setItemText(0, QApplication::translate("MainWindow", "StadiumName", nullptr));
        comboBoxChooseFieldToEdit->setItemText(1, QApplication::translate("MainWindow", "SeatingCapacity", nullptr));
        comboBoxChooseFieldToEdit->setItemText(2, QApplication::translate("MainWindow", "Location", nullptr));
        comboBoxChooseFieldToEdit->setItemText(3, QApplication::translate("MainWindow", "PlayingSurface", nullptr));
        comboBoxChooseFieldToEdit->setItemText(4, QApplication::translate("MainWindow", "League", nullptr));
        comboBoxChooseFieldToEdit->setItemText(5, QApplication::translate("MainWindow", "DateOpened", nullptr));
        comboBoxChooseFieldToEdit->setItemText(6, QApplication::translate("MainWindow", "DistanceToCenter", nullptr));
        comboBoxChooseFieldToEdit->setItemText(7, QApplication::translate("MainWindow", "BallParkTypology", nullptr));
        comboBoxChooseFieldToEdit->setItemText(8, QApplication::translate("MainWindow", "RoofType", nullptr));

        labelChooseFieldToEdit->setText(QApplication::translate("MainWindow", "Choose field to edit", nullptr));
        labelCurrentData->setText(QApplication::translate("MainWindow", "Current Data:", nullptr));
        labelShowCurrentData->setText(QApplication::translate("MainWindow", "No Data Selected!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
