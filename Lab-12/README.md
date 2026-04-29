## 🔹 1. Sum of Subsets Problem

**Problem:**  
Given a set of weights \( W = \{w_1, w_2, ..., w_n\} \) and a target sum \( m \), find all subsets whose sum equals \( m \).

**Algorithm:**
SumOfSubsets(s, k, r):

x[k] = 1

if (s + w[k] == m)
    print x[1..k]

else if (k+1 ≤ n AND s + w[k] + w[k+1] ≤ m)
    SumOfSubsets(s + w[k], k+1, r - w[k])

x[k] = 0

if (k+1 ≤ n AND s + r - w[k] ≥ m AND s + w[k+1] ≤ m)
    SumOfSubsets(s, k+1, r - w[k])

**Time Complexity:**  
Worst Case: `O(2^n)`

## 🔹 2. Graph Coloring (m-Coloring Problem)

**Problem:**  
Given a graph with `n` vertices and `m` colors, determine whether the graph can be colored such that no two adjacent vertices have the same color.

**Algorithm:**
NextValue(k):
do
    x[k] = (x[k] + 1) mod (m + 1)

    if x[k] == 0
        return

    for j = 1 to k-1
        if graph[k][j] == 1 AND x[k] == x[j]
            break

    if j == k
        return

while(true)

mColoring(k):
do
    NextValue(k)

    if x[k] == 0
        return

    if k == n
        print x[1..n]

    else
        mColoring(k+1)

while(true)

**Time Complexity:**  
Worst Case: `O(m^n)`


## 🔹 3. Hamiltonian Cycle Problem

**Problem:**  
Given a graph, find a cycle that visits every vertex exactly once and returns to the starting vertex.

**Algorithm:**

NextValue(k):
do
    x[k] = (x[k] + 1) mod (n + 1)

    if x[k] == 0
        return

    for j = 1 to k-1
        if x[k] == x[j]
            break

    if j == k
        if (k == 1 OR graph[x[k-1]][x[k]] == 1)
            if (k < n OR (k == n AND graph[x[n]][x[1]] == 1))
                return

while(true)

Hamiltonian(k):
do
    NextValue(k)

    if x[k] == 0
        return

    if k == n
        print x[1..n], x[1]

    else
        Hamiltonian(k+1)

while(true)

**Time Complexity:**  
Worst Case: `O(n!)`
