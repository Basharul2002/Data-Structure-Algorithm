#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes, edges, x, y;
    vector<int> graph[100000];
    
    cout << "Number of nodes: ";
    cin >> nodes;
    
    cout << "Number of edges: ";
    cin >> edges;
    
    cout << "Enter the node pairs:\n";
    for (int i = 0; i < edges; ++i)
    {
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    
    // Print the adjacency matrix
     cout << "Adjacency Matrix:\n";
    for (int i = 0; i < nodes; ++i)
    {
        for (int j = 0; j < nodes; ++j)
        {
            bool edgeExists = false;
            for (int k = 0; k < graph[i].size(); ++k)
            {
                if (graph[i][k] == j)
                {
                    edgeExists = true;
                    break;
                }
            }
            cout << (edgeExists ? "1 " : "0 ");
        }
        cout << "\n";
    }
    
    // Print the adjacency list
    cout << "\n\nAdjacency List:\n";
    for (int i = 0; i < nodes; i++)
    {
        cout << i;
        for (int j = 0; j < graph[i].size(); j++)
            cout << " -> " << graph[i][j];
        cout << "\n";
    }
    
    return 0;
}
