Lab-10: Longest Common Subsequence & All-Pairs Shortest Path (Dynamic Programming)
Aim

To implement the Longest Common Subsequence (LCS) and All-Pairs Shortest Path algorithms using Dynamic Programming and visualize their results using graphs in Python.

Theory
Longest Common Subsequence (LCS)

The Longest Common Subsequence problem is a classic Dynamic Programming problem. It finds the longest subsequence present in two sequences without changing the order of elements. The idea is to build a DP table where each cell represents the length of LCS up to that point.

All-Pairs Shortest Path (Floyd–Warshall Algorithm)

The All-Pairs Shortest Path problem aims to find the shortest paths between all pairs of vertices in a graph. The Floyd–Warshall algorithm uses Dynamic Programming to update distances by considering each vertex as an intermediate point.

Algorithm
For Longest Common Subsequence (LCS)
Initialize a 2D DP table of size (m+1) × (n+1)
If characters match, dp[i][j] = dp[i-1][j-1] + 1
Else, dp[i][j] = max(dp[i-1][j], dp[i][j-1])
Repeat until the table is filled
The result is stored in dp[m][n]
For All-Pairs Shortest Path (Floyd–Warshall)
Initialize distance matrix with given graph weights
For each vertex k, update all pairs (i, j)
If dist[i][j] > dist[i][k] + dist[k][j], update it
Repeat for all vertices
Final matrix contains shortest distances between all pairs
Input
LCS

Two sequences (strings)

All-Pairs Shortest Path

A weighted graph represented as an adjacency matrix

Output
LCS

Length of the longest common subsequence

All-Pairs Shortest Path

Matrix showing shortest distances between every pair of vertices

Graph Visualization
For LCS: A matrix visualization showing how subsequence length builds up
For Floyd–Warshall: Graph representation showing shortest paths between nodes
Python can be used with libraries like matplotlib or networkx to visualize results
Time Complexity
LCS: O(m × n)
Floyd–Warshall: O(n³)
