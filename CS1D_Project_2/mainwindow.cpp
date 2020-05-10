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
    intializeM();
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

// DIJKSTRA CODE ==============================================================================================
void MainWindow::on_pushButtonLogOut_clicked()
{
    on_pushButtonUserLogout_clicked();
}

void MainWindow::on_pushButtonPlan_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->customScreen);
}
void MainWindow::intializeM()
{
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
    for (int i = 0; i < 30; i++)
    {
        for (int j = 0; j < 30; j++)
        {
            mat[i][j] = my_matrix[i][j];
        }
    }
}

void MainWindow::on_pushButtonDodger_clicked()
{
    QString totalDist;
    QSqlQuery qry;
    QStringList items;
    QString tt;

    // gets index of stadium
    int strInd = d_dij.getIndex("Dodger Stadium");
    int count = 0;

    d_dij.dijkstra(mat,strInd);

    qDebug() << "index of Tropicana Field " << d_dij.getIndex(ui->comboBoxNames->currentText());

    // gets shortest path from selected stadium stores in vector
    QVector<Edge> endPath = d_dij.getPath();

    // reset Dodger DB
    qry.prepare("DELETE FROM Dodger");
    qry.exec();
    // reset Custom DB
    qry.prepare("DELETE FROM Custom");
    qry.exec();

    qry.prepare("INSERT INTO Dodger (Start, End, Distance) "
                 "VALUES (:Start, :End, :Distance)");

    // used to insert path into DB
    for (int i = 0; i < endPath.size(); i++)
    {
        qry.bindValue(":Start", endPath.at(i).str);
        qry.bindValue(":End", endPath.at(i).end);
        qry.bindValue(":Distance", endPath.at(i).weight);
        tt = endPath.at(i).end;
        items << tt;
        qry.exec();
    }
    qry.clear();

    // gets # of stadiums for trip
    count = ui->spinBoxNum->value();

    qry.prepare("INSERT INTO Custom (Start, End, Distance) "
                 "VALUES (:Start, :End, :Distance)");
    QVector<QString> contains;
    // inserts selected stadiums into DB
    for (int i = 0; i < count; i++)
    {
        QString destStadium = QInputDialog::getItem(this, tr("Select your destination."),
                                                             tr("Stadium Name:"), items);
        // used to error check that selected destination
        // has not been selected yet
        for (int i = 0; i < contains.size(); i++)
        {
            if (destStadium == contains[i])
            {
                QMessageBox::critical(this,"","Already selected!");
                destStadium = QInputDialog::getItem(this, tr("Select your destination."),
                                                                             tr("Stadium Name:"), items);
            }
        }
        for (int j = 0; j < endPath.size(); j++)
        {
            if (destStadium == endPath[j].end)
            {
                qry.bindValue(":Start", endPath.at(j).str);
                qry.bindValue(":End", destStadium);
                contains.push_back(destStadium);
                qry.bindValue(":Distance", endPath.at(j).weight);
                qry.exec();
                qDebug() << endPath.at(j).str << " -> " << endPath.at(j).end << " " << endPath.at(j).weight;
            }
        }
        qDebug() << destStadium;
    }
    qry.clear();
    ui->labelDist->clear();

    QString queryD = "select DISTINCT Start, End, Distance from Custom;";
    ui->tableViewCustom->setModel(m_controller->getStadiumsQueryModel(queryD));

    //calculates total distances traveled
    qry.exec("select SUM(DISTINCT Distance) from Custom;");
    if (qry.next())
    {
        totalDist = qry.value(0).toString();
    }
    qry.finish();

    qDebug() << totalDist;

    ui->labelDist->setText("Total Distance: " + totalDist + " miles");

    ui->tableViewCustom->resizeRowsToContents();
    ui->tableViewCustom->reset();
}

// Displays shortest path starting at Miami Marlins
void MainWindow::on_pushButtonMarlin_clicked()
{
    QVector<Edge> contains;
    Edge ed;
    QString start = "Marlins Park";
    QString totalDist = 0;
    QSqlQuery qry;

    // gets index of stadium
    int strInd = d_dij.getIndex(start);

    d_dij.dijkstra(mat,strInd);

    QVector<Edge> endPath = d_dij.getPath();
    int stop = endPath.size();

    // reset Dodger DB
    qry.prepare("DELETE FROM Dodger");
    qry.exec();
    // reset Custom DB
    qry.prepare("DELETE FROM Custom");
    qry.exec();

    qry.prepare("INSERT INTO Dodger (Start, End, Distance) "
                 "VALUES (:Start, :End, :Distance)");

    // used to insert path into DB
    for (int i = 0; i < endPath.size(); i++)
    {
        qry.bindValue(":Start", endPath.at(i).str);
        qry.bindValue(":End", endPath.at(i).end);
        qry.bindValue(":Distance", endPath.at(i).weight);
        qry.exec();
    }
    qry.clear();

    // gets min distance from start
    QString queryD = "select Start, End, MIN(Distance) from Dodger;";

    qry.exec(queryD);
    if (qry.next())
    {
        ed.str = qry.value(0).toString();
        ed.end = qry.value(1).toString();
        start = qry.value(1).toString();
        ed.weight = qry.value(2).toInt();
        contains.push_back(ed);
    }
    qry.finish();
    //qDebug() << ed.str << "" << ed.end << "" << ed.weight;

    // added to custom DB
    qry.prepare("INSERT INTO Custom (Start, End, Distance) "
                 "VALUES (:Start, :End, :Distance)");

    qry.bindValue(":Start", ed.str);
    qry.bindValue(":End", ed.end);
    qry.bindValue(":Distance", ed.weight);
    qry.exec();
    qry.clear();

    endPath.clear();
    //=========================================================================

    while (contains.size() < stop)
    {
        // gets index of stadium
        strInd = d_dij.getIndex(start);

        d_dij.dijkstra(mat,strInd);

        endPath = d_dij.getPath();

        // reset Dodger DB
        qry.prepare("DELETE FROM Dodger");
        qry.exec();

        qry.prepare("INSERT INTO Dodger (Start, End, Distance) "
                     "VALUES (:Start, :End, :Distance)");

        // used to insert path into DB
        for (int i = 0; i < endPath.size(); i++)
        {
            qry.bindValue(":Start", endPath.at(i).str);
            qry.bindValue(":End", endPath.at(i).end);
            qry.bindValue(":Distance", endPath.at(i).weight);
            qry.exec();
        }
        qry.clear();

        for (int i = 0; i < contains.size(); i++)
        {
            if (i == 0)
            {
                qry.prepare("DELETE FROM Dodger WHERE End = '" + contains.at(0).str + "'");
                qry.exec();
            }
            qry.prepare("DELETE FROM Dodger WHERE End = '" + contains.at(i).end + "'");
            qry.exec();
        }

        // gets min distance from start
        queryD = "select Start, End, MIN(Distance) from Dodger";

        qry.exec(queryD);
        if (qry.next())
        {
            ed.str = qry.value(0).toString();
            ed.end = qry.value(1).toString();
            ed.weight = qry.value(2).toInt();
            contains.push_back(ed);
        }
        qry.finish();
        start = ed.end;
        qDebug() << ed.str << "" << ed.end << "" << ed.weight;

        // added to custom DB
        qry.prepare("INSERT INTO Custom (Start, End, Distance) "
                     "VALUES (:Start, :End, :Distance)");

        qry.bindValue(":Start", ed.str);
        qry.bindValue(":End", ed.end);
        qry.bindValue(":Distance", ed.weight);
        qry.exec();
        qry.clear();
    }
    ui->labelDist->clear();

    queryD = "select * from Custom;";
    ui->tableViewCustom->setModel(m_controller->getStadiumsQueryModel(queryD));

    //calculates total distances traveled
    qry.exec("select SUM(Distance) from Custom;");
    if (qry.next())
    {
        totalDist = qry.value(0).toString();
    }
    qry.finish();

    qDebug() << totalDist;

    ui->labelDist->setText("Total Distance: " + totalDist + " miles");

    ui->tableViewCustom->resizeRowsToContents();
    ui->tableViewCustom->reset();
}

void MainWindow::on_pushButton_Custom_clicked()
{
    QVector<Edge> contains;
    Edge temp;
    QSqlQuery qry;
    QStringList items;
    QString tt;
    QString queryD;
    QString totalDist;

    QString start = ui->comboBoxNames->currentText();
    int count = ui->spinBoxNum->value();

    // gets index of stadium
    int strInd = d_dij.getIndex(start);

    d_dij.dijkstra(mat,strInd);

    QVector<Edge> endPath = d_dij.getPath();
    //int stop = endPath.size();

    qry.exec("select * from Stadiums");
    while(qry.next())
    {
        tt = qry.value(0).toString();
        items << tt;
    }
    qry.finish();

    // reset Dodger DB
    qry.prepare("DELETE FROM Dodger");
    qry.exec();
    // reset Custom DB
    qry.prepare("DELETE FROM Custom");
    qry.exec();

    for (int j = 0; j < count; j++)
    {
        qry.prepare("INSERT INTO Dodger (Start, End, Distance) "
                     "VALUES (:Start, :End, :Distance)");

        // used to insert path into DB
        for (int i = 0; i < endPath.size(); i++)
        {
            qry.bindValue(":Start", endPath.at(i).str);
            qry.bindValue(":End", endPath.at(i).end);
            qry.bindValue(":Distance", endPath.at(i).weight);
            qry.exec();
        }
        qry.clear();

        QString destStadium = QInputDialog::getItem(this, tr("Select your destination."),
                                                              tr("Stadium Name:"), items);

        // used to error check that selected destination
        // has not been selected yet
        for (int i = 0; i < contains.size(); i++)
        {
            if (destStadium == contains.at(i).end)
            {
                QMessageBox::critical(this,"","Already selected!");
                destStadium = QInputDialog::getItem(this, tr("Select your destination."),
                                                          tr("Stadium Name:"), items);
            }
        }

        // gets min distance from start
        queryD = "select Start, End, Distance from Dodger WHERE End = '" + destStadium + "'";

        qry.exec(queryD);
        if (qry.next())
        {
            temp.str = qry.value(0).toString();
            temp.end = qry.value(1).toString();
            start = qry.value(1).toString();
            temp.weight = qry.value(2).toInt();
            contains.push_back(temp);
        }
        qry.finish();

        qry.prepare("INSERT INTO Custom (Start, End, Distance) "
                     "VALUES (:Start, :End, :Distance)");

        // used to insert path into custom DB
        qry.bindValue(":Start", temp.str);
        qry.bindValue(":End", temp.end);
        qry.bindValue(":Distance", temp.weight);
        qry.exec();
        qry.clear();

        // reset Dodger DB
        qry.prepare("DELETE FROM Dodger");
        qry.exec();

        // resets with new start
        start = temp.end;
        strInd = d_dij.getIndex(start);
        d_dij.dijkstra(mat,strInd);
        endPath.clear();
        endPath = d_dij.getPath();
    }

    // outputs path from custom db
    queryD = "select * from Custom;";
    ui->tableViewCustom->setModel(m_controller->getStadiumsQueryModel(queryD));

    //calculates total distances traveled
    qry.exec("select SUM(Distance) from Custom;");
    if (qry.next())
    {
        totalDist = qry.value(0).toString();
    }
    qry.finish();

    qDebug() << totalDist;

    ui->labelDist->setText("Total Distance: " + totalDist + " miles");

    ui->tableViewCustom->resizeRowsToContents();
    ui->tableViewCustom->reset();

    qDebug() << "testing";
    for (int i = 0; i < contains.size(); i++)
    {
        qDebug() << contains.at(i).str << " " << contains.at(i).end << " " << contains.at(i).weight;
    }
}

void MainWindow::on_pushButtonStart_clicked()
{
    QStringList items;
    QString totalDist;
    QString tt;
    QSqlQuery qry;
    QString start = ui->comboBoxNames->currentText();
    int count = ui->spinBoxNum->value();
    QString choosen[count];

    // reset Dodger DB
    qry.prepare("DELETE FROM Custom");
    qry.exec();

    ui->tableViewCustom->reset();
    customPath.clear();

    //qry.exec("select DISTINCT OriginatedStadium from StadiumDistances");
    qry.exec("select * from Stadiums");
    while(qry.next())
    {
        tt = qry.value(0).toString();
        items << tt;
    }
    qry.finish();

    choosen[0] = start;
    for (int i = 1; i < count; i++)
    {
        choosen[i] = QInputDialog::getItem(this, tr("Select your destination."),
                                                 tr("Stadium Name:"), items);

        for (int j = 0; j < i; j++)
        {
            if (choosen[i] == choosen[j])
            {
                QMessageBox::critical(this,"","Already selected!");
                choosen[j] = QInputDialog::getItem(this, tr("Select your destination."),
                                                          tr("Stadium Name:"), items);
            }
        }
    }
    pathPlanner(choosen,count);

    qry.prepare("INSERT INTO Custom (Start, End, Distance) "
                 "VALUES (:Start, :End, :Distance)");

    for (int i = 0; i < customPath.size(); i++)
    {
        // used to insert path into custom DB
        qry.bindValue(":Start", customPath.at(i).str);
        qry.bindValue(":End", customPath.at(i).end);
        qry.bindValue(":Distance", customPath.at(i).weight);
        qry.exec();
    }
    qry.clear();

    QString queryD = "select * from Custom;";
    ui->tableViewCustom->setModel(m_controller->getStadiumsQueryModel(queryD));

    //calculates total distances traveled
    qry.exec("select SUM(Distance) from Custom;");
    if (qry.next())
    {
        totalDist = qry.value(0).toString();
    }
    qry.finish();

    qDebug() << totalDist;

    ui->labelDist->setText("Total Distance: " + totalDist + " miles");

    ui->tableViewCustom->resizeRowsToContents();
    ui->tableViewCustom->reset();
}

void MainWindow::pathPlanner(QString str[], int c)
{
    QVector<Edge> tempPath;
    QSqlQuery qry;
    Edge temp;
    QString start = str[0];
    int index = d_dij.getIndex(start);

    qDebug() << "start : index " << start << " " << index << "\n";

    d_dij.dijkstra(mat,index);

    QVector<Edge> endPath = d_dij.getPath();

    if (customPath.size() == c - 1)
    {
        return;
    }

    // reset Dodger DB
    qry.prepare("DELETE FROM Dodger");
    qry.exec();

    qry.prepare("INSERT INTO Dodger (Start, End, Distance) "
                 "VALUES (:Start, :End, :Distance)");

    // used to insert path into DB
    for (int i = 0; i < endPath.size(); i++)
    {
        qry.bindValue(":Start", endPath.at(i).str);
        qry.bindValue(":End", endPath.at(i).end);
        qry.bindValue(":Distance", endPath.at(i).weight);
        qry.exec();
    }
    qry.clear();

    for (int i = 1; i < c; i++)
    {
        // gets min distance from start
        QString queryD = "select Start, End, MIN(Distance) from Dodger WHERE End = '" + str[i] + "'";

        qry.exec(queryD);
        if (qry.next())
        {
            temp.str = start;
            temp.end = str[i];
            temp.weight = qry.value(2).toInt();
            tempPath.push_back(temp);
        }
        qry.finish();
    }

    for (int i = 0; i < tempPath.size(); i++)
    {
        qDebug() << tempPath.at(i).str << " " << tempPath.at(i).end << " " << tempPath.at(i).weight;
    }

    int min;
    for (int i = 0; i < tempPath.size(); i++)
    {
        min = i;
        for (int j = i+1; j < tempPath.size(); j++)
        if (tempPath.at(j).weight < tempPath.at(min).weight)
        {
            min = j;
        }
        tempPath.swapItemsAt(i,min);
    }

    qDebug() << "\nordering";
    for (int i = 0; i < tempPath.size(); i++)
    {
        qDebug() << tempPath.at(i).str << " " << tempPath.at(i).end << " " << tempPath.at(i).weight;
    }
    qDebug() << "\n";

    if (tempPath.begin()->weight == 0)
    {
        tempPath.pop_front();
    }

    temp.str = tempPath.begin()->str;
    temp.end = tempPath.begin()->end;
    temp.weight = tempPath.begin()->weight;

    customPath.push_back(temp);

    for (int i = 0; i < c; i++)
    {
        qDebug() << str[i];
    }

    str->remove(start);
    str->shrink_to_fit();
    qDebug() << "\npoop ";
    for (int i = 0; i < tempPath.size(); i++)
    {
        str[i] = tempPath.at(i).end;
        qDebug() << str[i];
    }

    qDebug() << "\ncustom test " << customPath.size();
    for (int i = 0; i < customPath.size(); i++)
    qDebug() << customPath.at(i).str << " " << customPath.at(i).end << " " << customPath.at(i).weight;

    pathPlanner(str, c);
}
