
# Lab-08: Rod Cutting Problem (Dynamic Programming)

## Aim

To implement the Rod Cutting problem using Dynamic Programming and visualize the maximum profit using a graph in Python.

## Theory

The Rod Cutting problem is a classic Dynamic Programming problem where the goal is to determine the maximum profit obtainable by cutting a rod of length n into smaller pieces and selling them. The idea is to try all possible cuts and choose the one that gives the maximum profit. Dynamic Programming is used to store intermediate results and avoid recomputation.

## Algorithm

1. Initialize a DP array to store maximum profit for each length
2. For each rod length i, try all possible cuts j
3. Compute maximum value using price[j] + dp[i - j - 1]
4. Store the maximum value in dp[i]
5. Repeat until the full length is evaluated

## Input

Rod length (n) and an array of prices where price[i] represents the value of a rod of length (i + 1).

## Output

Maximum obtainable profit for the given rod length.

## Graph Visualization

A Python program is used to plot a graph with rod length on the x-axis and maximum profit on the y-axis. This helps in understanding how profit increases with length using Dynamic Programming.

## Time Complexity

O(n^2)

## Conclusion

The Rod Cutting problem demonstrates the effectiveness of Dynamic Programming in optimization problems. It ensures maximum profit by considering all possible cuts and visualizing the result using a graph improves understanding.
