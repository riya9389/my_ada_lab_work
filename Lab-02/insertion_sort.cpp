#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void insertionSort(int arr[], int n, long long &comparisons)
{
    comparisons = 0;

    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            comparisons++;
            arr[j + 1] = arr[j];
            j--;
        }

        if (j >= 0)
            comparisons++; 

        arr[j + 1] = key;
    }
}

int main()
{
    srand(time(0));

    for (int n = 1000; n <= 10000; n += 1000)
    {
        int arr[n];

        for (int i = 0; i < n; i++)
            arr[i] = rand() % 10000;

        long long comparisons = 0;
        clock_t start, end;

        start = clock();
        insertionSort(arr, n, comparisons);
        end = clock();

        double avgComparisons = (double)comparisons / n;
        double totalTime =
            double(end - start) / CLOCKS_PER_SEC;

        double avgTimeMicro =
            (totalTime / n) * 1e6;

        cout << n << "\t"
             << avgComparisons << "\t\t"
             << avgTimeMicro << endl;
    }

    return 0;
}
