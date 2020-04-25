#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "graph.h"
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

private slots:

    void on_pushButtonLogin_clicked();

    void on_pushButtonResetLogin_clicked();

    void on_comboBoxChooseTeamName_activated(const QString &arg1);

    void on_pushButtonSortByTeamNames_clicked();

    void on_pushButtonSortByStadiumNames_clicked();

    void on_comboBoxChooseLeague_activated(const QString &arg1);

    void on_pushButtonSortByBallparkTypology_clicked();

    void on_comboBoxChooseRoofType_activated(const QString &arg1);

    void on_pushButtonSortByDateOpened_clicked();

    void on_pushButtonSortBySeatingCapacity_clicked();

    void on_pushButtonSortByGreatestFromCenter_clicked();

    void on_pushButtonSortByLeastFromCenter_clicked();

    void on_pushButtonResetStadiumsTable_clicked();

    void resetSortLabel(QString label);

    void fillStadiumsComboBoxes();

    void on_pushButtonUserLogout_clicked();

    void on_pushButtonMainWin_clicked();

    void on_pushButtonLogOut_clicked();

    void on_pushButtonPlan_clicked();

    void on_pushButtonDodger_clicked();

private:
    Ui::MainWindow *ui;
    Controller *m_controller;
    Graph g_graph;
};
#endif // MAINWINDOW_H
