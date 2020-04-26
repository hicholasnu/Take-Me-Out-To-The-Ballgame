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
}

MainWindow::~MainWindow()
{
    delete ui;
}

// LOGIN SCREEN START ===========================================================================================

void MainWindow::changeToAdmin()
{
    // ui->stackedWidget->setCurrentWidget(ui->Admin_page);

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
        QMessageBox *msg = new QMessageBox;
        msg->setText("Username and Password are correct.");
        msg->setStyleSheet("background-color: white;");
        msg->show();

        // QMessageBox::information(this,"Login", "Username and Password is correct");
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

void MainWindow::fillStadiumsComboBoxes()
{
    ui->comboBoxChooseTeamName->setModel(m_controller->getStadiumsQueryModel("select DISTINCT TeamName from Stadiums ORDER BY TeamName ASC;"));
    ui->comboBoxChooseLeague->setModel(m_controller->getStadiumsQueryModel("select DISTINCT League from Stadiums ORDER BY League ASC;"));
    ui->comboBoxChooseRoofType->setModel(m_controller->getStadiumsQueryModel("select DISTINCT RoofType from Stadiums ORDER BY RoofType ASC;"));
    ui->comboBoxNames->setModel(m_controller->getStadiumsQueryModel("select DISTINCT OriginatedStadium from StadiumDistances;"));
}

void MainWindow::on_pushButtonUserLogout_clicked()
{
    on_pushButtonResetStadiumsTable_clicked();
    ui->stackedWidget->setCurrentWidget(ui->LoginScreen);
}
// STADIUMS DISPLAY/SORT END ==================================================================================

void MainWindow::on_pushButtonMainWin_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->UserScreen);
}

// CUSTOM SCREEN ==============================================================================================
void MainWindow::on_pushButtonLogOut_clicked()
{
    on_pushButtonUserLogout_clicked();
}

void MainWindow::on_pushButtonPlan_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->customScreen);
}

void MainWindow::on_pushButtonDodger_clicked()
{
    QSqlQuery qry;
    int strInd = 8;
    //bool ok;
    QString cities[30] = { "AT&T Park", "Angel Stadium", "Busch Stadium", "Chase Field", "Citi Field",
                           "Citizens Bank Park", "Comerica Park", "Coors Field", "Dodger Stadium", "Fenway Park",
                           "Globe Life Field", "Great American Ball Park", "Guaranteed Rate Field", "Kauffman Stadium", "Marlins Park",
                           "Miller Park", "Minute Maid Park", "Nationals Park", "Oakland–Alameda County Coliseum ", "Oriole Park at Camden Yards",
                           "PNC Park", "Petco Park", "Progressive Field", "Rogers Centre", "Safeco Field",
                           "Sun Trust Park", "Target Field", "Tropicana Field", "Wrigley Field", "Yankee Stadium" };

    int my_matrix[30][30] = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,0,0,0,0,0,680,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0,50,0,0,0,0,0,0,0,0,0,0,0,0,110,0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0,0,0,0,310,0,235,0,0,680,0,0,0,0,0,0,0,0,0,465,0,0,0},
                             {0,0,0,0,0,0,0,580,0,0,870,0,0,0,0,0,1115,0,650,0,0,300,0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0,0,195,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50},
                             {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,90,0,0,0,0,0,0,0,0,0,80},
                             {0,0,0,0,0,0,0,0,0,0,0,0,240,0,0,0,0,0,0,0,0,0,90,210,0,0,0,0,0,0},
                             {0,0,0,580,0,0,0,0,0,0,650,0,0,560,0,0,0,0,0,0,0,830,0,0,0,0,0,0,0,0},
                             {0,50,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,340,0,0,0,0,0,0,0,1500,0,0,0},
                             {0,0,0,0,195,0,0,0,0,0,0,0,0,0,1255,0,0,0,0,0,0,0,0,430,0,0,0,0,0,0},
                             {0,0,0,870,0,0,0,650,0,0,0,0,0,460,0,0,230,0,0,0,0,0,0,0,0,740,0,0,0,0},
                             {0,0,310,0,0,0,0,0,0,0,0,0,250,0,0,0,0,0,0,0,260,0,225,0,0,375,0,790,0,0},
                             {0,0,0,0,0,0,240,0,0,0,0,250,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,50,0},
                             {0,0,235,0,0,0,0,560,0,0,460,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,415,0},
                             {0,0,0,0,0,0,0,0,0,1255,0,0,0,0,0,0,965,930,0,0,0,0,0,0,0,600,0,210,0,0},
                             {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,430,0,0,300,0,800},
                             {0,0,680,1115,0,0,0,0,0,0,230,0,0,0,965,0,0,0,0,0,0,0,0,0,0,0,0,790,0,0},
                             {0,0,0,0,0,0,0,0,0,0,0,0,0,0,930,0,0,0,0,50,195,0,0,0,0,560,0,0,0,0},
                             {50,0,0,650,0,0,0,0,340,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,90,0,0,0,0,0,0,0,0,0,0,0,50,0,0,0,0,0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0,0,0,0,260,0,0,0,0,0,195,0,0,0,0,115,225,0,0,0,0,0,315},
                             {0,110,0,300,0,0,0,830,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,90,0,0,0,0,255,0,0,0,0,0,0,0,0,115,0,0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,210,0,0,430,0,0,0,0,0,430,0,0,0,0,225,0,0,0,2070,0,0,0,0,0},
                             {680,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2070,0,0,1390,0,0,0},
                             {0,0,0,0,0,0,0,0,0,0,740,375,0,0,600,0,0,560,0,0,0,0,0,0,0,0,0,0,0,0},
                             {0,0,465,0,0,0,0,0,1500,0,0,0,0,0,0,300,0,0,0,0,0,0,0,0,1390,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0,0,0,0,790,0,0,210,0,790,0,0,0,0,0,0,0,0,0,0,0,0,0},
                             {0,0,0,0,0,0,0,0,0,0,0,0,50,415,0,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
                             {0,0,0,0,50,80,0,0,0,0,0,0,0,0,0,0,0,0,0,0,315,0,0,0,0,0,0,0,0,0}};
    d_dij.intialize(cities);
    d_dij.dijkstra(my_matrix,strInd);

    QVector<Edge> endPath = d_dij.getPath();
    QStringList items;
    QString tt;
    qry.prepare("INSERT INTO Dodger (Start, End, Distance) "
                 "VALUES (:Start, :End, :Distance)");
    for (int i = 0; i < endPath.size(); i++)
    {
        qry.bindValue(":Start", endPath.at(i).str);
        qry.bindValue(":End", endPath.at(i).end);
        qry.bindValue(":Distance", endPath.at(i).weight);
        tt = endPath.at(i).end;
        items << tt;
        qry.exec();
        //qDebug() << endPath.at(i).str << " -> " << endPath.at(i).end << " " << endPath.at(i).weight;
    }
    qry.clear();

    QString destStadium = QInputDialog::getItem(this, tr("Select your destination."),
                                                         tr("Stadium Name:"), items);

    QString queryD = "select DISTINCT Start, End, Distance from Dodger WHERE End = '"+destStadium+"';";
    ui->tableViewCustom->setModel(m_controller->getStadiumsQueryModel(queryD));

    qDebug() << destStadium;
}

