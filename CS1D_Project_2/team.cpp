#include "team.h"

Team::Team(QObject *parent) : QObject(parent)
{

}


QString Team::getStartTeam() const
{
    return startTeam;
}

void Team::setStartTeam(const QString& name)
{
    startTeam = name;
}

QString Team::getEndTeam() const
{
    return endTeam;
}

void Team::setEndTeam(const QString& name)
{
    endTeam = name;
}

QString Team::getDistance() const
{
    return distance;
}

void Team::setDistance(QString distance)
{
    this->distance = distance;
}
