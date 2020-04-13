#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent) {

    m_database = QSqlDatabase::addDatabase("QSQLITE");
    QString databasePath = "C://Users//krist//Documents//GitHub//Take-Me-Out-To-The-Ballgame//Stadiums.db";
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


    //=========================================
    // Creating the login table
    QString createLoginTable =
    "create table IF NOT EXISTS login(                             "
    "username        varchar(50) primary key,                      "
    "password        varchar(100),                                  "
    "rank            integer                                       "
    ");                                                            ";

    if(!qry.exec(createLoginTable))
    {
        qDebug() << "Problem creating Login table" << endl << endl;
    }
    qry.clear();

    qry.exec("insert into login (username, password, rank) values ('admin', 'd82494f05d6917ba02f7aaa29689ccb444bb73f20380876cb05d1f37537b7892', '2')");
    qry.exec("insert into login (username, password, rank) values ('user', 'e172c5654dbc12d78ce1850a4f7956ba6e5a3d2ac40f0925fc6d691ebb54f6bf', '1')");

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
