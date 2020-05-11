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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
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
    QWidget *UserSelectionScreen;
    QPushButton *pushButtonLogoutFromUserSelection;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonToUserScreen;
    QPushButton *pushButtonToDFSBFSMSTScreen;
    QPushButton *pushButtonToShortestTripScreen;
    QPushButton *pushButtonToCustomTripScreen;
    QLabel *label_2;
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
    QWidget *DFSBFSMSTScreen;
    QLabel *label;
    QLabel *labelTotalDistance;
    QTextBrowser *textBrowser;
    QComboBox *comboBox;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButtonDFS;
    QPushButton *pushButtonBFS;
    QPushButton *pushButtonMST_2;
    QPushButton *pushButtonReturnFromDFSBFSMST;
    QWidget *ShortestTripScreen;
    QPushButton *pushButtonReturnFromShortestTripScreen;
    QWidget *CustomTripScreen;
    QPushButton *pushButtonReturnFromCustomTripScreen;
    QTableView *tableViewCustomTrip;
    QTextBrowser *textBrowserDisplaySelectedTrip;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonCreateCustomDirectTrip;
    QPushButton *pushButtonResetDisplaySelectedTrip;
    QWidget *DirectTripScreen;
    QTextBrowser *textBrowserDisplayDirectTrip;
    QLabel *labelShowTotalDistanceFromDirectTrip;
    QWidget *AdminMaintenanceScreen;
    QLabel *labelMaintenanceScreenTitle;
    QPushButton *pushButtonLogoutFromAdminMaintenance;
    QWidget *formLayoutWidget_5;
    QFormLayout *formLayout_5;
    QPushButton *pushButtonChangeToSouvenirs;
    QPushButton *pushButtonChangeToStadiums;
    QWidget *AdminSouvenirsScreen;
    QTableView *tableviewAllSouvenirs;
    QPushButton *pushButtonResetAllSouvenirs;
    QComboBox *comboBoxChooseStadium;
    QPushButton *pushButtonReturnToMaintenanceScreen;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *labelShowStadium;
    QLabel *labelShowItem;
    QDoubleSpinBox *doubleSpinBoxEditPrice;
    QWidget *formLayoutWidget_6;
    QFormLayout *formLayout_6;
    QPushButton *pushButtonEditPrice;
    QPushButton *pushButtonDeleteSouvenir;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *labelPromptNewItem;
    QLineEdit *lineEditNewItem;
    QDoubleSpinBox *doubleSpinBoxNewSouvenirPrice;
    QPushButton *pushButtonAddNewSouvenir;
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
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QPushButton *pushButtonUploadNewStadium;
    QPushButton *pushButtonUploadNewStadiumDistances;
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
        stackedWidget->setGeometry(QRect(20, 20, 761, 531));
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
        UserSelectionScreen = new QWidget();
        UserSelectionScreen->setObjectName(QString::fromUtf8("UserSelectionScreen"));
        pushButtonLogoutFromUserSelection = new QPushButton(UserSelectionScreen);
        pushButtonLogoutFromUserSelection->setObjectName(QString::fromUtf8("pushButtonLogoutFromUserSelection"));
        pushButtonLogoutFromUserSelection->setGeometry(QRect(670, 20, 71, 31));
        pushButtonLogoutFromUserSelection->setFont(font);
        horizontalLayoutWidget = new QWidget(UserSelectionScreen);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(170, 180, 443, 30));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonToUserScreen = new QPushButton(horizontalLayoutWidget);
        pushButtonToUserScreen->setObjectName(QString::fromUtf8("pushButtonToUserScreen"));
        pushButtonToUserScreen->setFont(font);

        horizontalLayout->addWidget(pushButtonToUserScreen);

        pushButtonToDFSBFSMSTScreen = new QPushButton(horizontalLayoutWidget);
        pushButtonToDFSBFSMSTScreen->setObjectName(QString::fromUtf8("pushButtonToDFSBFSMSTScreen"));
        pushButtonToDFSBFSMSTScreen->setFont(font);

        horizontalLayout->addWidget(pushButtonToDFSBFSMSTScreen);

        pushButtonToShortestTripScreen = new QPushButton(horizontalLayoutWidget);
        pushButtonToShortestTripScreen->setObjectName(QString::fromUtf8("pushButtonToShortestTripScreen"));
        pushButtonToShortestTripScreen->setFont(font);

        horizontalLayout->addWidget(pushButtonToShortestTripScreen);

        pushButtonToCustomTripScreen = new QPushButton(horizontalLayoutWidget);
        pushButtonToCustomTripScreen->setObjectName(QString::fromUtf8("pushButtonToCustomTripScreen"));
        pushButtonToCustomTripScreen->setFont(font);

        horizontalLayout->addWidget(pushButtonToCustomTripScreen);

        label_2 = new QLabel(UserSelectionScreen);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(330, 110, 111, 16));
        label_2->setFont(font);
        stackedWidget->addWidget(UserSelectionScreen);
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
        DFSBFSMSTScreen = new QWidget();
        DFSBFSMSTScreen->setObjectName(QString::fromUtf8("DFSBFSMSTScreen"));
        label = new QLabel(DFSBFSMSTScreen);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(460, 440, 121, 16));
        label->setFont(font);
        labelTotalDistance = new QLabel(DFSBFSMSTScreen);
        labelTotalDistance->setObjectName(QString::fromUtf8("labelTotalDistance"));
        labelTotalDistance->setGeometry(QRect(580, 430, 121, 31));
        labelTotalDistance->setFont(font);
        labelTotalDistance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        textBrowser = new QTextBrowser(DFSBFSMSTScreen);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 20, 421, 491));
        textBrowser->setFont(font);
        comboBox = new QComboBox(DFSBFSMSTScreen);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(460, 60, 291, 22));
        comboBox->setFont(font);
        verticalLayoutWidget = new QWidget(DFSBFSMSTScreen);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(470, 130, 160, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonDFS = new QPushButton(verticalLayoutWidget);
        pushButtonDFS->setObjectName(QString::fromUtf8("pushButtonDFS"));
        pushButtonDFS->setFont(font);

        verticalLayout->addWidget(pushButtonDFS);

        pushButtonBFS = new QPushButton(verticalLayoutWidget);
        pushButtonBFS->setObjectName(QString::fromUtf8("pushButtonBFS"));
        pushButtonBFS->setFont(font);

        verticalLayout->addWidget(pushButtonBFS);

        pushButtonMST_2 = new QPushButton(verticalLayoutWidget);
        pushButtonMST_2->setObjectName(QString::fromUtf8("pushButtonMST_2"));
        pushButtonMST_2->setFont(font);

        verticalLayout->addWidget(pushButtonMST_2);

        pushButtonReturnFromDFSBFSMST = new QPushButton(DFSBFSMSTScreen);
        pushButtonReturnFromDFSBFSMST->setObjectName(QString::fromUtf8("pushButtonReturnFromDFSBFSMST"));
        pushButtonReturnFromDFSBFSMST->setGeometry(QRect(670, 20, 75, 23));
        pushButtonReturnFromDFSBFSMST->setFont(font);
        stackedWidget->addWidget(DFSBFSMSTScreen);
        ShortestTripScreen = new QWidget();
        ShortestTripScreen->setObjectName(QString::fromUtf8("ShortestTripScreen"));
        pushButtonReturnFromShortestTripScreen = new QPushButton(ShortestTripScreen);
        pushButtonReturnFromShortestTripScreen->setObjectName(QString::fromUtf8("pushButtonReturnFromShortestTripScreen"));
        pushButtonReturnFromShortestTripScreen->setGeometry(QRect(670, 20, 75, 23));
        pushButtonReturnFromShortestTripScreen->setFont(font);
        stackedWidget->addWidget(ShortestTripScreen);
        CustomTripScreen = new QWidget();
        CustomTripScreen->setObjectName(QString::fromUtf8("CustomTripScreen"));
        pushButtonReturnFromCustomTripScreen = new QPushButton(CustomTripScreen);
        pushButtonReturnFromCustomTripScreen->setObjectName(QString::fromUtf8("pushButtonReturnFromCustomTripScreen"));
        pushButtonReturnFromCustomTripScreen->setGeometry(QRect(670, 20, 75, 23));
        pushButtonReturnFromCustomTripScreen->setFont(font);
        tableViewCustomTrip = new QTableView(CustomTripScreen);
        tableViewCustomTrip->setObjectName(QString::fromUtf8("tableViewCustomTrip"));
        tableViewCustomTrip->setGeometry(QRect(20, 20, 321, 491));
        textBrowserDisplaySelectedTrip = new QTextBrowser(CustomTripScreen);
        textBrowserDisplaySelectedTrip->setObjectName(QString::fromUtf8("textBrowserDisplaySelectedTrip"));
        textBrowserDisplaySelectedTrip->setGeometry(QRect(475, 60, 261, 401));
        textBrowserDisplaySelectedTrip->setTextInteractionFlags(Qt::TextBrowserInteraction);
        horizontalLayoutWidget_2 = new QWidget(CustomTripScreen);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(500, 470, 213, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonCreateCustomDirectTrip = new QPushButton(horizontalLayoutWidget_2);
        pushButtonCreateCustomDirectTrip->setObjectName(QString::fromUtf8("pushButtonCreateCustomDirectTrip"));

        horizontalLayout_2->addWidget(pushButtonCreateCustomDirectTrip);

        pushButtonResetDisplaySelectedTrip = new QPushButton(horizontalLayoutWidget_2);
        pushButtonResetDisplaySelectedTrip->setObjectName(QString::fromUtf8("pushButtonResetDisplaySelectedTrip"));

        horizontalLayout_2->addWidget(pushButtonResetDisplaySelectedTrip);

        stackedWidget->addWidget(CustomTripScreen);
        DirectTripScreen = new QWidget();
        DirectTripScreen->setObjectName(QString::fromUtf8("DirectTripScreen"));
        textBrowserDisplayDirectTrip = new QTextBrowser(DirectTripScreen);
        textBrowserDisplayDirectTrip->setObjectName(QString::fromUtf8("textBrowserDisplayDirectTrip"));
        textBrowserDisplayDirectTrip->setGeometry(QRect(30, 20, 411, 491));
        labelShowTotalDistanceFromDirectTrip = new QLabel(DirectTripScreen);
        labelShowTotalDistanceFromDirectTrip->setObjectName(QString::fromUtf8("labelShowTotalDistanceFromDirectTrip"));
        labelShowTotalDistanceFromDirectTrip->setGeometry(QRect(510, 80, 141, 21));
        labelShowTotalDistanceFromDirectTrip->setFrameShape(QFrame::Box);
        stackedWidget->addWidget(DirectTripScreen);
        AdminMaintenanceScreen = new QWidget();
        AdminMaintenanceScreen->setObjectName(QString::fromUtf8("AdminMaintenanceScreen"));
        labelMaintenanceScreenTitle = new QLabel(AdminMaintenanceScreen);
        labelMaintenanceScreenTitle->setObjectName(QString::fromUtf8("labelMaintenanceScreenTitle"));
        labelMaintenanceScreenTitle->setGeometry(QRect(290, 100, 201, 20));
        labelMaintenanceScreenTitle->setFont(font);
        pushButtonLogoutFromAdminMaintenance = new QPushButton(AdminMaintenanceScreen);
        pushButtonLogoutFromAdminMaintenance->setObjectName(QString::fromUtf8("pushButtonLogoutFromAdminMaintenance"));
        pushButtonLogoutFromAdminMaintenance->setGeometry(QRect(670, 20, 75, 23));
        pushButtonLogoutFromAdminMaintenance->setFont(font);
        formLayoutWidget_5 = new QWidget(AdminMaintenanceScreen);
        formLayoutWidget_5->setObjectName(QString::fromUtf8("formLayoutWidget_5"));
        formLayoutWidget_5->setGeometry(QRect(280, 140, 195, 41));
        formLayout_5 = new QFormLayout(formLayoutWidget_5);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setContentsMargins(0, 0, 0, 0);
        pushButtonChangeToSouvenirs = new QPushButton(formLayoutWidget_5);
        pushButtonChangeToSouvenirs->setObjectName(QString::fromUtf8("pushButtonChangeToSouvenirs"));
        pushButtonChangeToSouvenirs->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, pushButtonChangeToSouvenirs);

        pushButtonChangeToStadiums = new QPushButton(formLayoutWidget_5);
        pushButtonChangeToStadiums->setObjectName(QString::fromUtf8("pushButtonChangeToStadiums"));
        pushButtonChangeToStadiums->setFont(font);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, pushButtonChangeToStadiums);

        stackedWidget->addWidget(AdminMaintenanceScreen);
        AdminSouvenirsScreen = new QWidget();
        AdminSouvenirsScreen->setObjectName(QString::fromUtf8("AdminSouvenirsScreen"));
        tableviewAllSouvenirs = new QTableView(AdminSouvenirsScreen);
        tableviewAllSouvenirs->setObjectName(QString::fromUtf8("tableviewAllSouvenirs"));
        tableviewAllSouvenirs->setGeometry(QRect(20, 60, 461, 381));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Courier"));
        font5.setPointSize(8);
        tableviewAllSouvenirs->setFont(font5);
        pushButtonResetAllSouvenirs = new QPushButton(AdminSouvenirsScreen);
        pushButtonResetAllSouvenirs->setObjectName(QString::fromUtf8("pushButtonResetAllSouvenirs"));
        pushButtonResetAllSouvenirs->setGeometry(QRect(20, 460, 93, 28));
        pushButtonResetAllSouvenirs->setFont(font);
        comboBoxChooseStadium = new QComboBox(AdminSouvenirsScreen);
        comboBoxChooseStadium->setObjectName(QString::fromUtf8("comboBoxChooseStadium"));
        comboBoxChooseStadium->setGeometry(QRect(20, 20, 361, 22));
        comboBoxChooseStadium->setFont(font);
        pushButtonReturnToMaintenanceScreen = new QPushButton(AdminSouvenirsScreen);
        pushButtonReturnToMaintenanceScreen->setObjectName(QString::fromUtf8("pushButtonReturnToMaintenanceScreen"));
        pushButtonReturnToMaintenanceScreen->setGeometry(QRect(670, 20, 75, 23));
        pushButtonReturnToMaintenanceScreen->setFont(font);
        verticalLayoutWidget_2 = new QWidget(AdminSouvenirsScreen);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(500, 80, 231, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        labelShowStadium = new QLabel(verticalLayoutWidget_2);
        labelShowStadium->setObjectName(QString::fromUtf8("labelShowStadium"));
        labelShowStadium->setFont(font);
        labelShowStadium->setFrameShape(QFrame::Box);

        verticalLayout_2->addWidget(labelShowStadium);

        labelShowItem = new QLabel(verticalLayoutWidget_2);
        labelShowItem->setObjectName(QString::fromUtf8("labelShowItem"));
        labelShowItem->setFont(font);
        labelShowItem->setFrameShape(QFrame::Box);
        labelShowItem->setLineWidth(1);

        verticalLayout_2->addWidget(labelShowItem);

        doubleSpinBoxEditPrice = new QDoubleSpinBox(verticalLayoutWidget_2);
        doubleSpinBoxEditPrice->setObjectName(QString::fromUtf8("doubleSpinBoxEditPrice"));
        doubleSpinBoxEditPrice->setFont(font);
        doubleSpinBoxEditPrice->setMaximum(99999.000000000000000);

        verticalLayout_2->addWidget(doubleSpinBoxEditPrice);

        formLayoutWidget_6 = new QWidget(AdminSouvenirsScreen);
        formLayoutWidget_6->setObjectName(QString::fromUtf8("formLayoutWidget_6"));
        formLayoutWidget_6->setGeometry(QRect(500, 200, 195, 31));
        formLayout_6 = new QFormLayout(formLayoutWidget_6);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButtonEditPrice = new QPushButton(formLayoutWidget_6);
        pushButtonEditPrice->setObjectName(QString::fromUtf8("pushButtonEditPrice"));
        pushButtonEditPrice->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, pushButtonEditPrice);

        pushButtonDeleteSouvenir = new QPushButton(formLayoutWidget_6);
        pushButtonDeleteSouvenir->setObjectName(QString::fromUtf8("pushButtonDeleteSouvenir"));
        pushButtonDeleteSouvenir->setFont(font);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, pushButtonDeleteSouvenir);

        verticalLayoutWidget_3 = new QWidget(AdminSouvenirsScreen);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(500, 290, 231, 131));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelPromptNewItem = new QLabel(verticalLayoutWidget_3);
        labelPromptNewItem->setObjectName(QString::fromUtf8("labelPromptNewItem"));
        labelPromptNewItem->setFont(font);
        labelPromptNewItem->setFrameShape(QFrame::Box);
        labelPromptNewItem->setLineWidth(1);

        verticalLayout_3->addWidget(labelPromptNewItem);

        lineEditNewItem = new QLineEdit(verticalLayoutWidget_3);
        lineEditNewItem->setObjectName(QString::fromUtf8("lineEditNewItem"));
        lineEditNewItem->setFont(font);

        verticalLayout_3->addWidget(lineEditNewItem);

        doubleSpinBoxNewSouvenirPrice = new QDoubleSpinBox(verticalLayoutWidget_3);
        doubleSpinBoxNewSouvenirPrice->setObjectName(QString::fromUtf8("doubleSpinBoxNewSouvenirPrice"));
        doubleSpinBoxNewSouvenirPrice->setFont(font);
        doubleSpinBoxNewSouvenirPrice->setMaximum(99999.000000000000000);

        verticalLayout_3->addWidget(doubleSpinBoxNewSouvenirPrice);

        pushButtonAddNewSouvenir = new QPushButton(verticalLayoutWidget_3);
        pushButtonAddNewSouvenir->setObjectName(QString::fromUtf8("pushButtonAddNewSouvenir"));
        pushButtonAddNewSouvenir->setFont(font);

        verticalLayout_3->addWidget(pushButtonAddNewSouvenir);

        stackedWidget->addWidget(AdminSouvenirsScreen);
        AdminStadiumScreen = new QWidget();
        AdminStadiumScreen->setObjectName(QString::fromUtf8("AdminStadiumScreen"));
        pushButtonReturnToMaintenanceScreen_2 = new QPushButton(AdminStadiumScreen);
        pushButtonReturnToMaintenanceScreen_2->setObjectName(QString::fromUtf8("pushButtonReturnToMaintenanceScreen_2"));
        pushButtonReturnToMaintenanceScreen_2->setGeometry(QRect(670, 20, 75, 23));
        pushButtonReturnToMaintenanceScreen_2->setFont(font);
        tableViewAllStadiumsADMIN = new QTableView(AdminStadiumScreen);
        tableViewAllStadiumsADMIN->setObjectName(QString::fromUtf8("tableViewAllStadiumsADMIN"));
        tableViewAllStadiumsADMIN->setGeometry(QRect(30, 60, 701, 101));
        tableViewAllStadiumsADMIN->setFont(font5);
        pushButtonResetAllStadiumsTableADMIN = new QPushButton(AdminStadiumScreen);
        pushButtonResetAllStadiumsTableADMIN->setObjectName(QString::fromUtf8("pushButtonResetAllStadiumsTableADMIN"));
        pushButtonResetAllStadiumsTableADMIN->setGeometry(QRect(650, 180, 75, 23));
        pushButtonResetAllStadiumsTableADMIN->setFont(font);
        comboBoxChooseTeamNameADMIN = new QComboBox(AdminStadiumScreen);
        comboBoxChooseTeamNameADMIN->setObjectName(QString::fromUtf8("comboBoxChooseTeamNameADMIN"));
        comboBoxChooseTeamNameADMIN->setGeometry(QRect(30, 20, 271, 22));
        comboBoxChooseTeamNameADMIN->setFont(font);
        formLayoutWidget_2 = new QWidget(AdminStadiumScreen);
        formLayoutWidget_2->setObjectName(QString::fromUtf8("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(20, 290, 381, 140));
        formLayout = new QFormLayout(formLayoutWidget_2);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        labelSeatingCapacity = new QLabel(formLayoutWidget_2);
        labelSeatingCapacity->setObjectName(QString::fromUtf8("labelSeatingCapacity"));
        labelSeatingCapacity->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, labelSeatingCapacity);

        labelLocation = new QLabel(formLayoutWidget_2);
        labelLocation->setObjectName(QString::fromUtf8("labelLocation"));
        labelLocation->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, labelLocation);

        labelStadiumName = new QLabel(formLayoutWidget_2);
        labelStadiumName->setObjectName(QString::fromUtf8("labelStadiumName"));
        labelStadiumName->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelStadiumName);

        labelPlayingSurface = new QLabel(formLayoutWidget_2);
        labelPlayingSurface->setObjectName(QString::fromUtf8("labelPlayingSurface"));
        labelPlayingSurface->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, labelPlayingSurface);

        labelLeague = new QLabel(formLayoutWidget_2);
        labelLeague->setObjectName(QString::fromUtf8("labelLeague"));
        labelLeague->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, labelLeague);

        lineEditStadiumName = new QLineEdit(formLayoutWidget_2);
        lineEditStadiumName->setObjectName(QString::fromUtf8("lineEditStadiumName"));
        lineEditStadiumName->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditStadiumName);

        spinBoxSeatingCapacity = new QSpinBox(formLayoutWidget_2);
        spinBoxSeatingCapacity->setObjectName(QString::fromUtf8("spinBoxSeatingCapacity"));
        spinBoxSeatingCapacity->setFont(font);
        spinBoxSeatingCapacity->setMaximum(999999999);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxSeatingCapacity);

        lineEditLocation = new QLineEdit(formLayoutWidget_2);
        lineEditLocation->setObjectName(QString::fromUtf8("lineEditLocation"));
        lineEditLocation->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditLocation);

        lineEditPlayingSurface = new QLineEdit(formLayoutWidget_2);
        lineEditPlayingSurface->setObjectName(QString::fromUtf8("lineEditPlayingSurface"));
        lineEditPlayingSurface->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditPlayingSurface);

        lineEditLeague = new QLineEdit(formLayoutWidget_2);
        lineEditLeague->setObjectName(QString::fromUtf8("lineEditLeague"));
        lineEditLeague->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditLeague);

        formLayoutWidget_3 = new QWidget(AdminStadiumScreen);
        formLayoutWidget_3->setObjectName(QString::fromUtf8("formLayoutWidget_3"));
        formLayoutWidget_3->setGeometry(QRect(410, 290, 331, 146));
        formLayout_2 = new QFormLayout(formLayoutWidget_3);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        labelDateOpened = new QLabel(formLayoutWidget_3);
        labelDateOpened->setObjectName(QString::fromUtf8("labelDateOpened"));
        labelDateOpened->setFont(font);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelDateOpened);

        spinBoxDateOpened = new QSpinBox(formLayoutWidget_3);
        spinBoxDateOpened->setObjectName(QString::fromUtf8("spinBoxDateOpened"));
        spinBoxDateOpened->setFont(font);
        spinBoxDateOpened->setMaximum(999999999);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBoxDateOpened);

        labelDistanceToCenterField = new QLabel(formLayoutWidget_3);
        labelDistanceToCenterField->setObjectName(QString::fromUtf8("labelDistanceToCenterField"));
        labelDistanceToCenterField->setFont(font);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelDistanceToCenterField);

        spinBoxDistanceToCenterField = new QSpinBox(formLayoutWidget_3);
        spinBoxDistanceToCenterField->setObjectName(QString::fromUtf8("spinBoxDistanceToCenterField"));
        spinBoxDistanceToCenterField->setFont(font);
        spinBoxDistanceToCenterField->setMaximum(999999999);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBoxDistanceToCenterField);

        labelBallParkTypology = new QLabel(formLayoutWidget_3);
        labelBallParkTypology->setObjectName(QString::fromUtf8("labelBallParkTypology"));
        labelBallParkTypology->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, labelBallParkTypology);

        lineEditBallParkTypology = new QLineEdit(formLayoutWidget_3);
        lineEditBallParkTypology->setObjectName(QString::fromUtf8("lineEditBallParkTypology"));
        lineEditBallParkTypology->setFont(font);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEditBallParkTypology);

        labelRoofType = new QLabel(formLayoutWidget_3);
        labelRoofType->setObjectName(QString::fromUtf8("labelRoofType"));
        labelRoofType->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelRoofType);

        lineEditRoofType = new QLineEdit(formLayoutWidget_3);
        lineEditRoofType->setObjectName(QString::fromUtf8("lineEditRoofType"));
        lineEditRoofType->setFont(font);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEditRoofType);

        pushButtonEditData = new QPushButton(formLayoutWidget_3);
        pushButtonEditData->setObjectName(QString::fromUtf8("pushButtonEditData"));
        pushButtonEditData->setFont(font);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, pushButtonEditData);

        formLayoutWidget_4 = new QWidget(AdminStadiumScreen);
        formLayoutWidget_4->setObjectName(QString::fromUtf8("formLayoutWidget_4"));
        formLayoutWidget_4->setGeometry(QRect(30, 170, 242, 65));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButtonUploadNewStadium = new QPushButton(formLayoutWidget_4);
        pushButtonUploadNewStadium->setObjectName(QString::fromUtf8("pushButtonUploadNewStadium"));
        pushButtonUploadNewStadium->setFont(font);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, pushButtonUploadNewStadium);

        pushButtonUploadNewStadiumDistances = new QPushButton(formLayoutWidget_4);
        pushButtonUploadNewStadiumDistances->setObjectName(QString::fromUtf8("pushButtonUploadNewStadiumDistances"));
        pushButtonUploadNewStadiumDistances->setFont(font);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, pushButtonUploadNewStadiumDistances);

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

        stackedWidget->setCurrentIndex(6);
        pushButtonResetLogin->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        labelUsername->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        labelPassword->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEditUsername->setText(QString());
        pushButtonLogin->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButtonResetLogin->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButtonLogoutFromUserSelection->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        pushButtonToUserScreen->setText(QCoreApplication::translate("MainWindow", "Sort Stadiums", nullptr));
        pushButtonToDFSBFSMSTScreen->setText(QCoreApplication::translate("MainWindow", "DFS/BFS/MST", nullptr));
        pushButtonToShortestTripScreen->setText(QCoreApplication::translate("MainWindow", "Shortest Trip", nullptr));
        pushButtonToCustomTripScreen->setText(QCoreApplication::translate("MainWindow", "Custom Trip", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "User Selection", nullptr));
        labelShowCurrentSort->setText(QCoreApplication::translate("MainWindow", "Currently Sorted By: All", nullptr));
        labelSortByTeam->setText(QCoreApplication::translate("MainWindow", "Sort by Team Name", nullptr));
        labelSortByLeague->setText(QCoreApplication::translate("MainWindow", "Sort by League", nullptr));
        labelSortByRoofType->setText(QCoreApplication::translate("MainWindow", "Sort by Roof Type", nullptr));
        labelGridLayout->setText(QCoreApplication::translate("MainWindow", "Sorting Menu", nullptr));
        labelSortByTeamName->setText(QCoreApplication::translate("MainWindow", "All Teams", nullptr));
        pushButtonSortByTeamNames->setText(QString());
        labelSortByStadiumName->setText(QCoreApplication::translate("MainWindow", "All Stadiums", nullptr));
        pushButtonSortByStadiumNames->setText(QString());
        labelSortByBallparkType->setText(QCoreApplication::translate("MainWindow", "Ballpark Type", nullptr));
        pushButtonSortByBallparkTypology->setText(QString());
        labelSortByDateOpened->setText(QCoreApplication::translate("MainWindow", "Date Opened", nullptr));
        pushButtonSortByDateOpened->setText(QString());
        labelSortBySeatingCapacity->setText(QCoreApplication::translate("MainWindow", "Seating Capa.", nullptr));
        pushButtonSortBySeatingCapacity->setText(QString());
        labelSortByGreatestDistance->setText(QCoreApplication::translate("MainWindow", "Max Dist Cent.", nullptr));
        pushButtonSortByGreatestFromCenter->setText(QString());
        labelSortByLeastDistance->setText(QCoreApplication::translate("MainWindow", "Min Dist Cent.", nullptr));
        pushButtonSortByLeastFromCenter->setText(QString());
        labelResetStadiumsTable->setText(QCoreApplication::translate("MainWindow", "RESET", nullptr));
        pushButtonResetStadiumsTable->setText(QString());
        labelAdditionalInfo->setText(QString());
        pushButtonUserLogout->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Total Distance", nullptr));
        labelTotalDistance->setText(QString());
        pushButtonDFS->setText(QCoreApplication::translate("MainWindow", "DFS", nullptr));
        pushButtonBFS->setText(QCoreApplication::translate("MainWindow", "BFS", nullptr));
        pushButtonMST_2->setText(QCoreApplication::translate("MainWindow", "MST", nullptr));
        pushButtonReturnFromDFSBFSMST->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        pushButtonReturnFromShortestTripScreen->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        pushButtonReturnFromCustomTripScreen->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        pushButtonCreateCustomDirectTrip->setText(QCoreApplication::translate("MainWindow", "Create Direct Trip", nullptr));
        pushButtonResetDisplaySelectedTrip->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        labelShowTotalDistanceFromDirectTrip->setText(QString());
        labelMaintenanceScreenTitle->setText(QCoreApplication::translate("MainWindow", "Administrator Maintenance", nullptr));
        pushButtonLogoutFromAdminMaintenance->setText(QCoreApplication::translate("MainWindow", "Logout", nullptr));
        pushButtonChangeToSouvenirs->setText(QCoreApplication::translate("MainWindow", "Souvenirs", nullptr));
        pushButtonChangeToStadiums->setText(QCoreApplication::translate("MainWindow", "Stadiums", nullptr));
        pushButtonResetAllSouvenirs->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pushButtonReturnToMaintenanceScreen->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        labelShowStadium->setText(QString());
        labelShowItem->setText(QCoreApplication::translate("MainWindow", "No Souvenir Selected!", nullptr));
        pushButtonEditPrice->setText(QCoreApplication::translate("MainWindow", "Edit Price", nullptr));
        pushButtonDeleteSouvenir->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        labelPromptNewItem->setText(QCoreApplication::translate("MainWindow", "New Souvenir To Add", nullptr));
        pushButtonAddNewSouvenir->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        pushButtonReturnToMaintenanceScreen_2->setText(QCoreApplication::translate("MainWindow", "Return", nullptr));
        pushButtonResetAllStadiumsTableADMIN->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        labelSeatingCapacity->setText(QCoreApplication::translate("MainWindow", "Seating Capacity:", nullptr));
        labelLocation->setText(QCoreApplication::translate("MainWindow", "Location:", nullptr));
        labelStadiumName->setText(QCoreApplication::translate("MainWindow", "Stadium Name:", nullptr));
        labelPlayingSurface->setText(QCoreApplication::translate("MainWindow", "Playing Surface:", nullptr));
        labelLeague->setText(QCoreApplication::translate("MainWindow", "League:", nullptr));
        labelDateOpened->setText(QCoreApplication::translate("MainWindow", "Date Opened:", nullptr));
        labelDistanceToCenterField->setText(QCoreApplication::translate("MainWindow", "Distance To Center Field:", nullptr));
        labelBallParkTypology->setText(QCoreApplication::translate("MainWindow", "Ballpark Typology:", nullptr));
        labelRoofType->setText(QCoreApplication::translate("MainWindow", "Roof Type:", nullptr));
        pushButtonEditData->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        pushButtonUploadNewStadium->setText(QCoreApplication::translate("MainWindow", "Upload New Stadium", nullptr));
        pushButtonUploadNewStadiumDistances->setText(QCoreApplication::translate("MainWindow", "Upload New Stadium Distances", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
