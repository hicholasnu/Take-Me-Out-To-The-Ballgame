#include "trip.h"

Trip::Trip(QObject *parent) : QObject(parent)
{
    totalDistance = 0;
}

float Trip::setTotalDistance()
{
    return totalDistance;
}

void Trip::addTotalDistance(float distance)
{
    totalDistance = totalDistance + distance;
}

QString Trip::getStartTeam()
{
    return startTeam;
}

void Trip::setStartTeam(QString name)
{
    startTeam = name;
}

QString Trip::getEndTeam()
{
    return endTeam;
}

void Trip::setEndTeam(QString name)
{
    endTeam = name;
}

