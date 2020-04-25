#include "graph.h"

Graph::Graph()
{
    mstDistance = 0;
}

Graph::~Graph(){}
//--------------------------------------
// Returns true/false if graph is empty
bool Graph::empty()
{
    return graph.empty();
}
//--------------------------------------
// Returns size of graph
int Graph::size()
{
    return (int)graph.size();
}
//--------------------------------------
void Graph::resetGraph()
{
    if(verticesVisited() == graph.size())
    {
        for (int i = 0; i < graph.size(); i++)
        {
            graph[i].visited = false;

            for (int j = 0; j < graph.at(i).edgeList.size(); j++)
            {
                graph[i].edgeList[j].discoveryEdge = false;
            }
        }
        mstDistance = 0;
    }
}
//--------------------------------------
// Searches for city in graph
// Returns index of vertex
unsigned int Graph::findVertex(QString city)
{
    unsigned int index = 0;
    bool found = false;

    while(index < graph.size() && !found)
    {
        if(graph.at(index).city == city)
        {
            found = true;
        }
        else
        {
            index++;
        }
    }

    return index;
}
//--------------------------------------
// Inserts city into graph
// Outputs city names in graph
void Graph::insertVertex(QString city)
{
    if(findVertex(city) == graph.size())
    {
        Vertex newVertex;

        newVertex.city = city;
        newVertex.visited = false;

        cityNames.push_back(newVertex.city);
        //cout << newVertex.city << endl;
        //qDebug() << "insert vertex";
        graph.push_back(newVertex);
    }
}
//--------------------------------------
// Adds vertext if doesnt already exisit
// Adds edgelist to corresponding vertex
void Graph::insertEdge(QString s, QString e, int weight)
{
    unsigned int index = findVertex(s);

    if(index == graph.size())
    {
        insertVertex(s);

        insertEdge(s, e, weight);
    }
    else
    {
        Edge newEdge;

        newEdge.s = s;
        newEdge.e = e;
        newEdge.weight = weight;

        // test
//        graph[index].edgeList[index].e = newEdge.e;
//        graph[index].edgeList[index].s = newEdge.s;
//        graph[index].edgeList[index].weight = newEdge.weight;
        //qDebug() << "Pushing edgelist " << index;
        graph[index].edgeList.push_back(newEdge);
        //graph.at(index).edgeList.push_back(newEdge);
    }
}
//--------------------------------------
// adds city names from graph to a vector cityNames
// returns vector with names
QVector<QString> Graph::vertices()
{
    QVector<QString> cityNames;

    for(unsigned int i = 0; i < graph.size(); i++)
    {
        cityNames.push_back(graph[i].city);
    }

    return cityNames;
}
//--------------------------------------
// adds edges to vecotr edgeList from graph
// returns edgeList
QVector<QString> Graph::edges()
{
    QVector<QString> edgeList;

    for(unsigned int i = 0; i < graph.size(); i++)
    {
        if(graph.at(i).edgeList.size() != 0)
        {
            for(unsigned int j = 0; j < graph.at(i).edgeList.size(); j++)
            {
                edgeList.push_back("(" + graph.at(i).edgeList.at(j).s + ", " + graph.at(i).edgeList.at(j).e + ")");
            }
        }
    }
    return edgeList;
}
//--------------------------------------
// Counts # of vertices visted
// Returns # visted
unsigned int Graph::verticesVisited()
{
    int numVisited = 0;

    QVector<Vertex>::iterator graphIt = graph.begin();

    while(graphIt != graph.end())
    {
        if(graphIt->visited)
        {
            numVisited++;
        }

        graphIt++;
    }

    return numVisited;
}
//--------------------------------------
// Counts # of edges discoverd
// Returns # visted
unsigned int Graph::edgesDiscovered(int currVertex)
{
    int numVisited = 0;

    for(unsigned int i = 0; i < graph.at(currVertex).edgeList.size(); i++)
    {
        if(graph.at(findVertex(graph.at(currVertex).edgeList.at(i).e)).visited)
        {
            numVisited++;
        }
    }

    return numVisited;
}
//--------------------------------------
// Dijkstra Algoritm
// Finds shortest from starting city
void Graph::shortestPathsDijkstra(QString startingCity, QVector<QString> &T, int costs[], int parent[])
{
    resetGraph();

    int currVertex = findVertex(startingCity);
    qDebug() << currVertex << " " << startingCity;
    T.push_back(graph[currVertex].city);

    qDebug() << T.front() << " T " << T.size() << " " << size();

    costs[currVertex] = 0;
    parent[currVertex] = -1;

    graph[currVertex].visited = true;

    while(T.size() != size())
    {
        findClosest(T, costs, parent);
    }
}
//--------------------------------------
// Returns path
QVector<QString> Graph::returnPath(QString start, QString end, int parent[])
{
    QVector<QString> path;

    int vertex = findVertex(end);

    while(parent[vertex] != -1)
    {
        path.push_back(graph[vertex].city);

        vertex = parent[vertex];
    }

    path.push_back(graph[vertex].city);

    //test
    std::reverse(path.begin(), path.end());
    //reverse(path.begin(), path.end());

    return path;
}
//--------------------------------------
// PrimMST
// Recursively visits all vertext by fiding the closest
// Return distance of MST
//int Graph::primMST(QString startingCity, QVector<QString> &mst)
//{
//    resetGraph();

//    int currVertex = findVertex(startingCity);

//    // test
//    graph[currVertex].visited = true;

//    //graph.at(currVertex).visited = true;

//    mst.push_back(startingCity);

//    if(mst.size() != size())
//    {
//        int nextVertex = smallestEdgeMST(mst);

//        primMST(graph.at(nextVertex).city, mst);
//    }

//    return mstDistance;
//}
//--------------------------------------
// Finds closest city adjacent to it
void Graph::findClosest(QVector<QString> &T, int costs[], int parent[])
{
    qDebug() << "find checking";
    if(T.size() == 1)
    {
        int frontVer = findVertex(T.front());
        qDebug() << frontVer << " front";
        int nextVer = smallestEdge(frontVer);
        qDebug() << nextVer << " next";

        // need to debug
        costs[nextVer] = distanceBetween(frontVer, nextVer);

        parent[nextVer] = frontVer;

        graph[nextVer].visited = true;

        qDebug() << graph[nextVer].city << " " << T[0];

        T.push_back(graph[nextVer].city);
    }
    else
    {
        int smallId = 0;
        int compId = smallId + 1;

        int smallDist = 0;
        int compDist = 0;

        int size = (int)T.size();

        while(compId < size)
        {
            int smallVer = findVertex(T[smallId]);
            int compVer = findVertex(T[compId]);

            if(graph[smallVer].edgeList.size() == edgesDiscovered(smallVer))
            {
                smallId++;
            }
            else
            {
                if(graph[compVer].edgeList.size() != edgesDiscovered(compVer))
                {
                    smallDist = distanceBetween(smallVer, smallestEdge(smallVer))
                                + distanceFromStart(graph[smallVer].city, costs,
                                                    parent);

                    compDist =  distanceBetween(compVer, smallestEdge(compVer))
                                + distanceFromStart(graph[compVer].city, costs,
                                                    parent);

                    if(smallDist > compDist)
                    {
                        smallId = compId;

                        smallDist = compDist;
                    }
                }
            }
            compId++;
        }

        int smallestVertex = smallestEdge(findVertex(T[smallId]));

        costs[smallestVertex] = smallDist;
        parent[smallestVertex] = findVertex(T[smallId]);

        graph[smallestVertex].visited = true;

        T.push_back(graph[smallestVertex].city);
    }
}
//--------------------------------------
// Finds distance between current vertex & its parent
// Return distance
int Graph::distanceFromStart(QString city, int costs[], int parent[])
{
    int distance = 0;

    int vertex = findVertex(city);

    while(costs[vertex] != 0)
    {
        distance += distanceBetween(vertex, parent[vertex]);

        vertex = parent[vertex];
    }

    return distance;
}
//--------------------------------------
// Finds closest city adjacent to it
// Prints the smallest edges
// Returns index of next city
//int Graph::smallestEdgeMST(QVector<QString> &mst)
//{
//    if(mst.size() == 1)
//    {
//        int smallestVertex = smallestEdge(findVertex(mst.front()));

//        mstDistance += distanceBetween(findVertex(mst.front()), smallestVertex);

//        //cout << "(" << mst.front() << ", " << graph[smallestVertex].city << ")\n";

//        return smallestEdge(findVertex(mst.front()));
//    }
//    else
//    {
//        int smallId = 0;
//        int compId = smallId + 1;

//        int size = (int)mst.size();

//        while(compId < size)
//        {
//            int smallVer = findVertex(mst[smallId]);
//            int compVer = findVertex(mst[compId]);

//            if(graph[smallVer].edgeList.size() == edgesDiscovered(smallVer))
//            {
//                smallId++;
//            }
//            else
//            {

//                if(graph[compVer].edgeList.size() != edgesDiscovered(compVer))
//                {
//                    int smallDist = distanceBetween(smallVer, smallestEdge(smallVer));

//                    int compDist =  distanceBetween(compVer, smallestEdge(compVer));

//                    if(smallDist > compDist)
//                    {
//                        smallId = compId;
//                    }
//                }
//            }
//            compId++;
//        }

//        mstDistance += distanceBetween(findVertex(mst[smallId]),
//                                       smallestEdge(findVertex(mst[smallId])));

//        int smallestVertex = findVertex(mst[smallId]);

//        QString nextCity = graph.at(smallestEdge(smallestVertex)).city;

//        //cout << "(" << mst[smallId] << ", " << nextCity << ")\n";

//        smallId = findVertex(nextCity);

//        return smallId;
//    }
//}
//--------------------------------------
// Finds closest city not visted yet
// Returns index of closest city
int Graph::smallestEdge(int vertex)
{
    int smallestIndex = 0;

        int compIndex = smallestIndex + 1;

        int size = (int)graph.at(vertex).edgeList.size();
        qDebug() << "smallest Edge " << compIndex << " " << size;
        while(compIndex < size)
        {
            int smallestVertex = findVertex(graph.at(vertex).edgeList.at(smallestIndex).e);
            qDebug() << "smallestVer " << smallestVertex << graph.at(vertex).edgeList.at(smallestIndex).e;
            int compVertex = findVertex(graph.at(vertex).edgeList.at(compIndex).e);
            qDebug() << "compVer " << compVertex << " " << graph.at(vertex).edgeList.at(compIndex).e << graph.size();
            if(graph.at(smallestVertex-1).visited)
            {
                smallestIndex++;
            }
            else
            {
                if(!(graph.at(compVertex).visited))
                {
                    qDebug() << "check1";
                    if(graph.at(vertex).edgeList.at(smallestIndex).weight >=
                            graph.at(vertex).edgeList.at(compIndex).weight)
                    {

                        smallestIndex = compIndex;
                        qDebug() << "check2: " << smallestIndex;
                    }
                }
            }
            compIndex++;
        }
        qDebug() << smallestIndex << " smallestIndex";
        smallestIndex = findVertex(graph.at(vertex).edgeList.at(smallestIndex).e);
        qDebug() << smallestIndex << " smallestIndet";
        return smallestIndex;
}
//--------------------------------------
// Returns the distance between vertices
int Graph::distanceBetween(int v1, int v2)
{
    int i = 0;
    QString test = graph[v2-1].city;

    qDebug() << v1 << " distancebetween " << v2 << " " << test;

    if (v2 == 30)
    {
        // i think it crashes here
        while(graph[v1].edgeList[i].e != graph[v2-1].city)
        {
            qDebug() << i << graph[v1].edgeList[i].e << graph[v2-1].city;
            i++;
        }
    }
    else
    {
        while(graph[v1].edgeList[i].e != graph[v2].city)
        {
            i++;
        }
    }
    qDebug() << graph[v1].edgeList[0].weight;

    return graph[v1].edgeList[i].weight;
}
