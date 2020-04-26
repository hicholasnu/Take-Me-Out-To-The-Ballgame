#ifndef TRIP_H
#define TRIP_H

#include<QMap>
#include<QVector>
#include "team.h"

class Trip : public QObject
{
    Q_OBJECT
public:
    explicit Trip(QObject *parent = nullptr);

    float setTotalDistance();

    void addTotalDistance(float distance);

    QString getStartTeam();

    void setStartTeam(QString name);

    QString getEndTeam();

    void setEndTeam(QString name);

    QString startTeam;
    QString endTeam;
    float totalDistance;
};

#endif // TRIP_H
