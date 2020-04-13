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

private slots:
    void on_pushButton_clicked();
    void loadComboBoxWithStadiumNames();
    void on_comboBox_activated(const QString &arg1);

private:
    Ui::MainWindow *ui;
    Controller *m_controller;
};
#endif // MAINWINDOW_H
