#include <bits/stdc++.h>
using namespace std;


// Function to perform DFS on the graph
void dfs(int node);

vector<int> graph[10000];  // Adjacency list representation
bool visited[10000];  // Visited array to keep track of visited nodes

int main()
{
    int edges, nodes = 0, x, y, count = 0;
    
    cout << "Enter the number of edges: ";
    cin >> edges;
    
    cout << "Enter the number of nodes: ";
    cin >> nodes;
    
    int i = edges;
    while(i--)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    for (auto i = 1; i <= nodes; i++)
    {
        if (visited[i] == 0)
        {
            count++;
            dfs(i);
        }
    }
    
    cout << "Number of connected component in graph: " << count;
    return 0;
}

void dfs(int node)
{
    if (visited[node])
        return;
        
   
    visited[node] = true;
    
    for (auto i : graph[node])
    {
        if(!visited[i])
            dfs(i);
    }
}
