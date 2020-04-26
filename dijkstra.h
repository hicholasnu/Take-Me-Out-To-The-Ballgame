#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <QString>
#include <limits.h>
#include <stdio.h>
#include <QVector>

struct Edge
{
    QString str;
    QString end;
    bool discoveryEdge;
    int weight;

    Edge()
    {
        str = "";
        end = "";
        discoveryEdge = false;
        weight = 0;
    }
};

class Dijkstra
{
public:
    Dijkstra();
    void intialize(QString v[]);
    int minDistance(int dist[], bool sptSet[]);
    void printSolution(int dist[], int n);
    void dijkstra(int graph[][30], int src);
    QVector<Edge> getPath();
private:
    QString vertices[30];
    QString startCit;
    QVector<Edge> shortestPath;
};

#endif // DIJKSTRA_H
