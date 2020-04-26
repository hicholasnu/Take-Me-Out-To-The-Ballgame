#include "Graph.h"

template <class Type>
Graph<Type>::Graph()
{
    numberOfVertex = 0;
    totalDistance = 0;
    adjList.clear();
}

template <class Type>

void Graph<Type>::addEdge(Type vertex1, Type vertex2, int weight)
{
    if(adjList.size() > 0)
    {
        if(vertexExists(vertex1) && vertexExists(vertex2))
        {
            Edge newEdge;
            newEdge.destination = vertex2;
            newEdge.weight = weight;
            newEdge.type = UNDISCOVERED;

            for(int i = 0; i < adjList.size(); i++)
            {
                if(adjList[i].name == vertex1)
                {
                   adjList[i].adjacent.push_back(newEdge);
                }
            }
        }
        else
        {
            qDebug() << "Vertex's did not even exist";
        }
    }
}

template <class Type>
void Graph<Type>::addVertex(Type vertex)
{
    Vertex newVertex("");
    newVertex.name = vertex;
    newVertex.visited = false;

    adjList.push_back(newVertex);
    numberOfVertex++;
}

template <class Type>
bool Graph<Type>::vertexExists(Type vertex)
{
    bool found = false;

    for(int i = 0; i < adjList.size(); i++)
    {
        if(adjList[i].name == vertex)
        {
            found = true;
            break;
        }
    }
    return found;
}

template <class Type>
int Graph<Type>::getWeight(Type vertex1, Type vertex2)
{
    for(int i = 0; i < adjList.size(); i++)
    {
        if(adjList[i].name == vertex1)
        {
            for(int j = 0; j < adjList[i].adjacent.size(); j++)
            {
                if(adjList[i].adjacent[j].destination == vertex2)
                {
                    return adjList[i].adjacent[j].weight;
                }
            }
        }
    }
    return -1;
}

template <class Type>
void Graph<Type>::printAdjList()
{
    for(int i = 0; i < adjList.size(); ++i)
    {
        qDebug() << "Start City: " << adjList[i].name << endl;
        for(int j=0; j<adjList[i].adjacent.size(); ++j)
        {
            qDebug() << "End City: " << adjList[i].adjacent[j].destination << endl;
            qDebug() << "Distance: " << adjList[i].adjacent[j].weight << endl;
        }
        qDebug() << "\n\n";
    }
}

template <class Type>
void Graph<Type>::DFS(Type vertex)
{
    order.clear();
    totalDistance = 0;
    this->DFS(findVertexIndex(vertex));

    //Set Everything not used to back edges since they can no longer discover anything
    for (int i = 0; i < adjList.size(); ++i)
    {
        for(int j = 0; j < adjList[i].adjacent.size(); j++)
        {
            if(adjList[i].adjacent[j].type != DISCOVERY && adjList[i].adjacent[j].type != REPEAT)
            {
                adjList[i].adjacent[j].type = BACK;
            }
        }
    }

    totalDistance = getTotalDistance();
    qDebug() << "\nTotal Distance traveled: " << totalDistance << endl << endl;
    this->clearVisitedVertex();
    this->clearEdgeType();
}

template <class Type>
void Graph<Type>::BFS(Type vertex)
{
    order.clear();
    totalDistance = 0;
    this->BFS(findVertexIndex(vertex));

    for (int i = 0; i < adjList.size(); ++i)
    {
        for(int j = 0; j < adjList[i].adjacent.size(); j++)
        {
            if(adjList[i].adjacent[j].type != DISCOVERY && adjList[i].adjacent[j].type != REPEAT)
            {
                adjList[i].adjacent[j].type = CROSS;
            }
        }
    }

    totalDistance = getTotalDistance();
    qDebug() << "\nTotal Distance traveled: " << totalDistance << endl;
    this->clearVisitedVertex();
    this->clearEdgeType();
}

template <class Type>
void Graph<Type>::Dijkstra(Type vertex)
{
    Vertex u("");
    QVector<int> parent(numberOfVertex);

    // Code to set the distance array
    for(int i = 0; i < adjList.size(); i++)
    {
        adjList[i].distance = std::numeric_limits<int>::max();
    }

    adjList[findVertexIndex(vertex)].cost = 0;

    // Priority queue to go through the vector
    std::priority_queue<Vertex, QVector<Vertex>, Compare> Q;

    int start = findVertexIndex(vertex);

    parent[start] = start;

    Q.push(adjList[start]);

    while(!Q.empty())
    {
        u = Q.top();
        Q.pop();
        for(int i = 0; i < adjList[findVertexIndex(u.name)].adjacent.size(); i++)
        {
            int foundVertex = findVertexIndex(u.name);
            int foundEdgeVertex = findVertexIndex(adjList[foundVertex].adjacent[i].destination);

            if(adjList[foundVertex].distance + adjList[foundVertex].adjacent[i].weight < adjList[foundEdgeVertex].distance)
            {
                adjList[foundEdgeVertex].distance = adjList[foundVertex].distance + adjList[foundVertex].adjacent[i].weight;

                parent[foundEdgeVertex] = foundVertex;
                Q.push(adjList[foundEdgeVertex]);
            }
        }
    }


    for(int i = 0; i < adjList.size(); i++)
    {
        qDebug() << "Distance from " << adjList[start].name << " to " << adjList[i].name << " is " << adjList[i].distance << endl;
    }
}


template <class Type>
int Graph<Type>::MST(Type vertex)
{
    Vertex u("");
    int distance = 0;

    QVector<QString> parent(numberOfVertex);
    QVector<bool> isInMST(numberOfVertex);

    //Code to set the distance array
    for(int i = 0; i < adjList.size(); i++)
    {
        adjList[i].distance = std::numeric_limits<int>::max();
    }

    adjList[findVertexIndex(vertex)].cost = 0;
    parent[findVertexIndex(vertex)] = adjList[findVertexIndex(vertex)].name;

    // Priority queue to go through the vector
    std::priority_queue<Vertex,QVector<Vertex>,Compare> Q;

    Q.push(adjList[findVertexIndex(vertex)]);

    while(!Q.empty())
    {
        u = Q.top();
        Q.pop();

        isInMST[findVertexIndex(u.name)] = true;

        for(int i = 0; i < adjList[findVertexIndex(u.name)].adjacent.size(); i++)
        {
            int foundVertex = findVertexIndex(u.name);
            int foundEdgeVertex = findVertexIndex(adjList[foundVertex].adjacent[i].destination);

            if(getWeight(adjList[foundVertex].name, adjList[foundEdgeVertex].name) < adjList[foundEdgeVertex].distance && !isInMST[foundEdgeVertex])
            {
                adjList[foundEdgeVertex].distance = getWeight(adjList[foundVertex].name, adjList[foundEdgeVertex].name);
                parent[foundEdgeVertex] = adjList[foundVertex].name;
                Q.push(adjList[foundEdgeVertex]);
            }
        }
    }

    for(int i = 0; i < adjList.size(); i++)
    {
        qDebug() << "Distance from " << parent[i] << " to " << adjList[i].name << " is " << adjList[i].distance << endl;

        distance += adjList[i].distance;
    }

    this->clearEdgeType();
    this->clearVisitedVertex();
    qDebug() << "Total Distance is " << distance;

    return distance;
}

template <class Type>
void Graph<Type>::recursiveDijkstra(Type vertex, int timesToRecurse)
{
    order.clear();
    this->clearEdgeType();
    this->clearVisitedVertex();
    order.append(vertex);
    totalDistance = 0;
    recursiveDijkstra(vertex, 1, timesToRecurse);

    this->clearEdgeType();
    this->clearVisitedVertex();
}

template <class Type>
void Graph<Type>::startSpecificRoute(Type vertex, int timesToRecurse)
{
    order.clear();
    this->clearEdgeType();
    this->clearVisitedVertex();
    order.append(vertex);
    totalDistance = 0;
    startSpecificRoute(vertex, 1, timesToRecurse);

    this->clearEdgeType();
    this->clearVisitedVertex();
}

template <class Type>
QVector<QString> Graph<Type>::getOrder()
{
    return order;
}

template <class Type>
int Graph<Type>::getTotalDistance()
{
    for (int i = 0; i < adjList.size(); ++i)
    {
        for(int j = 0; j < adjList[i].adjacent.size(); j++)
        {
            if(adjList[i].adjacent[j].type == DISCOVERY)
            {
                totalDistance += getWeight(adjList[i].name, adjList[i].adjacent[j].destination);
            }
        }
    }

    return totalDistance;
}

template<class Type>
int Graph<Type>::getDistance(Type vertex)
{
    int position = findVertexIndex(vertex);

    return adjList[position].distance;
}

template <class Type>
void Graph<Type>::resetDistance()
{
    totalDistance = 0;
}
