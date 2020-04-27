#include "graph.h"

Graph::Graph()
{
    numberOfVertex = 0;
    totalDistance = 0;
    adjList.clear();
}

void Graph::addEdge(QString vertex1, QString vertex2, int weight)
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

void Graph::addVertex(QString vertex)
{
    Vertex newVertex;
    newVertex.name = vertex;
    newVertex.visited = false;

    adjList.push_back(newVertex);
    numberOfVertex++;
}

bool Graph::vertexExists(QString vertex)
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

int Graph::getWeight(QString vertex1, QString vertex2)
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

void Graph::printAdjList()
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

void Graph::DFS(QString vertex)
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

void Graph::BFS(QString vertex)
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

void Graph::Dijkstra(QString vertex)
{
    Vertex u;
    QVector<int> parent(numberOfVertex);

    // Code to set the distance array
    for(int i = 0; i < adjList.size(); i++)
    {
        adjList[i].distance = std::numeric_limits<int>::max();
    }

    adjList[findVertexIndex(vertex)].distance = 0;

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


int Graph::MST(QString vertex)
{
    Vertex u;
    int distance = 0;

    QVector<QString> parent(numberOfVertex);
    QVector<bool> isInMST(numberOfVertex);

    //Code to set the distance array
    for(int i = 0; i < adjList.size(); i++)
    {
        adjList[i].distance = std::numeric_limits<int>::max();
    }

    adjList[findVertexIndex(vertex)].distance = 0;
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

void Graph::recursiveDijkstra(QString vertex, int timesToRecurse)
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

void Graph::startSpecificRoute(QString vertex, int timesToRecurse)
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

QVector<QString> Graph::getOrder()
{
    return order;
}

int Graph::getTotalDistance()
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

int Graph::getDistance(QString vertex)
{
    int position = findVertexIndex(vertex);

    return adjList[position].distance;
}

void Graph::resetDistance()
{
    totalDistance = 0;
}

void Graph::loadGraph(Graph &g)
{
    g.adjList.clear();

    QSqlQuery *vertices = new QSqlQuery();
    vertices->prepare("select DISTINCT [Originated Stadium] from [Stadium Distances];");

    if (vertices->exec())
    {
        while(vertices->next())
        {
            g.addVertex(vertices->value(0).toString());
            // qDebug() << "Adding " << vertices->value(0).toString();
            // qDebug() << adjList.size();
        }
    }

    QSqlQuery *edges = new QSqlQuery();
    edges->prepare("select * from [Stadium Distances];");

    if (edges->exec())
    {
        while(edges->next())
        {
            g.addEdge(edges->value(0).toString(), edges->value(1).toString(), edges->value(2).toInt());
            qDebug() << "Start: " << edges->value(0).toString();
            qDebug() << "End: " << edges->value(1).toString();
            qDebug() << "Distance: " << edges->value(2).toInt();

        }
    }
}
