//kth smallest element using partition algo

#include <iostream>
using namespace std;

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (true)
    {
        while (i <= high && arr[i] <= pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i >= j)
            break;

        swap(arr[i], arr[j]);
    }

    swap(arr[low], arr[j]);
    return j;  
}

int ksmall(int arr[], int low, int high, int k)
{
    if (low <= high)
    {
        int p = partition(arr, low, high);

        if (p == k)
            return arr[p];

        else if (p> k)
            return ksmall(arr, low, p - 1, k);

        else
            return ksmall(arr,p + 1, high, k);
    }

    return -1; 
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 3; 
    int result = ksmall(arr, 0, n - 1, k - 1); 

    cout << k << "small element is" << result << endl;

    return 0;
}
