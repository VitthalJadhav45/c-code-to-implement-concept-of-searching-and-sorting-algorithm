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

int partition(int *ar, int low, int high)
{
    int pivot = ar[low];
    int temp;
    int i = low + 1;
    int j = high;

    do
    {
        while (ar[i] <= pivot)
        {
            i++;
        }
        while (ar[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    } while (i < j);

    temp = ar[low];
    ar[low] = ar[j];
    ar[j] = temp;

    return j;
}
void quickSort(int *ar, int low, int high)
{
    int partitionIndex;
    if (low < high)
    {
        partitionIndex = partition(ar, low, high);
        quickSort(ar, low, partitionIndex - 1);
        quickSort(ar, partitionIndex + 1, high);
    }
}

int main()
{
    int arr[] = {4, 2, 8, 5, 3, 1, 9, 4, 6, 02};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);
    quickSort(arr, 0, size - 1);
    display(arr, size);

    return 0;
}