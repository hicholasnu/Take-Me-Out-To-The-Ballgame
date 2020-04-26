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
#include "trip.h"

class Controller : public QObject
{
    Q_OBJECT
public:
    explicit Controller(QObject *parent = nullptr);

    Controller(Controller& controller);
    ~Controller();

    void createTables();
    void loadStadiums();

    QSqlQueryModel *getStadiumNamesQueryOnStartModel();
    QSqlQueryModel *getStadiumQueryOnStartModel();
    QSqlQueryModel *getStadiumsQueryModel(QString query);


private:
    QSqlDatabase m_database;

};

#endif // CONTROLLER_H
