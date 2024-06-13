#include<bits/stdc++.h>
using namespace std;

// Structure to represent an edge between two cities with a distance
struct Edge 
{
    int destination;
    int distance;
};

// Function to find the shortest path using Dijkstra's algorithm
vector<int> dijkstra(const unordered_map<int, vector<Edge>>& graph, int source, int destination) 
{
    // Priority queue to store (distance, node) pairs
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // Distance map to store the shortest distance to each node
    unordered_map<int, int> distances;
    // Predecessor map to reconstruct the shortest path
    unordered_map<int, int> predecessors;

    // Initialize distances to all nodes as infinity
    for (const auto& pair : graph) 
        distances[pair.first] = INT_MAX;
    
    distances[source] = 0;
    pq.push({0, source});

    while (!pq.empty()) 
    {
        int currentDistance = pq.top().first;
        int currentNode = pq.top().second;
        pq.pop();

        // If we reached the destination, break
        if (currentNode == destination) 
            break;
        

        // Visit all neighbors of the current node
        for (const Edge& edge : graph.at(currentNode)) 
        {
            int newDistance = currentDistance + edge.distance;
            if (newDistance < distances[edge.destination]) 
            {
                distances[edge.destination] = newDistance;
                predecessors[edge.destination] = currentNode;
                pq.push({newDistance, edge.destination});
            }
        }
    }

    // Reconstruct the shortest path from source to destination
    vector<int> path;
    if (distances[destination] == INT_MAX) 
        return path; // No path found
    

    for (int at = destination; at != source; at = predecessors[at]) 
        path.push_back(at);
    
    path.push_back(source);
    reverse(path.begin(), path.end());
    return path;
}

int main() 
{
    // Graph representation: city -> list of edges (city, distance)
    unordered_map<int, vector<Edge>> graph = 
    {
        {0, {{1, 4}, {2, 1}}},
        {1, {{3, 1}}},
        {2, {{1, 2}, {3, 5}}},
        {3, {}}
    };

    int source = 0;
    int destination = 3;
    vector<int> shortestPath = dijkstra(graph, source, destination);

    if (shortestPath.empty()) 
        cout << "No path found from city " << source << " to city " << destination << endl;
    else 
    {
        cout << "Shortest path from city " << source << " to city " << destination << " is: ";
        for (int city : shortestPath) 
            cout << city << " ";
        
        cout << endl;
    }

    return 0;
}
