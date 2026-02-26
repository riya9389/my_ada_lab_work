
# Lab-06 – Greedy Algorithms

##  Overview
This lab contains implementations of:

1. **Activity selection problem**
2. **Dijkestra's algorithm**
3. **Prim's algorithm**
4. **generation of spanning tree**


##  Programs Included

### activity Selection Problem

-  Selects maximum number of non-overlapping activities.
-  Implemented and compared:
    -  Sorting by Start Time
    -  Sorting by Finish Time
    -  Sorting by Duration
-  Best solution obtained when sorted by Finish Time.
-  Time Complexity: O(n log n)



###  Dijkestra's algorithm
-  Finds shortest path from a source vertex to all other vertices.
-  Selects the minimum distance vertex at each step.
-  Works for graphs with non-negative edge weights.
-  Time Complexity: O(V²) (Basic Implementation)

 
###  Prim's algorithm
-  Constructs a Minimum Spanning Tree (MST).
-  Implemented using:
    -  near[i] array
    -  Visited and Unvisited vertex lists
    -  Selects minimum weight edge at each step.
    -  Connects all vertices with minimum total cost.
-  Time Complexity: O(V²)


###  Spanning tree(Cycle detection method)
-  Constructs a spanning tree by:
    -  Making DSU ,findParent and unionByRank function
    -  Ensuring no cycle is formed
    -  Similar to Kruskal’s Greedy Approach.

-  Time Complexity: O(E log E) 

