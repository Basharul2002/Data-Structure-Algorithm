# Greedy Algorithms Collection

This C++ project provides implementations of various greedy algorithms, including DFS, BFS, Dijkstra's algorithm, and the Knapsack problem. Greedy algorithms aim to make locally optimal choices at each stage with the hope of finding a global optimum.

## Table of Contents

- [Overview](#overview)
- [DFS (Depth-First Search)](#dfs-depth-first-search)
- [BFS (Breadth-First Search)](#bfs-breadth-first-search)
- [Dijkstra's Algorithm](#dijkstras-algorithm)
- [Knapsack Problem](#knapsack-problem)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Overview

This project includes C++ implementations of the following greedy algorithms:

- **DFS (Depth-First Search):** An algorithm for traversing or searching tree or graph data structures.
- **BFS (Breadth-First Search):** A strategy for searching in graphs and tree data structures.
- **Dijkstra's Algorithm:** A graph search algorithm that solves the single-source shortest path problem.
- **Knapsack Problem:** A classic optimization problem for selecting the best combination of items without exceeding a given weight.

## DFS (Depth-First Search)

The `DFS` class provides methods for performing a depth-first search on a graph.

### Methods

- `dfsTraversal`: Executes a depth-first traversal on a graph.

## BFS (Breadth-First Search)

The `BFS` class provides methods for performing a breadth-first search on a graph.

### Methods

- `bfsTraversal`: Executes a breadth-first traversal on a graph.

## Dijkstra's Algorithm

The `Dijkstra` class provides an implementation of Dijkstra's algorithm for finding the shortest path in a graph.

### Methods

- `dijkstra`: Finds the shortest path in a weighted graph using Dijkstra's algorithm.

## Knapsack Problem

The `Knapsack` class implements the greedy algorithm for solving the 0/1 Knapsack problem.

### Methods

- `knapsackGreedy`: Solves the 0/1 Knapsack problem using a greedy approach.

## Usage

### Prerequisites

- C++ compiler

### Building and Running

1. Clone the repository:

    ```bash
    git clone https://github.com/Basharul2002/Data-Structure-Algorithm/tree/main/Greedy%20Algorithm.git
    ```

2. Compile the C++ code:

    ```bash
    g++ main.cpp DFS.cpp BFS.cpp Dijkstra.cpp Knapsack.cpp -o greedy_algorithms
    ```

3. Run the executable:

    ```bash
    ./greedy_algorithms
    ```

4. Follow the on-screen instructions to choose and execute a specific greedy algorithm.

## Contributing

If you would like to contribute to this project, feel free to fork the repository and submit pull requests.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use and modify the code as needed.
