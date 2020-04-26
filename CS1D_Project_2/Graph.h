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

    Vertex(QString name) : name(name){}
};

class Compare
{
public:
    bool operator()(const Vertex& first, const Vertex& second)
    {
        return (first.distance > second.distance);
    }
};

template<class Type>
class Graph
{
public:
    Graph();
    ~Graph(){}

    void addEdge(Type vertex1, Type vertex2, int weight);

    void addVertex(Type vertex);

    bool vertexExists(Type vertex);

    int getWeight(Type vertex1, Type vertex2);

    void printAdjList();

    void DFS(Type vertex);

    void BFS(Type vertex);

    void Dijkstra(Type vertex);

    int MST(Type vertex);

    void recursiveDijkstra(Type vertex, int timesToRecurse);

    void startSpecificRoute(Type vertex, int timesToRecurse);

    // void printEdgeListType();

    QVector<QString> getOrder();

    int getTotalDistance();

    int getDistance(Type vertex);

    void resetDistance();

    QVector<QString> nameVector;
    int numberOfVertex;
    QVector<Vertex> adjList;
    int totalDistance;
    int location;
    QVector<QString> order;

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

    int findVertexIndex(Type vertex)
    {
        for(int i = 0; i < adjList.size(); ++i)
        {
            if(adjList[i].name == vertex)
            {
                return i;
            }
        }

        return -1;
    }

    bool checkAvailableVertices(Type vertex)
    {
        //Gets the specified vertex inside the adjacent list
        QVector<Edge> *ptr = &(adjList[findVertexIndex(vertex)].adajcent);

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

    bool isInList(Type vertex)
    {
        for(int i = 0; i < nameVector.size(); i++)
        {
            if(nameVector.at(i) == vertex)
               return true;
        }
        return false;
    }

    void setReverse(Type vertex1, Type vertex2)
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

    void setDiscovery(Type vertex1, Type vertex2);

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


    void recursiveDijkstra(Type vertex,int position, int length)
    {
        adjList[findVertexIndex(vertex)].visited = true;

        if(position != length)
        {
            Dijkstra(vertex);
            location = findSmallest();
            totalDistance += adjList[location].distance;
            qDebug() << "Closest Stadium: " << adjList[location].name;
            order.append(adjList[location].name);
            recursiveDijkstra(adjList[location].name, position+1, length);
        }
        qDebug() << totalDistance;
    }


    void startSpecificRoute(Type vertex, int position, int length)
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
