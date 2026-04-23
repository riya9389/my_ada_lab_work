
# Lab-11: Knapsack, Travelling Salesperson & N-Queen Problem

## Aim
To implement and analyze the 0/1 Knapsack problem, Travelling Salesperson Problem (TSP), and N-Queen problem using Dynamic Programming and Backtracking.

---

## Theory

### 0/1 Knapsack Problem (Dynamic Programming)
The 0/1 Knapsack problem is an optimization problem where we are given items with weights and values. The goal is to maximize the total value while keeping the total weight within a given capacity.

Each item can either be included or excluded (0 or 1), making it suitable for Dynamic Programming due to overlapping subproblems.

---

### Travelling Salesperson Problem (TSP) – Dynamic Programming
The Travelling Salesperson Problem (TSP) aims to find the shortest route that visits each city exactly once and returns to the starting city.

Dynamic Programming with bitmasking is used to efficiently store and compute results for subsets of cities.

---

### N-Queen Problem (Backtracking)
The N-Queen problem involves placing N queens on an N×N chessboard such that no two queens attack each other.

Conditions:
- No two queens in the same row
- No two queens in the same column
- No two queens on the same diagonal

Backtracking is used to explore valid configurations and discard invalid ones.

---

## Algorithm

### 0/1 Knapsack (DP)
1. Create a DP table of size (n+1) × (W+1)
2. For each item:
   - If weight ≤ capacity:
     dp[i][w] = max(value[i] + dp[i-1][w - weight[i]], dp[i-1][w])
   - Else:
     dp[i][w] = dp[i-1][w]
3. Fill the table iteratively
4. Final answer is stored in dp[n][W]

---

### Travelling Salesperson Problem (DP + Bitmasking)
1. Represent visited cities using a bitmask
2. Define dp[mask][i] as the minimum cost to reach city i with visited set mask
3. Transition:
   dp[mask][j] = min(dp[mask][j], dp[mask without j][i] + cost[i][j])
4. Repeat for all subsets
5. Add cost to return to starting city

---

### N-Queen Problem (Backtracking)
1. Place queens row by row
2. For each column:
   - Check if it is safe to place a queen
3. If safe:
   - Place the queen and move to next row
4. If not:
   - Try next column
5. Backtrack when no valid position is found

---

## Input

### 0/1 Knapsack
- Number of items
- Weights of items
- Values of items
- Maximum capacity

### Travelling Salesperson Problem
- Number of cities
- Distance matrix

### N-Queen Problem
- Value of N (size of board)

---

## Output

### 0/1 Knapsack
- Maximum achievable value

### Travelling Salesperson Problem
- Minimum travelling cost

### N-Queen Problem
- Valid arrangements of queens

---

## Visualization

- Knapsack: DP table showing value optimization
- TSP: Graph showing shortest path
- N-Queen: Chessboard with queen placements

Tools:
- `matplotlib`
- `networkx` (for graph visualization)

---

## Time Complexity

- 0/1 Knapsack: O(n × W)
- TSP (DP): O(n² × 2ⁿ)
- N-Queen: O(N!) (approx.)

---

## Conclusion

This lab demonstrates the use of different algorithmic techniques:

- Dynamic Programming is used in Knapsack and TSP to handle overlapping subproblems efficiently
- Backtracking in N-Queen helps explore valid configurations under constraints

Applications:
- Knapsack → Resource allocation and optimization
- TSP → Routing and logistics
- N-Queen → Constraint satisfaction problems

These problems highlight how choosing the right approach leads to efficient and optimal solutions.
