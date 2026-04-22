
# Lab-9: Dynamic Programming Problems

---

## 1. Matrix Chain Multiplication

### Aim

To implement the Matrix Chain Multiplication problem using Dynamic Programming to find the minimum number of scalar multiplications required.

### Theory

Matrix Chain Multiplication is a classic Dynamic Programming problem that determines the most efficient way to multiply a sequence of matrices. The problem is not about performing multiplication, but about finding the optimal order of multiplication to minimize cost.

### Algorithm

* Define a DP table to store minimum multiplication costs
* Initialize diagonal elements as 0 (single matrix cost)
* Consider chain lengths from 2 to n
* Compute cost for all possible partitions
* Store the minimum cost for each subproblem

### Input

Array representing dimensions of matrices.

### Output

Minimum number of scalar multiplications required.

### Time Complexity

O(n³)

### Conclusion

This problem highlights how Dynamic Programming optimizes recursive solutions by storing intermediate results.

---

## 2. Multistage Graph (Forward Approach)

### Aim

To find the shortest path in a multistage graph using the forward Dynamic Programming approach.

### Theory

A multistage graph is a directed graph divided into stages. The forward approach computes the shortest path starting from the source node and progressing stage by stage toward the destination.

### Algorithm

* Initialize cost array from source node
* Traverse graph stage by stage
* Update minimum cost for each node using previous stage values
* Continue until destination is reached

### Input

Number of stages, nodes, and edge weights.

### Output

Shortest path cost from source to destination.

### Time Complexity

O(E)

### Conclusion

The forward approach simplifies solving multistage graphs by progressing step-by-step from the source.

---

## 3. Multistage Graph (Backward Approach)

### Aim

To find the shortest path in a multistage graph using the backward Dynamic Programming approach.

### Theory

The backward approach starts from the destination node and computes the minimum cost to reach it from all preceding nodes.

### Algorithm

* Initialize cost of destination as 0
* Traverse nodes backward stage by stage
* Compute minimum cost for each node
* Store and update values using DP

### Input

Graph structure with stages and edge weights.

### Output

Minimum cost from source to destination.

### Time Complexity

O(E)

### Conclusion

The backward approach is efficient and often simpler, as it builds the solution from the destination node.

---

## Overall Conclusion

These problems demonstrate the power of **Dynamic Programming** in solving optimization problems efficiently by avoiding redundant computations.

---
