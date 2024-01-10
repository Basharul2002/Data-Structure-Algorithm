#include<bits/stdc++.h>
using namespace std;

const int edge = 6, vertex= 6;
void BFS(int graph[edge][vertex], int start);

int main()
{
    int graph[edge][vertex] =
    {
    //   0  1  2  3  4  5
        {0, 1, 1, 0, 1, 0}, // 0
        {1, 0, 1, 1, 1, 0}, // 1
        {1, 1, 0, 1, 0, 0}, // 2
        {0, 1, 1, 0, 1, 0}, // 3
        {1, 1, 0, 1, 0, 1}, // 4
        {0, 0, 0, 0, 1, 0}  // 5
    };

    cout<<"BFS Path: ";
    BFS(graph, 0);

    return 0;
}


void BFS(int graph[edge][vertex], int start)
{
    queue<int> q;
    vector<bool> visited(edge, false);

    q.push(start);
    visited[start] = true;

    while(!q.empty())
    {
        int current = q.front();
        cout<<current<<" ";
        q.pop();

        for(int i = 0; i<vertex; ++i)
        {
            if(graph[current][i] && !visited[i])
            {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
