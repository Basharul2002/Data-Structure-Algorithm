# Algorithm-Based Problems

Welcome to the Algorithm-Based Problems repository! This repository contains various algorithm challenges along with their explanations, inputs, and expected outputs. The problems are aimed to enhance your problem-solving skills and understanding of different algorithms.

## Table of Contents

- [Overview](#overview)
- [Problem List](#problem-list)
  - [Shortest Path in a Graph](#shortest-path-in-a-graph)
- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)
- [Credits](#credits)

## Overview

This repository is a collection of algorithmic problems with a focus on real-world applications and theoretical concepts. Each problem includes a detailed description, sample inputs, and expected outputs.

## Problem List

### Shortest Path in a Graph

#### Question

**Shortest Path in a Graph**

You are given a set of cities connected by roads with certain distances. Your task is to find the shortest path from a source city to a destination city using Dijkstra's algorithm. The cities and roads are represented as a graph, where each node represents a city, and each edge represents a road with a distance.

#### Input

A graph represented as an unordered map where each key is a city (node), and the value is a vector of edges. Each edge is a structure containing the destination city and the distance to that city.

- The source city from which to start the search.
- The destination city to which the shortest path is to be found.

#### Output

The shortest path from the source city to the destination city as a vector of city indices. If no path exists, return an empty vector.

#### Example

**Graph Representation**

```
graph = {
    0: [{1, 4}, {2, 1}],
    1: [{3, 1}],
    2: [{1, 2}, {3, 5}],
    3: []
}

```

**Source and Destination**
```
source = 0
destination = 3
```

**Expected Output**
```
Shortest path from city 0 to city 3 is: 0 2 1 3
```
