#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent) {

    m_database = QSqlDatabase::addDatabase("QSQLITE");
    QString databasePath = "C://Users//Nicholas//Documents//GitHub//Take-Me-Out-To-The-Ballgame//college.db";
    m_database.setDatabaseName(databasePath);

    if (!m_database.open()) {

        qDebug() << "Problem opening the database!";
    }

}

Controller::Controller(Controller &controller)
    :Controller() {

}

Controller::~Controller() {

    m_database.close();
}

QSqlQueryModel *Controller::getStadiumQueryOnStartModel() {

    QSqlQueryModel* model = new QSqlQueryModel();

    QSqlQuery qry;
    qry.prepare("select * from Stadiums;");

    if(!qry.exec()) {

        qDebug() << "Error loading getStadiumQueryOnStart()" << endl;
    }

    model->setQuery(qry);

    return model;
}
