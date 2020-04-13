#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Controller *controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      m_controller(controller)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->StudentScreen);

    ui->tableviewAllStadiums->setModel(m_controller->getStadiumQueryOnStartModel());
    ui->tableviewAllStadiums->resizeColumnsToContents();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
}

void MainWindow::loadComboBoxWithStadiumNames() {

}

void MainWindow::on_comboBox_activated(const QString &arg1)
{

}
