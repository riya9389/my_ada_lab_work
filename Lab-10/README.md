# Lab-10: Longest Common Subsequence & All-Pairs Shortest Path (Dynamic Programming)

## Aim
To implement the Longest Common Subsequence (LCS) and All-Pairs Shortest Path algorithms using Dynamic Programming and visualize the results using Python.

---

## Theory

### Longest Common Subsequence (LCS)
The Longest Common Subsequence (LCS) problem is a classic Dynamic Programming problem. It finds the longest subsequence common to two sequences while maintaining the order of elements. A subsequence does not need to be contiguous.

Dynamic Programming is used to store intermediate results in a table to avoid redundant computations.

### All-Pairs Shortest Path (Floyd–Warshall Algorithm)
The All-Pairs Shortest Path problem aims to find the shortest distances between every pair of vertices in a graph. The Floyd–Warshall algorithm applies Dynamic Programming by considering each vertex as an intermediate node to improve path distances.

---

## Algorithm

### Longest Common Subsequence (LCS)
1. Initialize a DP table of size (m+1) × (n+1)
2. If characters match:
   dp[i][j] = dp[i-1][j-1] + 1
3. Else:
   dp[i][j] = max(dp[i-1][j], dp[i][j-1])
4. Fill the table row by row
5. The final answer is stored in dp[m][n]

### All-Pairs Shortest Path (Floyd–Warshall)
1. Initialize the distance matrix using graph weights
2. For each vertex k:
   - For each pair (i, j):
     - If dist[i][j] > dist[i][k] + dist[k][j]
       update dist[i][j]
3. Repeat for all vertices
4. Final matrix gives shortest distances between all pairs

---

## Input

### LCS
- Two strings (sequence 1 and sequence 2)

### All-Pairs Shortest Path
- A weighted graph represented as an adjacency matrix

---

## Output

### LCS
- Length of the longest common subsequence

### All-Pairs Shortest Path
- Matrix showing shortest distances between every pair of vertices

---

## Graph Visualization

- LCS:
  A DP table visualization showing how the subsequence length is built

- Floyd–Warshall:
  Graph visualization showing shortest paths between nodes

- Tools:
  Python libraries like `matplotlib` and `networkx` can be used

---

## Time Complexity

- LCS: O(m × n)
- Floyd–Warshall: O(n³)

---

## Conclusion

This experiment demonstrates the power of Dynamic Programming in solving complex problems efficiently.

- LCS is useful in text comparison, DNA sequencing, and pattern matching
- Floyd–Warshall is useful in network routing and graph analysis

Both algorithms avoid redundant calculations and provide optimal solutions. Visualization further helps in understanding how the solution evolves step by step.
