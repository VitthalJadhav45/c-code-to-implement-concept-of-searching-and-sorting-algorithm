#include <iostream>
using namespace std;

void display(int *arr, int size)
{
    cout << "Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *ar, int mid, int low, int high)
{//O(n)
    int i = low;
    int j = mid + 1;
    int k = low;
    int tmp[50];

    while (i <= mid && j <= high)
    {
        if (ar[i] < ar[j])
        {
            tmp[k] = ar[i];
            i++;
            k++;
        }
        else
        {
            tmp[k] = ar[j];
            j++;
            k++;
        }
    }
    while (i <= mid)
    {
        tmp[k] = ar[i];
        i++;
        k++;
    }
    while (j <= high)
    {
        tmp[k] = ar[j];
        j++;
        k++;
    }

    for (int i = low; i <= high; i++)
    {
        ar[i] = tmp[i];
    }
}

void mergeSort(int *ar, int low, int high)
{//O(logn)
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(ar, low, mid);
        mergeSort(ar, mid + 1, high);
        merge(ar, mid, low, high);
    }
}
int main()
{
    int arr[] = {4, 2, 8, 5, 3, 1, 9, 4, 6, 02};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);
    mergeSort(arr, 0, size);
    display(arr, size);

    return 0;
}