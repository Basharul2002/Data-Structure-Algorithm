#include <bits/stdc++.h>
using namespace std;

const int ROW = 5;
const int COL = 5;

struct Node 
{
    int x, y;
    int g, h, f;
    Node* parent;
    
    Node(int x, int y, int g, int h, Node* parent = nullptr) : x(x), y(y), g(g), h(h), f(g + h), parent(parent) {}
};

struct Compare 
{
    bool operator()(Node* a, Node* b) 
    {
        return a->f > b->f;
    }
};

int heuristic(int x1, int y1, int x2, int y2) 
{
    return abs(x1 - x2) + abs(y1 - y2);
}

void reconstructPath(Node* endNode) 
{
    if (endNode == nullptr) 
      return;
  
    reconstructPath(endNode->parent);
    cout << "(" << endNode->x << ", " << endNode->y << ") ";
}

void aStar(int grid[ROW][COL], int startX, int startY, int endX, int endY) 
{
    priority_queue<Node*, vector<Node*>, Compare> openList;
    bool closedList[ROW][COL];
    memset(closedList, false, sizeof(closedList));

    Node* startNode = new Node(startX, startY, 0, heuristic(startX, startY, endX, endY));
    openList.push(startNode);

    int directions[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    while (!openList.empty()) 
    {
        Node* currentNode = openList.top();
        openList.pop();

        int x = currentNode->x;
        int y = currentNode->y;

        if (x == endX && y == endY) 
        {
            reconstructPath(currentNode);
            return;
        }

        closedList[x][y] = true;

        for (auto& direction : directions) 
        {
            int newX = x + direction[0];
            int newY = y + direction[1];

            if (newX >= 0 && newX < ROW && newY >= 0 && newY < COL && grid[newX][newY] == 0 && !closedList[newX][newY]) 
            {
                int newG = currentNode->g + 1;
                int newH = heuristic(newX, newY, endX, endY);
                Node* neighborNode = new Node(newX, newY, newG, newH, currentNode);
                openList.push(neighborNode);
            }
        }
    }

    cout << "No path found" << endl;
}

int main() 
{
    int grid[ROW][COL] = 
    {
        {0, 0, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 1, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 0, 0, 0}
    };

    int startX = 0, startY = 0;
    int endX = 4, endY = 4;

    cout << "Path: ";
    aStar(grid, startX, startY, endX, endY);

    return 0;
}
