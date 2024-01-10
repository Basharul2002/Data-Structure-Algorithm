#include <bits/stdc++.h>
using namespace std;


void printPath(int parent[], int j, char verticesName[])
{
    if (parent[j] == -1)
        return;

    printPath(parent, parent[j], verticesName);

    cout << "->" << verticesName[j];
}


int minDistance(int dist[], bool visited[], int vertices) {
    int minIndex, minDist = INT_MAX;

    for (int v = 0; v < vertices; ++v) {
        if (!visited[v] && dist[v] <= minDist) {
            minDist = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}



void dijkstra(int graph[6][6], int start, int vertices) {
    int dist[6];
    bool visited[6];
    int parent[6];

    for (int i = 0; i < vertices; ++i) {
        dist[i] = INT_MAX;
        visited[i] = false;
        parent[i] = -1;
    }

    dist[start] = 0;

    for (int count = 0; count < vertices - 1; ++count) {
        int u = minDistance(dist, visited, vertices);
        visited[u] = true;

        for (int v = 0; v < vertices; ++v) {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    char verticesName[] = {'A', 'B', 'C', 'D', 'E', 'F'};
    // Print shortest distances and paths from start to all other vertices
    cout << "The shortest distances and paths\n********************************\nFrom vertex " << verticesName[start] << ":\n";
    for (int i = 0; i < vertices; ++i) {
        cout << "   To " << verticesName[i] << " is " << dist[i] << " (Path: " << verticesName[start];
        printPath(parent, i, verticesName);
        cout << ")\n";
    }
}

int main() {
    int vertices = 6;

    int graph[6][6] =
    {
        //A    B   C    D    E   F
        {0,   2,   5,   0,   0,  11},  //A
        {0,   0,   0,   5,  13,   0},  //B
        {0,   8,   0,   0,  12,   0}, //C
        {0,   0,   0,   0,   0,   0}, //D
        {0,   0,   0,   1,   0,   0}, //E
        {0,   0,   0,   17,   0,   0}  //F
    };

    int start = 0;

    dijkstra(graph, start, vertices);

    return 0;
}


/*
void dijkstra(int graph[MAX_VERTICES][MAX_VERTICES], int start, int vertices) {
    int dist[MAX_VERTICES];
    bool visited[MAX_VERTICES] = {false};

    for (int i = 0; i < vertices; ++i) {
        dist[i] = INT_MAX;
    }

    dist[start] = 0;

    for (int count = 0; count < vertices - 1; ++count) {
        int u = -1;
        // Find the vertex with the minimum distance value among the
        // vertices not yet processed.
        for (int v = 0; v < vertices; ++v) {
            if (!visited[v] && (u == -1 || dist[v] < dist[u])) {
                u = v;
            }
        }

        visited[u] = true;

        // Update distance value of the neighboring vertices of the picked vertex.
        for (int v = 0; v < vertices; ++v) {
            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "Shortest distances from vertex " << start << ":\n";
    for (int i = 0; i < vertices; ++i) {
        cout << "   To " << i << " is " << dist[i] << endl;
    }
}

*/
