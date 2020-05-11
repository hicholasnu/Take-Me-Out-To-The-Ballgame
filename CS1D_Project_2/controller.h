#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlError>
#include <QtDebug>
#include <QMessageBox>
#include <QKeyEvent>
#include <QFileDialog>
#include <QItemDelegate>
#include <QSpinBox>
#include <QSize>
#include <QTableWidgetItem>


class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);

    Controller(Controller& controller);
    ~Controller();

    void createTables();
    void loadStadiums();

    void deleteSouvenir(QString souvenir, QString stadium);
    void editSouvenir(QString stadium, QString souvenir, double price);
    void createSouvenir(QString college, QString souvenir, double price);
    void editStadium(QString stadiumName, QString seatingCapacity, QString location, QString playingSurface, QString league, QString teamName, QString dateOpened, QString DistanceToCenterField, QString BallparkTypology, QString RoofType);

    void uploadStadiumFile();
    void uploadStadiumDistancesFile();

    QSqlQueryModel *getStadiumsQueryModel(QString query);
    QSqlQueryModel *getSouvenirsQueryModel(QString query);

private:
    QSqlDatabase m_database;
};

#endif // CONTROLLER_H
