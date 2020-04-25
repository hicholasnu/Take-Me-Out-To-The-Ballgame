#ifndef GRAPH_H
#define GRAPH_H
#include <QString>
#include <QVector>
#include <QtDebug>

struct Edge
{
    QString s;
    QString e;
    bool discoveryEdge;
    int weight;

    Edge()
    {
        s = "";
        e = "";
        discoveryEdge = false;
        weight = 0;
    }
};

struct Vertex
{
    QString city;
    bool visited;
    QVector<Edge> edgeList;

    Vertex()
    {
        city = "";
        visited = false;
    }
};

class Graph
{
public:
    Graph();
    ~Graph();
    bool empty();
    int size();
    void insertVertex(QString city);
    unsigned int findVertex(QString city);
    void insertEdge(QString u, QString v, int weight);
    QVector<QString> vertices();
    QVector<QString> edges();
    void shortestPathsDijkstra(QString startingCity, QVector<QString> &T,int costs[], int parent[]);
    QVector<QString> returnPath(QString start, QString end, int parent[]);
    //int primMST(QString startingCity, QVector<QString> &mst);
    void resetGraph();

private:
    void findClosest(QVector<QString> &T, int costs[], int parent[]);
    int distanceFromStart(QString city, int costs[], int parent[]);
    //int smallestEdgeMST(QVector<QString> &mst);
    int smallestEdge(int vertex);
    int distanceBetween(int v1, int v2);
    unsigned int verticesVisited();
    unsigned int edgesDiscovered(int currVertex);
    QVector<Vertex> graph;
    QVector<QString> cityNames;
    int mstDistance;
};

#endif // GRAPH_H
