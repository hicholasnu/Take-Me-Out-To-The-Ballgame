#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Database *database, QWidget *parent = nullptr);
    ~MainWindow();
    void changeToAdmin();
    void changetoUser();
    void keyPressEvent(QKeyEvent* pe);

private slots:
    void on_Loginbutton_clicked();

    void on_Canclebutton_clicked();

    void on_admin_logout_clicked();

    void on_user_logout_clicked();

private:
    Ui::MainWindow *ui;
    Database *m_database;
    int page = 0;
};
#endif // MAINWINDOW_H
