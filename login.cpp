#include "login.h"

Login:: Login(QObject *parent) : QObject(parent)
{

}

QString Login::getUsername() const
{
    return username;
}

void Login::setUsername(const QString & username)
{
    this->username = username;
}

QString Login::getPassword() const
{
    return password;
}

void Login::setPassword(const QString &password)
{
    this->password = password;
}

int Login::getRank() const
{
    return rank;
}

void Login::setRank(int rank)
{
    this->rank = rank;
}
