
Analysis of Merge Sort and Quick Sort
Overview

This repository contains the implementation and analysis of two important sorting algorithms:

Merge Sort

Quick Sort (Left element as pivot)

Both algorithms were implemented in C++ to calculate their execution time for different input sizes.
The obtained results were then used in Python to plot graphs showing the relationship between input size and execution time.

Algorithms Implemented
Merge Sort

Uses the divide and conquer technique

Recursively divides the array into halves

Merges sorted subarrays to produce the final sorted array

Time Complexity:

Best / Average / Worst: O(n log n)

Quick Sort

Uses leftmost element as pivot

Partitions the array around the pivot

Recursively sorts the subarrays

Time Complexity:

Best / Average: O(n log n)

Worst: O(n²) (already sorted input)

⏱ Time Measurement

Execution time was calculated in C++ using the clock() function

Input sizes ranged from 1000 to 10000

Average time per element (in microseconds) was computed

For small input sizes, execution time appears as 0 due to clock resolution limits

Graph Plotting Using Python

The output time values obtained from C++ programs were stored in Python arrays

Matplotlib was used to plot graphs

Graphs plotted:

Input Size vs Average Time (Merge Sort)

Input Size vs Average Time (Quick Sort)

These graphs help visualize and verify the theoretical time complexities of the algorithms.

Technologies Used

C++ – Algorithm implementation and time calculation

Python – Graph plotting

Matplotlib – Visualization library

GitHub – Version control and project hosting
