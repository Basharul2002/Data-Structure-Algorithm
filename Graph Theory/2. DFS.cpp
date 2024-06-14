#include <bits/stdc++.h>
using namespace std;


// Function to perform DFS on the graph
void dfs(int node);

vector<int> graph[10000];  // Adjacency list representation
bool visited[10000];  // Visited array to keep track of visited nodes

int main()
{
    int edges, nodes, x, y;
    
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
    
    cout << "Enter starting node: ";
    int startingNode;
    cin >> startingNode;
    
    cout << "DFS Traversal:\n";
    dfs(startingNode);
    return 0;
}

void dfs(int node)
{
    if (visited[node])
        return;
        
    cout << node << " ";
    visited[node] = true;
    
    for (auto i : graph[node])
    {
        if(!visited[i])
            dfs(i);
    }
}
