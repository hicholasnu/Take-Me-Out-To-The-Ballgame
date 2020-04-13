#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Controller *controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      m_controller(controller)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->StudentScreen);

    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel("select * from Stadiums;"));
    ui->tableviewAllStadiums->resizeColumnsToContents();

    ui->comboBoxChooseTeamName->setModel(m_controller->getStadiumsQueryModel("select DISTINCT TeamName from Stadiums ORDER BY TeamName ASC;"));
    ui->comboBoxChooseLeague->setModel(m_controller->getStadiumsQueryModel("select DISTINCT League from Stadiums ORDER BY League ASC;"));
    ui->comboBoxChooseRoofType->setModel(m_controller->getStadiumsQueryModel("select DISTINCT RoofType from Stadiums ORDER BY RoofType ASC;"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBoxChooseTeamName_activated(const QString &arg1)
{
    QString query = "select TeamName, * EXCEPT TeamName from Stadiums WHERE TeamName = '"+arg1+"';";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortByTeamNames_clicked()
{
    QString query = "select TeamName, StadiumName from Stadiums ORDER BY TeamName ASC;";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortByStadiumNames_clicked()
{
    QString query = "select StadiumName, TeamName from Stadiums ORDER BY StadiumName ASC;";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_comboBoxChooseLeague_activated(const QString &arg1)
{
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
    QString query = "select BallparkTypology, StadiumName, TeamName from Stadiums ORDER BY BallparkTypology ASC;";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_comboBoxChooseRoofType_activated(const QString &arg1)
{
    QString query = "select TeamName from Stadiums WHERE RoofType = '"+arg1+"' ORDER BY TeamName ASC;";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortByDateOpened_clicked()
{
    QString query = "select DateOpened, StadiumName, TeamName from Stadiums ORDER BY DateOpened ASC";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}
