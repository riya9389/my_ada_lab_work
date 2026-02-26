###        LAB-06 WORK 

Overview

This lab contains implementations of:

Activity Selection Problem

Dijkstra’s Algorithm (Shortest Path)

Prim’s Algorithm (Minimum Spanning Tree)

Spanning Tree (Cycle Detection Method)

Programs Included
Activity Selection Problem

Selects maximum number of non-overlapping activities.

Implemented and compared:

Sorting by Start Time

Sorting by Finish Time

Sorting by Duration

Best solution obtained when sorted by Finish Time.

Time Complexity: O(n log n)

Demonstrates Greedy Choice Property.

Dijkstra’s Algorithm

Finds shortest path from a source vertex to all other vertices.

Selects the minimum distance vertex at each step.

Works for graphs with non-negative edge weights.

Time Complexity: O(V²) (Basic Implementation)

Efficient greedy strategy for shortest path problems.

Prim’s Algorithm

Constructs a Minimum Spanning Tree (MST).

Implemented using:

near[i] array

Visited and Unvisited vertex lists

Selects minimum weight edge at each step.

Connects all vertices with minimum total cost.

Time Complexity: O(V²)

Spanning Tree (Cycle Detection Method)

Constructs a spanning tree by:

Adding edges in increasing order

Ensuring no cycle is formed

Similar to Kruskal’s Greedy Approach.

Time Complexity: O(E log E) (If edges are sorted)
