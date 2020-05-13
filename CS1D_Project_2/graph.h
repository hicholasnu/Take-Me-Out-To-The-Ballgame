#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <QString>
#include <list>
#include <QVector>
#include <queue>
#include <QDebug>
#include <QSqlQuery>

enum EdgeType {DISCOVERY, BACK, CROSS, REPEAT, UNDISCOVERED};

struct Edge
{
    QString destination;
    int weight;
    EdgeType type;

    Edge() : destination(""), weight(0), type(UNDISCOVERED){}
};

struct Vertex
{
    QVector<Edge> adjacent;
    QString name;
    bool visited = false;
    int distance;
};

class Compare
{
public:
    bool operator()(const Vertex& first, const Vertex& second)
    {
        return (first.distance > second.distance);
    }
};

class Graph
{
public:
    Graph();
    ~Graph(){}

    void addEdge(QString vertex1, QString vertex2, int weight);

    void addVertex(QString vertex);

    bool vertexExists(QString vertex);

    int getWeight(QString vertex1, QString vertex2);

    void printAdjList();

    int findVertexIndex(QString vertex);

    void DFS(QString vertex);

    void BFS(QString vertex);

    void Dijkstra(QString vertex);

    int MST(QString vertex);

    void recursiveDijkstra(QString vertex, int timesToRecurse);

    void startSpecificRoute(QString vertex, int timesToRecurse);

    QVector<QString> getOrder();

    QVector<QString> getOrder1();

    QVector<QString> getOrder2();

    QVector<QString> getTraversalList();

    QVector<int> getDistanceList();

    int getTotalDistance();

    int getShortestDistance();

    int getDistance(QString vertex);

    void resetDistance();

    void loadGraph(Graph &g);

    void resetAll();

    QVector<QVector<int>> createAdjMatrix();

    QVector<QString> nameVector;
    int numberOfVertex;
    QVector<Vertex> adjList;
    int totalDistance;
    int shortestDistance;
    int location;
    QVector<QString> order;
    QVector<QString> order1;
    QVector<QString> order2;
    QVector<QString> traversalList;
    QVector<int> distanceList;

protected:

    int findSmallestEdgeIndex(QVector<Edge> *ptr)
    {
        int index = 0;
         int weight = 0;

         // Find the very first edge that is unvisited
         for(int i = 0; i < ptr->size(); ++i)
         {
             if(!adjList[findVertexIndex((*ptr)[i].destination)].visited)
             {
                 index = i;
                 weight = (*ptr)[i].weight;
                 break;
             }
         }

         // Searches the rest of the edge list to finds the smallest weight
         for(int i = index + 1; i < ptr->size(); ++i)
         {
             if(!adjList[findVertexIndex((*ptr)[i].destination)].visited && (*ptr)[i].weight < weight)
             {
                 index = i;
                 weight = (*ptr)[i].weight;
             }
         }

         return index;
    }


    bool checkAvailableVertices(QString vertex)
    {
        //Gets the specified vertex inside the adjacent list
        QVector<Edge> *ptr = &(adjList[findVertexIndex(vertex)].adjacent);

        // Return true if there is any unvisited vertex
        for(int i = 0; i < ptr->size(); ++i)
        {
            if(!adjList[findVertexIndex((*ptr)[i].destination)].visited)
            {
                return true;
            }
        }
        return false;
    }

    bool checkAvailableVertices(int adjListIndex)
    {
         // Gets the specified vertex from the adjacent list based on its index value
         QVector<Edge> *ptr = &(adjList[adjListIndex].adjacent);

         // Return true if there is any unvisited vertex
         for(int i = 0; i < ptr->size(); ++i)
         {
             if(!adjList[findVertexIndex((*ptr)[i].destination)].visited)
             {
                 return true;
             }
         }
         return false;
    }

    void DFS(int index)
    {
        adjList[index].visited = true;
        qDebug() << adjList[index].name << " --> ";
        order.append(adjList[index].name);

        while(checkAvailableVertices(index))
        {
            int edgeIndex = this->findSmallestEdgeIndex(&(adjList[index].adjacent));
            int vertexIndex = this->findVertexIndex(adjList[index].adjacent[edgeIndex].destination);

            //If the edge has never been used
            if(adjList[index].adjacent[edgeIndex].type == UNDISCOVERED)
            {
                adjList[index].adjacent[edgeIndex].type = DISCOVERY;
                setReverse(adjList[index].name, adjList[index].adjacent[edgeIndex].destination);
            }

            //Recursively call the DFS algorithm starting from the new vertex
            this->DFS(vertexIndex);
        }
    }

    void BFS(int index)
    {
        adjList[index].visited = true;
         qDebug() << adjList[index].name << " --> ";
         order.append(adjList[index].name);

         QVector<int> indexList;

         // Visits all adjacent vertices
         while(checkAvailableVertices(index))
         {
             int edgeIndex = this->findSmallestEdgeIndex(&(adjList[index].adjacent));
             int vertexIndex = this->findVertexIndex(adjList[index].adjacent[edgeIndex].destination);

             if(adjList[index].adjacent[edgeIndex].type == UNDISCOVERED)
             {
                 adjList[index].adjacent[edgeIndex].type = DISCOVERY;
                 setReverse(adjList[index].name, adjList[index].adjacent[edgeIndex].destination);
             }

             adjList[vertexIndex].visited = true;
             qDebug() << adjList[vertexIndex].name << " --> ";
             order.append(adjList[vertexIndex].name);
             indexList.push_back(vertexIndex);
         }

         // Visits all adjacent vertices if unvisited
         for(int i=0; i<indexList.size(); ++i)
         {
             while(checkAvailableVertices(indexList[i]))
             {
                 int edgeIndex = this->findSmallestEdgeIndex(&(adjList[indexList[i]].adjacent));
                 int vertexIndex = this->findVertexIndex(adjList[ indexList[i] ].adjacent[edgeIndex].destination);

                 if(adjList[indexList[i]].adjacent[edgeIndex].type == UNDISCOVERED)
                 {
                     adjList[indexList[i]].adjacent[edgeIndex].type = DISCOVERY;
                     setReverse(adjList[indexList[i]].name, adjList[indexList[i]].adjacent[edgeIndex].destination);
                 }

                 adjList[vertexIndex].visited = true;
                 qDebug() << adjList[vertexIndex].name << " --> ";
                 order.append(adjList[vertexIndex].name);
                 indexList.push_back(vertexIndex);
             }
         }
    }

    bool isInList(QString vertex)
    {
        for(int i = 0; i < nameVector.size(); i++)
        {
            if(nameVector.at(i) == vertex)
               return true;
        }
        return false;
    }

    void setReverse(QString vertex1, QString vertex2)
    {
        int index = 0;

        for(int i = 0; i < adjList.size(); i++) {
            if(adjList[i].name == vertex2)
            {
                index = i;
            }
        }

        for(int i = 0; i < adjList[index].adjacent.size(); i++)
        {
            if(adjList[index].adjacent[i].destination == vertex1)
            {
                adjList[index].adjacent[i].type = REPEAT;
            }
        }
    }

    void setDiscovery(QString vertex1, QString vertex2);

    int findSmallest()
    {
        int smallestCost = 999999;
        int smallestIndex;

        for(int i = 0; i < adjList.size(); i++)
        {
            if(adjList[i].distance < smallestCost && adjList[i].distance != 0 && !adjList[i].visited && isInList(adjList[i].name))
            {
                smallestCost = adjList[i].distance;
                smallestIndex = i;
            }
        }
        return smallestIndex;
    }


    void recursiveDijkstra(QString vertex,int position, int length)
    {
        adjList[findVertexIndex(vertex)].visited = true;

        if(position != length)
        {
            Dijkstra(vertex);
            location = findSmallest();
            shortestDistance += adjList[location].distance;
            qDebug() << "Closest Stadium: " << adjList[location].name;
            order2.append(adjList[location].name);
            recursiveDijkstra(adjList[location].name, position + 1, length);
        }
        qDebug() << shortestDistance;
    }


    void startSpecificRoute(QString vertex, int position, int length)
    {
        adjList[findVertexIndex(vertex)].visited = true;
         if(position != length)
         {
             Dijkstra(vertex);

             location = findVertexIndex(nameVector[position]);
             totalDistance += adjList[location].distance;
             qDebug() << "Going to: " << adjList[location].name;
             order.append(adjList[location].name);
             startSpecificRoute(adjList[location].name, position+1, length);
         }

         qDebug() << totalDistance;
    }

    void clearVisitedVertex()
    {
        for(int i = 0; i < adjList.size(); ++i)
        {
            adjList[i].visited = false;
        }
    }

    void clearEdgeType()
    {
        for (int i = 0; i < adjList.size(); ++i)
        {
            for(int j = 0; j < adjList[i].adjacent.size(); j++)
            {
                adjList[i].adjacent[j].type = UNDISCOVERED;
            }
        }
    }
};

#endif // GRAPH_H
