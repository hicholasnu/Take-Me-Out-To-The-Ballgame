#ifndef DATABASE_H
#define DATABASE_H

#include <QMainWindow>
#include <QApplication>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlDriver>
#include <QSqlQuery>
#include <QSqlError>
#include <QMessageBox>
#include <QKeyEvent>

class Database : public QObject
{
    Q_OBJECT
public:
    explicit Database(QObject *parent = nullptr);

    Database(Database& m_database);

    ~Database();

    void createTable();

private:
    QSqlDatabase m_database;
};

#endif // DATABASE_H
