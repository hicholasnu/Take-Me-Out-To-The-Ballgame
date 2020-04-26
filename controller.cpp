#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent) {

    m_database = QSqlDatabase::addDatabase("QSQLITE");
    QString databasePath = "/Users/alvarohernandez/Desktop/CS1D project 2/Take-Me-Out-To-The-Ballgame-alvaro/Stadiums.db";
    m_database.setDatabaseName(databasePath);

    if (!m_database.open()) {

        qDebug() << "Problem opening the database!";
    }
    else {

        qDebug() << "DATABASE IS OPEN.";
    }

    createTables();

}

Controller::Controller(Controller &controller)
    :Controller() {

}

Controller::~Controller() {

    m_database.close();
}

void Controller::createTables() {

    QSqlQuery qry;
    QString createStadiumsTable =
    "create table IF NOT EXISTS  Stadiums("
    "'StadiumName'       text,            "
    "'SeatingCapacity'   integer,         "
    "'Location'          text,            "
    "'PlayingSurface'    text,            "
    "'TeamName'          text,            "
    "'League'            text,            "
    "'DateOpened'        integer,         "
    "'DistanceToCenterField'  integer,         "
    "'BallparkTypology'         text,            "
    "'RoofType'          text             "
    ");                                   ";

    qry.prepare(createStadiumsTable);

    if (!qry.exec()) {

        qDebug() << "ERROR: createTable(): STADIUMS" << endl;
    }
    else {

        qDebug() << "STADIUMS TABLE IS CREATED." << endl;
    }

    qry.clear();

    //========================================
    // Creating login table
    QString createLoginTable =
    "create table IF NOT EXISTS Login("
    "Username          text,    "
    "Password          text     "
    ");                         ";

    qry.prepare(createLoginTable);

    if (!qry.exec()) {

        qDebug() << "ERROR: createTable(): Login" << endl;
    }
    else {

        qDebug() << "LOGIN TABLE IS CREATED.";
    }

    qry.clear();

    //========================================
    // Creating Dodger table for dijkstra
    QString dodgerTable =
            "create table IF NOT EXISTS Dodger("
            "'Start'     text, "
            "'End'    text, "
            "'Distance'               integer"
            ");";


    qry.prepare(dodgerTable);

    if (!qry.exec()) {

        qDebug() << "ERROR: createTable(): dodgerTable" << endl;
    }
    else {

        qDebug() << "dodgerTable IS CREATED.";
    }

    qry.clear();

//    qry.exec("insert into Login (Username, Password) values ('admin', 'd82494f05d6917ba02f7aaa29689ccb444bb73f20380876cb05d1f37537b7892')");
//    qry.exec("insert into Login (Username, Password) values ('user', 'e172c5654dbc12d78ce1850a4f7956ba6e5a3d2ac40f0925fc6d691ebb54f6bf')");

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

