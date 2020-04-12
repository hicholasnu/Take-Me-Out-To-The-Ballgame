#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(Database *database, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , m_database(database)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentWidget(ui->Login);
    ui->Login->setMinimumSize(700, 700);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Loginbutton_clicked()
{
    QString username = ui->username ->text();
    QString password = ui->password->text();

    QSqlQuery qry;
    // RANK 2 IS USED FOR ADMINS
    // RANK 1 IS USED FOR STUDENTS
    qry.prepare("select * from login where username ='"+username+"' and password ='"+password+"' and rank= '2'");
    if (qry.exec())
    {
        int count = 0;
        while (qry.next())
        {
            count++;
        }
           if(count == 1)
           {
            QMessageBox::information(this, "Login", "Username and Password is correct");
            changeToAdmin();
            this->ui->username->setText("");
            this->ui->password->setText("");
           }
           else if (count!= 1)
           {
               if(qry.exec("select * from login where username ='"+username+"' and password ='"+password+"' and rank= '1'"))
                   count  = 0;
                    while(qry.next())
                    {
                        count++;
                    }
                    if (count == 1)
                    {
                       QMessageBox::information(this,"Login", "Username and Password is correct");
                       changetoUser();
                       this->ui->username->setText("");
                       this->ui->password->setText("");
                    }
                    else
                    {
                        QMessageBox::warning(this,"Login","Username and password is not correct");
                        this->ui->username->setText("");
                        this->ui->password->setText("");
                    }
           }
    }
}

void MainWindow::on_Canclebutton_clicked()
{
    ui->username->clear();
    ui->password->clear();
}

void MainWindow::keyPressEvent(QKeyEvent* pe)
{
    if(page == 0)
    {
        if(pe->key() == Qt::Key_Return)
        {
            on_Loginbutton_clicked();
        }
    }
}

void MainWindow::changeToAdmin()
{
    ui->stackedWidget->setCurrentWidget(ui->Admin_page);
    page++;
}

void MainWindow::changetoUser()
{
    ui->stackedWidget->setCurrentWidget(ui->User_page);
}

void MainWindow::on_admin_logout_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Login);
    page = 0;
}

void MainWindow::on_user_logout_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->Login);
    page = 0;
}
