#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <string>
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
    /**
     * @brief Graph - no-arg Constructor
     */
    Graph();

    /**
     * @brief ~Graph() - Destructor
     */
    ~Graph(){}

    /**
     * @brief addEdge - adding new Edges to the graph
     * @param vertex1 - QString value of starting vertex
     * @param vertex2 - QString value of ending vertex
     * @param weight - integer value of destination
     */
    void addEdge(QString vertex1, QString vertex2, int weight);

    /**
     * @brief addVertex - adding new Vertix to the graph
     * @param vertex - QString value of vertex
     */
    void addVertex(QString vertex);

    /**
     * @brief vertexExists - determine if the vertex exist in the graph
     * @param vertex - QString values of vertex
     * @return boolean value
     */
    bool vertexExists(QString vertex);

    /**
     * @brief getWeight - get distance between two vertices
     * @param vertex1 - QString value of vertex
     * @param vertex2 - QString value of vertex
     * @return integer value
     */
    int getWeight(QString vertex1, QString vertex2);

    /**
     * @brief printAdjList - display the adjacent martrix
     */
    void printAdjList();

    /**
     * @brief findVertexIndex - find corresponding index of the vertex
     * @param vertex - QString vertex of the value
     * @return integer value
     */
    int findVertexIndex(QString vertex);

    /**
     * @brief DFS - function performs DFS algorithm
     * @param vertex - QString value of vertex
     */
    void DFS(QString vertex);

    /**
     * @brief BFS - function performs BFS algorithm
     * @param vertex - QString value of vertex
     */
    void BFS(QString vertex);

    /**
     * @brief Dijkstra - function performs Dijkstra algorithm with adjacent list
     * @param vertex - QString value of vertex
     */
    void Dijkstra(QString vertex);

    /**
     * @brief MST - function performs MST algorithm
     * @param vertex - QString value of vertex
     * @return integer value
     */
    int MST(QString vertex);

    /**
     * @brief recursiveDijkstra - function performs recursive Dijkstra algorithm with adjacent list
     * @param vertex - QString value of vertex
     * @param timesToRecurse - integer value of counter
     */
    void recursiveDijkstra(QString vertex, int timesToRecurse);

    /**
     * @brief startSpecificRoute
     * @param vertex
     * @param timesToRecurse
     */
    void startSpecificRoute(QString vertex, int timesToRecurse);

    QVector<QString> getOrder();

    QVector<QString> getOrder1();

    QVector<QString> getOrder2();

    QVector<int> getDistanceList();

    int getTotalDistance();

    int getShortestDistance();

    int getDistance(QString vertex);

    void resetDistance();

    void loadGraph(Graph &g);

    /**
     * @brief DijkstraWithMatrix
     * @param size - integer value presents the matrix size
     * @param matrix - adjacent matrix
     * @param sc - starting point
     */
    void DijkstraWithMatrix(int size, QVector<QVector<int>> matrix, int sc);

    /**
     * @brief initialize
     */
    void initialize();

    /**
     * @brief getClosestUnmarkedNode
     * @return integer value
     */
    int getClosestUnmarkedNode();

    /**
     * @brief calculateDistance
     * @param vertices - adjacent matrix
     * @param size - size of the matrix
     */
    void calculateDistance(QVector<QVector<int>> matrix, const int size);

    /**
     * @brief output
     * @param start - QString array of all the starting point
     * @param size - size of the QString array
     * @param destinationIdx - index of destination value
     * @return integer value
     */
    int output(QString start[], const int size, int destinationIdx);

    /**
     * @brief printPath
     * @param node - index
     * @param start - QString array of all the starting point
     * @param strSize - size of the QString array
     */
    void printPath(int node, QString start[], const int strSize);

    QVector<QString> nameVector;
    int numberOfVertex;
    QVector<Vertex> adjList;
    int totalDistance;
    int shortestDistance;
    int location;
    QVector<QString> order;
    QVector<QString> order1;
    QVector<QString> order2;
    QVector<int> distanceList;

protected:

    int adjMatrix[100][100];
    int predecessor[100];
    int distance[100];
    bool mark[100];
    int source;
    int verticesIdx;
    int infinity = 99999;

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
             shortestDistance += adjList[location].distance;
             qDebug() << "Going to: " << adjList[location].name;
             qDebug() << shortestDistance;
             order2.append(adjList[location].name);
             startSpecificRoute(adjList[location].name, position + 1, length);
         }

         // qDebug() << shortestDistance;
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
