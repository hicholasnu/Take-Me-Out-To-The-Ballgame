#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Controller *controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      m_controller(controller)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->LoginScreen);
   // ui->stackedWidget->setCurrentWidget(ui->StudentScreen);
   // ui->tableviewAllStadiums->setModel(m_controller->getStadiumQueryOnStartModel());
   // ui->tableviewAllStadiums->resizeColumnsToContents();
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

void MainWindow::on_pushButtonLogin_clicked()
{
    QString username = ui->lineEditUsername ->text();
    QString password = ui->lineEditPassword->text();

    // Encrypte the password
    QByteArray encrypte_password (password.toStdString().c_str());
    encrypte_password.append(password);
    QString hashed_password = QCryptographicHash::hash(encrypte_password, QCryptographicHash::Sha256).toHex();
    // std::cout << hashed_password.toStdString() << std:: endl;

    QSqlQuery qry;
    // RANK 2 IS USED FOR ADMINS
    // RANK 1 IS USED FOR STUDENTS
    qry.prepare("select * from login where username ='"+username+"'");

    if(!qry.exec())
    {
        qDebug() << "Error";
    }
    else if(qry.exec("select * from login where password = '"+hashed_password+"'"))
    {
        if(username == "admin")
        {
            QMessageBox::information(this,"Login", "Username and Password is correct");
            changeToAdmin();
            this->ui->lineEditUsername->setText("");
            this->ui->lineEditPassword->setText("");

        }
        else
        {
            QMessageBox::information(this,"Login", "Username and Password is correct");
            changetoUser();
            this->ui->lineEditUsername->setText("");
            this->ui->lineEditPassword->setText("");

        }

    }
    else
    {
        QMessageBox::warning(this,"Login","Username and password is not correct");
        this->ui->lineEditUsername->setText("");
        this->ui->lineEditPassword->setText("");

    }

}


void MainWindow::keyPressEvent(QKeyEvent* pe)
{
    if(page == 0)
    {
        if(pe->key() == Qt::Key_Return)
        {
            on_pushButtonLogin_clicked();
        }
    }
}

void MainWindow::changeToAdmin()
{
    ui->stackedWidget->setCurrentWidget(ui->AdminScreen);
    page++;
}

void MainWindow::changetoUser()
{
    ui->stackedWidget->setCurrentWidget(ui->StudentScreen);
}

void MainWindow::on_pushButtonReset_clicked()
{
    ui->lineEditUsername->clear();
    ui->lineEditPassword->clear();
}

void MainWindow::on_pushButtonLogout_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->LoginScreen);
    page = 0;
}
