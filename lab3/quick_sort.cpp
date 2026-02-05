#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int partition(int arr[], int low, int high, long long &comparisons)
{
    int pivot = arr[low];  
    int i = low + 1;
    int j = high;

    while (i <= j)
    {
        while (i <= high && arr[i] <= pivot)
        {
            comparisons++;
            i++;
        }

        while (arr[j] > pivot)
        {
            comparisons++;
            j--;
        }

        if (i < j)
            swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);  
    return j;
}

void quickSort(int arr[], int low, int high, long long &comparisons)
{
    if (low < high)
    {
        int pivotIndex = partition(arr, low, high, comparisons);
        quickSort(arr, low, pivotIndex - 1, comparisons);
        quickSort(arr, pivotIndex + 1, high, comparisons);
    }
}

int main()
{
    srand(time(0));

    cout << "N\tAvg Comparisons\tAvg Time (micro sec)" << endl;

    for (int n = 1000; n <= 10000; n += 1000)
    {
        int arr[n];

        for (int i = 0; i < n; i++)
            arr[i] = rand() % 10000;

        long long comparisons = 0;
        clock_t start, end;

        start = clock();
        quickSort(arr, 0, n - 1, comparisons);
        end = clock();

        double avgComparisons = (double)comparisons / n;
        double totalTime = double(end - start) / CLOCKS_PER_SEC;
        double avgTimeMicro = (totalTime / n) * 1e6;

        cout << n << "\t"
             << avgComparisons << "\t\t"
             << avgTimeMicro << endl;
    }

    return 0;
}
