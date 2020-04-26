#include "dijkstra.h"

Dijkstra::Dijkstra()
{

}
QVector<Edge> Dijkstra::getPath()
{
    return shortestPath;
}
void Dijkstra::intialize(QString v[])
{
    for (int i = 0; i < 30; i++)
    {
        vertices[i] = v[i];
    }
}
// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int Dijkstra::minDistance(int dist[], bool sptSet[])
{
    // Initialize min value
    int min = INT_MAX, min_index;

    for (int v = 0; v < 30; v++)
    {
        if (sptSet[v] == false && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

// A utility function to print the constructed distance array
void Dijkstra::printSolution(int dist[], int n)
{
    Edge temp;
    temp.str = startCit;
    //printf("Vertex   Distance from Source\n");
    for (int i = 0; i < n; i++)
    {
        temp.end = vertices[i];
        temp.weight = dist[i];
        if(dist[i] != 0)
        {
            shortestPath.push_back(temp);
        }
        //if(dist[i] != 0)
        //cout << shortestPath.at(i).s << " to " << shortestPath.at(i).e << " " << shortestPath.at(i).weight << "\n";
    }
}

// Function that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void Dijkstra::dijkstra(int graph[][30], int src)
{
    startCit = vertices[src];
    int dist[30]; // The output array.  dist[i] will hold the shortest
    // distance from src to i

    bool sptSet[30]; // sptSet[i] will be true if vertex i is included in shortest
    // path tree or shortest distance from src to i is finalized

    // Initialize all distances as INFINITE and stpSet[] as false
    for (int i = 0; i < 30; i++)
    {
        dist[i] = INT_MAX;
        sptSet[i] = false;
    }

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < 30 - 1; count++)
    {
        // Pick the minimum distance vertex from the set of vertices not
        // yet processed. u is always equal to src in the first iteration.
        int u = minDistance(dist, sptSet);

        // Mark the picked vertex as processed
        sptSet[u] = true;

        // Update dist value of the adjacent vertices of the picked vertex.
        for (int v = 0; v < 30; v++)
        {
            // Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
            {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }
    // print the constructed distance array
    printSolution(dist, 30);
}
