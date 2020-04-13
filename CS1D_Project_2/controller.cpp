#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent) {

    m_database = QSqlDatabase::addDatabase("QSQLITE");
    QString databasePath = "C://Users//Nicholas//Documents//GitHub//Take-Me-Out-To-The-Ballgame//Stadiums.db";
    m_database.setDatabaseName(databasePath);

    if (!m_database.open()) {

        qDebug() << "Problem opening the database!";
    }
    else {

        qDebug() << "DATABASE IS OPEN.";
    }

    createTable();
}

Controller::Controller(Controller &controller)
    :Controller() {

}

Controller::~Controller() {

    m_database.close();
}

void Controller::createTable() {

    QSqlQuery qry;
    QString createStadiumsTable =
    "create table IF NOT EXISTS  Stadiums("
    "'StadiumName'       text,            "
    "'SeatingCapacity'   integer,         "
    "'Location'           text,           "
    "'PlayingSurface'    text,            "
    "'TeamName'          text,            "
    "'League'             text,           "
    "'DateOpened'        integer,         "
    "'DistanceToCenter' integer,          "
    "'BallparkTypology'  text,            "
    "'RoofType'          text             "
    ");                                   ";

    qry.prepare(createStadiumsTable);

    if(!qry.exec()) {

        qDebug() << "ERROR: createTable()" << endl;
    }
    else {

        qDebug() << "TABLE IS CREATED.";
    }

    qry.clear();
}

QSqlQueryModel *Controller::getStadiumNamesQueryOnStartModel() {

    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;

    qry.prepare("select StadiumName from Stadiums;");

    if (!qry.exec()) {

        qDebug() << "ERROR: getStadiumNamesQueryOnStartModel()" << endl;
    }
    model->setQuery(qry);

    return model;

}

QSqlQueryModel *Controller::getStadiumQueryOnStartModel() {

    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;

    qry.prepare("select * from Stadiums;");

    if (!qry.exec()) {

        qDebug() << "ERROR: getStadiumQueryOnStartModel()" << endl;
    }
    model->setQuery(qry);

    return model;
}

QSqlQueryModel *Controller::getStadiumsQueryModel(QString query) {

    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare(query);

    if (!qry.exec()) {

        qDebug() << "ERROR: getQueryModel(" << query << ")";
    }

    model->setQuery(qry);

    return model;
}

