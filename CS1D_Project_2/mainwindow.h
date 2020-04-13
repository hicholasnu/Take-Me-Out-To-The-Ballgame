#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "controller.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Controller *controller, QWidget *parent = nullptr);
    ~MainWindow();
    void changeToAdmin();
    void changetoUser();
    void keyPressEvent(QKeyEvent* pe);

private slots:
    void on_pushButton_clicked();
    void loadComboBoxWithStadiumNames();
    void on_comboBox_activated(const QString &arg1);

    void on_pushButtonLogin_clicked();

    void on_pushButtonReset_clicked();

    void on_pushButtonLogout_clicked();

private:
    Ui::MainWindow *ui;
    Controller *m_controller;
    int page = 0;
};
#endif // MAINWINDOW_H
