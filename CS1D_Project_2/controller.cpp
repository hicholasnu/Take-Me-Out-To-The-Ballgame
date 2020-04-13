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

    qDebug() << "TEST" << endl;

    QSqlQuery qry;

    QString createStadiumsTable =
    "create table IF NOT EXISTS  Stadiums("
    "'Stadium Name'       text,           "
    "'Seating Capacity'   integer,        "
    "'Location'           text,           "
    "'Playing Surface'    text,           "
    "'Team Name'          text,           "
    "'League'             text,           "
    "'Date Opened'        integer,        "
    "'Distance To Center' integer,        "
    "'Ballpark Typology'  text,           "
    "'Roof Type'          text            "
    ");                                 ";

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
    qry.prepare("select 'Stadium Names' from Stadiums;");

    if (!qry.exec()) {

        qDebug() << "ERROR: getStadiumQueryOnStartModel" << endl;
    }
    model->setQuery(qry);

    return model;

}

QSqlQueryModel *Controller::getStadiumQueryOnStartModel() {

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select * from Stadiums;");

    if (!qry.exec()) {

        qDebug() << "ERROR: getStadiumQueryOnStartModel" << endl;
    }
    model->setQuery(qry);

    return model;
}
