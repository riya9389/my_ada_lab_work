#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void merge(int arr[], int left, int mid, int right, long long &comparisons)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
    {
        comparisons++;
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1)
        arr[k++] = L[i++];

    while (j < n2)
        arr[k++] = R[j++];
}

void mergeSort(int arr[], int left, int right, long long &comparisons)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, comparisons);
        mergeSort(arr, mid + 1, right, comparisons);
        merge(arr, left, mid, right, comparisons);
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
        mergeSort(arr, 0, n - 1, comparisons);
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
