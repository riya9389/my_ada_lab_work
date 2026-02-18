Kth Smallest Element Using Partition Algorithm (Quickselect)

Description

This program finds the Kth smallest element in an unsorted array using the Partition Algorithm (based on Quick Sort).
The approach used is called Quickselect Algorithm, which works similarly to Quick Sort but only processes the part of the array that contains the required element.

Algorithm Used

Uses Partition function
Selects first element as pivot
Places pivot in its correct sorted position
Recursively searches only the required side of the array
This improves efficiency compared to fully sorting the array.

How It Works:

Choose the first element as pivot.
Rearrange elements:
Smaller elements → left side
Larger elements → right side
Get pivot index.
Compare pivot index with k.
If equal → element found.
If greater → search left subarray.
If smaller → search right subarray.

Code Features:

Uses recursion
Implements partition logic manually
Does not sort full array

Time Complexity:

Average Case: O(n)
Worst Case: O(n²)
