
# Lab-05 – Convex Hull & Greedy Algorithms

##  Overview
This lab contains implementations of:

1. **Brute Force Convex Hull**
2. **Quick Hull Algorithm**
3. **Greedy Approach (Knapsack Problem)**


##  Programs Included

###  Brute Force Hull
- Finds Convex Hull by checking every pair of points.
- Determines if all other points lie on one side of the line.
-  Time Complexity: **O(n³)**
-  Simple but slow for large inputs.



###  Quick Hull
- Divide and Conquer method (similar to QuickSort).
- Finds farthest points recursively to build hull.
-  Average: **O(n log n)**
-  Worst Case: **O(n²)**
-  Faster than brute force.


###  Greedy Approach (Knapsack)
- Solves 0/1 Knapsack using:
  - Greedy by Profit
  - Greedy by Weight
  - Greedy by Profit/Weight Ratio
- Compares all three methods.
-  Time Complexity: **O(n log n)**
-  May not give optimal solution always.

---

