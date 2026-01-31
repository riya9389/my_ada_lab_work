#include <iostream>
#include <ctime>
using namespace std;

int binarySearch(int arr[], int n, int key, int &comparisons)
{
    int low = 0, high = n - 1;
    comparisons = 0;

    while (low <= high)
    {
        comparisons++;
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main()
{

    for (int n = 1000; n <= 10000; n += 1000)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
            arr[i] = i + 1;

        double totalComparisons = 0;
        clock_t start, end;

        start = clock();

        for (int i = 0; i < n; i++)
        {
            int comparisons = 0;
            binarySearch(arr, n, arr[i], comparisons);
            totalComparisons += comparisons;
        }

        end = clock();

        double avgComparisons = totalComparisons / n;
        double totalTime =
            double(end - start) / CLOCKS_PER_SEC;

        double avgTimeMicro =
            (totalTime / n) * 1e6;

        cout << n << "\t"
             << avgComparisons << "\t"
             << avgTimeMicro << endl;
    }

    return 0;
}
