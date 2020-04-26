#ifndef TRIP_H
#define TRIP_H

#include<QMap>
#include<QList>
#include "team.h"

struct vertex;

struct edge
{
    vertex* end1;
    vertex* end2;
    float distance;
    bool visited;
};

struct vertex
{
    QList<edge*> adjancent;
    QString name;
    bool visited = false;
    vertex(QString name) : name(name) {}
};

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
    QList<Team*> listofTeam;
};

#endif // TRIP_H
