#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes, edges;
    
    cout << "Enter the number of nodes: ";
    cin >> nodes;
    
    cout << "Enter the number of edges: ";
    cin >> edges;
    
    // Initialize the adjacency list
    vector<int> graph[100];
    
    int x, y;
    cout << "Enter the edges (node pairs):" << endl;
    for(int i = 0; i < edges; ++i)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    // Print the adjacency list
    for(int i = 0; i < nodes; ++i)
    {
        cout << i;
        for(int j = 0; j < graph[i].size(); j++)
            cout << "->" << graph[i][j];
        
        cout << endl;
    }
    
    return 0;
}
