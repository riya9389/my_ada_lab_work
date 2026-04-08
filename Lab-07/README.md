
# Lab-07: Kruskal’s Algorithm (Greedy Approach)

## Aim

To implement Kruskal’s Algorithm to find the Minimum Spanning Tree (MST) of a weighted graph.

## Theory

Kruskal’s Algorithm is a greedy method used to construct a Minimum Spanning Tree. It selects edges in increasing order of weight and adds them to the tree only if they do not form a cycle. A Disjoint Set (Union-Find) data structure is used to efficiently detect cycles.

## Algorithm

1. Sort all edges in increasing order of weight
2. Initialize each vertex as a separate set
3. For each edge, check if it forms a cycle and include it in the MST if it does not
4. Repeat until (V - 1) edges are selected

## Input

Number of vertices (V), number of edges (E), and list of edges with their weights (u, v, weight).

## Output

Total weight of the Minimum Spanning Tree and the edges included in the MST.

## Time Complexity

O(E log E)

## Conclusion

Kruskal’s Algorithm efficiently finds the Minimum Spanning Tree using a greedy approach and works well for sparse graphs.
