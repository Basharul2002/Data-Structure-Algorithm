#include<bits/stdc++.h>
using namespace std;

const int edgs = 6, vertex = 6;

void DFS(int graph[edgs][vertex], int visited[edgs], int node);

int main()
{
    int graph[edgs][vertex] =
    {
        {0, 1, 1, 0, 1, 0},
        {1, 0, 1, 1, 1, 0},
        {1, 1, 0, 1, 0, 0},
        {0, 1, 1, 0, 1, 0},
        {1, 1, 0, 1, 0, 1},
        {0, 0, 0, 0, 1, 0}
    };

    int visited[edgs] = {0};

    cout<<"DFS Path: ";
    DFS(graph, visited, 0);

    cout<<endl<<endl;


    system("pause");
    return 0;
}


void DFS(int graph[edgs][vertex], int visited[edgs], int node)
{
    if(visited[node] == 1)
        return;

    cout<<node<<" ";
    visited[node] = 1;

    for(int i=0; i<edgs; ++i)
    {
        if(graph[node][i] == 1 && visited[i] == 0)
            DFS(graph, visited, i);
    }
}
