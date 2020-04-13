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

    ui->comboBoxStadiumNames->setModel(m_controller->getStadiumsQueryModel("select StadiumName from Stadiums"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_activated(const QString &arg1)
{

}

void MainWindow::on_comboBoxStadiumNames_currentIndexChanged(const QString &arg1)
{
//    QString query = "select * from Stadiums WHERE StadiumName = '"+arg1+"';";
//    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
}

void MainWindow::on_comboBoxStadiumNames_activated(const QString &arg1)
{
    QString query = "select * from Stadiums WHERE StadiumName = '"+arg1+"';";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButtonSortByTeamNames_clicked()
{
    QString query = "select TeamName, StadiumName from Stadiums";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

void MainWindow::on_pushButton_clicked()
{
    QString query = "select StadiumName, TeamName from Stadiums";
    ui->tableviewAllStadiums->setModel(m_controller->getStadiumsQueryModel(query));
    ui->tableviewAllStadiums->resizeColumnsToContents();
}
