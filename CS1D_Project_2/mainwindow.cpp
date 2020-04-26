#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Controller *controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      m_controller(controller)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->LoginScreen);
    // ui->stackedWidget->setCurrentWidget(ui->UserScreen);

    on_pushButtonResetStadiumsTable_clicked();
    fillStadiumsComboBoxes();
    on_pushButtonResetAllSouvenirs_clicked();
}

MainWindow::~MainWindow()
{
    delete ui;
}

// LOGIN SCREEN START ===========================================================================================

void MainWindow::changeToAdmin()
{
     ui->stackedWidget->setCurrentWidget(ui->AdminScreen);
}

void MainWindow::changetoUser()
{
    ui->stackedWidget->setCurrentWidget(ui->UserScreen);
}

void MainWindow::on_pushButtonLogin_clicked()
{
    QString username = ui->lineEditUsername->text();
    QString password = ui->lineEditPassword->text();

    // Encrypte the password
    QByteArray encrypte_password (password.toStdString().c_str());
    encrypte_password.append(password);
    QString hashed_password = QCryptographicHash::hash(encrypte_password, QCryptographicHash::Sha256).toHex();
    // qDebug() << hashed_password;

    QSqlQuery qry;

    qry.prepare("select * from Login where username ='"+username+"' and password ='"+password+"'");

    if (!qry.exec())
    {
        qDebug() << "Error";
    }

    if(username == "admin")
    {
//        QMessageBox *msg = new QMessageBox;
//        msg->setText("Username and Password are correct.");
//        msg->setStyleSheet("background-color: white;");
//        msg->show();

        QMessageBox::information(this,"Login", "Username and Password is correct");
        changeToAdmin();
        this->ui->lineEditUsername->setText("");
        this->ui->lineEditPassword->setText("");

    }
    else if(username == "user")
    {
        QMessageBox::information(this,"Login", "Username and Password is correct");
        changetoUser();
        this->ui->lineEditUsername->setText("");
        this->ui->lineEditPassword->setText("");
    }
    else
    {
        QMessageBox::warning(this,"Login","Username and password is not correct");
        this->ui->lineEditUsername->setText("");
        this->ui->lineEditPassword->setText("");
    }
}

void MainWindow::on_pushButtonResetLogin_clicked()
{
    ui->lineEditUsername->clear();
    ui->lineEditPassword->clear();
}

// LOGIN SCREEN END ===========================================================================================

// STADIUMS DISPLAY/SORT START ================================================================================

void MainWindow::resetSortLabel(QString label) {

    ui->labelShowCurrentSort->setText(label);
    ui->labelAdditionalInfo->clear();
}

void MainWindow::on_comboBoxChooseTeamName_activated(const QString &arg1)
{
    resetSortLabel("Currently Sorted By: " + arg1);

    QString query = "select TeamName, StadiumName, SeatingCapacity, Location, PlayingSurface, "
                    "League, DateOpened, DistanceToCenterField, BallparkTypology, RoofType from Stadiums WHERE TeamName = '"+arg1+"';";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortByTeamNames_clicked()
{
    resetSortLabel("Currently Sorted By: Team Name");

    QString query = "select TeamName, StadiumName from Stadiums ORDER BY TeamName ASC;";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortByStadiumNames_clicked()
{
    resetSortLabel("Currently Sorted By: Stadium Name");

    QString query = "select StadiumName, TeamName from Stadiums ORDER BY StadiumName ASC;";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_comboBoxChooseLeague_activated(const QString &arg1)
{
    resetSortLabel("Currently Sorted By: " + arg1 + " League");

    QString query;

    if (arg1 == "American") {

        query = "select TeamName, StadiumName from Stadiums WHERE League = '"+arg1+"' ORDER BY TeamName ASC;";
    }
    else {

        query = "select StadiumName, TeamName from Stadiums WHERE League = '"+arg1+"' ORDER BY StadiumName ASC;";
    }

    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortByBallparkTypology_clicked()
{
    resetSortLabel("Currently Sorted By: Ballpark Typology");

    QString query = "select BallparkTypology, StadiumName, TeamName from Stadiums ORDER BY BallparkTypology ASC;";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_comboBoxChooseRoofType_activated(const QString &arg1)
{
    resetSortLabel("Currently Sorted By: " + arg1 + " Rooftype");

    QString query = "select TeamName from Stadiums WHERE RoofType = '"+arg1+"' ORDER BY TeamName ASC;";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();

    QString roofTypeCount = QString::number(m_controller->getStadiumsQueryModel(query)->rowCount());
    ui->labelAdditionalInfo->setText(arg1 + " RoofType Count: " + roofTypeCount);
}

void MainWindow::on_pushButtonSortByDateOpened_clicked()
{
    resetSortLabel("Currently Sorted By: Date Opened");

    QString query = "select DateOpened, StadiumName, TeamName from Stadiums ORDER BY DateOpened ASC";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortBySeatingCapacity_clicked()
{
    resetSortLabel("Currently Sorted By: Seating Capacity");

    QString query = "select SeatingCapacity, TeamName from Stadiums ORDER BY SeatingCapacity ASC";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortByGreatestFromCenter_clicked()
{
    resetSortLabel("Currently Sorted By: Greatest Distance From Center Field");

    QString query = "select StadiumName, TeamName from Stadiums where DistanceToCenterField = (select MAX(DistanceToCenterField) from Stadiums);";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortByLeastFromCenter_clicked()
{
    resetSortLabel("Currently Sorted By: Least Distance From Center Field");

    QString query = "select StadiumName, TeamName from Stadiums where DistanceToCenterField = (select MIN(DistanceToCenterField) from Stadiums);";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonResetStadiumsTable_clicked()
{
    resetSortLabel("Currently Sorted By: All");

    QString query = "select * from Stadiums;";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::fillStadiumsComboBoxes() {

    ui->comboBoxChooseTeamName->setModel(m_controller->getStadiumsQueryModel("select DISTINCT TeamName from Stadiums ORDER BY TeamName ASC;"));
    ui->comboBoxChooseLeague->setModel(m_controller->getStadiumsQueryModel("select DISTINCT League from Stadiums ORDER BY League ASC;"));
    ui->comboBoxChooseRoofType->setModel(m_controller->getStadiumsQueryModel("select DISTINCT RoofType from Stadiums ORDER BY RoofType ASC;"));
    ui->comboBoxChooseStadium->setModel(m_controller->getSouvenirsQueryModel("select DISTINCT Stadium from [Stadium Souvenirs] ORDER BY Stadium ASC;"));
}

void MainWindow::on_pushButtonUserLogout_clicked()
{
    on_pushButtonResetStadiumsTable_clicked();
    ui->stackedWidget->setCurrentWidget(ui->LoginScreen);
}

// STADIUMS DISPLAY/SORT END ==================================================================================

void MainWindow::on_pushButtonResetAllSouvenirs_clicked() {

    const QString ANGEL_STADIUM = "Angel Stadium";

    QString query = "select * from [Stadium Souvenirs] where Stadium = '"+ANGEL_STADIUM+"';";
    ui->tableviewAllSouvenirs->setModel(m_controller->getSouvenirsQueryModel(query));
    ui->tableviewAllSouvenirs->resizeColumnsToContents();
    ui->doubleSpinBoxEditPrice->setValue(0.00);
    resetSouvenirScreenLabels();
}

void MainWindow::on_comboBoxChooseStadium_activated(const QString &arg1) {

    QString query = "select * from [Stadium Souvenirs] where Stadium = '"+arg1+"';";
    ui->tableviewAllSouvenirs->setModel(m_controller->getSouvenirsQueryModel(query));
    ui->tableviewAllSouvenirs->resizeColumnsToContents();
}

void MainWindow::resetSouvenirScreenLabels() {

    ui->labelShowStadium->setText("Stadium Name");
    ui->labelShowItem->setText("Souvenir Name");
}

void MainWindow::on_tableviewAllSouvenirs_activated(const QModelIndex &index) {

    QString selectedSouvenir;
    QString selectedStadium;

    if (index.isValid()) {

        QSqlQuery qry;
        double price;
        selectedSouvenir = index.data().toString();
        selectedStadium = ui->comboBoxChooseStadium->currentText();
        qry.prepare("Select * from [Stadium Souvenirs] where Item = '"+selectedSouvenir+"' and Stadium = '"+selectedStadium+"'");

        if (!qry.exec()) {

            qDebug() << "ERROR: on_tableviewAllSouvenirs_activated(const QModelIndex &index)";
        }
        else {

            do {

                price = qry.value(2).toDouble();
                ui->doubleSpinBoxEditPrice->setValue(price);
                ui->labelShowStadium->setText(selectedStadium);
                ui->labelShowItem->setText(selectedSouvenir);

            } while (qry.next());
        }
    }
}
