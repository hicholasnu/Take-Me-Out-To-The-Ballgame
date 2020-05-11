#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "controller.h"
#include "graph.h"

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

    void on_pushButtonResetAllSouvenirs_clicked();

    void on_comboBoxChooseStadium_activated(const QString &arg1);

    void resetSouvenirScreenLabels();

    void on_tableviewAllSouvenirs_activated(const QModelIndex &index);

    void on_pushButtonDeleteSouvenir_clicked();

    void on_pushButtonEditPrice_clicked();

    void on_pushButtonAddNewSouvenir_clicked();

    void on_pushButtonReturnToMaintenanceScreen_clicked();

    void on_pushButtonReturnToMaintenanceScreen_2_clicked();

    void on_pushButtonChangeToSouvenirs_clicked();

    void on_pushButtonChangeToStadiums_clicked();

    void on_pushButtonResetAllStadiumsTableADMIN_clicked();

    void on_comboBoxChooseTeamNameADMIN_activated(const QString &arg1);

    void on_pushButtonEditData_clicked();

    void on_pushButtonBFS_clicked();

    void on_pushButtonDFS_clicked();

    void on_pushButtonMST_2_clicked();

    void hideInputFieldsADMIN();

    void on_pushButtonUploadNewStadium_clicked();

    void on_pushButtonReturnFromDFSBFSMST_clicked();

    void on_pushButtonUploadNewStadiumDistances_clicked();

    void on_pushButtonLogoutFromAdminMaintenance_clicked();

    void on_pushButtonToUserScreen_clicked();

    void on_pushButtonReturnFromShortestTripScreen_clicked();

    void on_pushButtonReturnFromCustomTripScreen_clicked();

    void on_pushButtonLogoutFromUserSelection_clicked();

    void on_pushButtonToDFSBFSMSTScreen_clicked();

    void on_pushButtonToShortestTripScreen_clicked();

    void on_pushButtonToCustomTripScreen_clicked();


    void on_tableViewCustomTrip_activated(const QModelIndex &index);

    void on_pushButtonResetDisplaySelectedTrip_clicked();

    void on_pushButtonCreateCustomDirectTrip_clicked();

    void on_pushButtonDodgerStadium_clicked();

    void on_pushButtonMarlinsPark_clicked();

private:
    Ui::MainWindow *ui;
    Controller *m_controller;

    static int dataColumn;
    Graph graph;

};
#endif // MAINWINDOW_H
