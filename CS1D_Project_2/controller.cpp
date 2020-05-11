#include "controller.h"

Controller::Controller(QObject *parent) : QObject(parent) {

    m_database = QSqlDatabase::addDatabase("QSQLITE");
    QString databasePath = "C://Users//krist//Documents//GitHub//Take-Me-Out-To-The-Ballgame//Stadiums.db";
    //QString databasePath = "E://Documents//GitHub//Take-Me-Out-To-The-Ballgame//Stadiums.db";
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

//    qry.exec("insert into Login (Username, Password) values ('admin', 'd82494f05d6917ba02f7aaa29689ccb444bb73f20380876cb05d1f37537b7892')");
//    qry.exec("insert into Login (Username, Password) values ('user', 'e172c5654dbc12d78ce1850a4f7956ba6e5a3d2ac40f0925fc6d691ebb54f6bf')");


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

QSqlQueryModel *Controller::getSouvenirsQueryModel(QString query) {

    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;
    qry.prepare(query);

    if (!qry.exec()) {

        qDebug() << "ERROR: getQueryModel(" << query << ")";
    }

    model->setQuery(qry);

    return model;
}

void Controller::deleteSouvenir(QString souvenir, QString stadium) {

    QSqlQuery qry;
    qry.prepare("Delete from [Stadium Souvenirs] where Item = '"+souvenir+"' and Stadium = '"+stadium+"';");
//    qry.addBindValue(souvenir);

    if (!qry.exec()) {

        qDebug() << "Error deleting souvenir.";
    }
    else {

        qDebug() << souvenir << " deleted.";
    }
}

void Controller::editSouvenir(QString stadium, QString souvenir, double price) {

    QSqlQuery qry;
    qry.prepare("update [Stadium Souvenirs] set     "
                "Stadium            = ?,    "
                "Item               = ?,    "
                "Price              = ?     "
                "where Item         = ? and "
                "Stadium            = ?;    ");

    qry.addBindValue(stadium);
    qry.addBindValue(souvenir);
    qry.addBindValue(price);
    qry.addBindValue(souvenir);
    qry.addBindValue(stadium);

    if (!qry.exec()) {

        qDebug() << "Error editing " << souvenir << " from " << stadium;
    }
    else {

        qDebug() << souvenir << " from " << stadium << " updated!";
        qry.clear();
    }
}

void Controller::createSouvenir(QString stadium, QString souvenir, double price) {

    QSqlQuery qry;
    qry.prepare("insert into [Stadium Souvenirs]("
                "Stadium,                        "
                "Item,                           "
                "Price)                          "
                "values(?,?,?);                 ");

    qry.addBindValue(stadium);
    qry.addBindValue(souvenir);
    qry.addBindValue(price);

    if (!qry.exec()) {

        qDebug() << "Somethings wrong with create souvenir!";
    }
    else {

        qDebug() << "Souvenir created, dawg.";
        qry.clear();
    }
}

QSqlQueryModel *Controller::getTeamNamesAndStadiumsQueryModel() {

    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery qry;
    QString query;

    query = "select StadiumName, TeamName from Stadiums";
    qry.prepare(query);

    if (!qry.exec()) {

        qDebug() << "not working yo";
    }

    model->setQuery(qry);

    return model;
}


