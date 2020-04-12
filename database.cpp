#include "database.h"

Database:: Database(QObject *parent) : QObject(parent)
{
    // Connect to database
    m_database = QSqlDatabase::addDatabase("QSQLITE");

    QString path = "C://Users//krist//Desktop//QT//login//baseball.db";

    m_database.setDatabaseName(path);

    if(!m_database.open())
    {
        qDebug() << "Can't open database" << endl << endl;
    }

    createTable();
}

Database::Database(Database &m_database)
    :Database()
{
}

Database::~Database()
{
    m_database.close();
}

void Database::createTable()
{
    QSqlQuery qry;

    // Creating the login table
    QString createLoginTable =
    "create table IF NOT EXISTS login(                             "
    "username        varchar(50) primary key,                      "
    "password        varchar(50),                                  "
    "rank            integer                                       "
    ");                                                            ";

    if(!qry.exec(createLoginTable))
    {
        qDebug() << "Problem creating Login table" << endl << endl;
    }
    qry.clear();

    qry.exec("insert into login (username, password, rank) values ('admin', 'admin', '2')");
    qry.exec("insert into login (username, password, rank) values ('user', 'user', '1')");


}
