#include<iostream>
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

void insertionSorting(int* ar,int n){
    //for pass
    for(int i=1;i<=n-1;i++){
        int key=0,j;

        key=ar[i];
        j=i-1;

        while (j>=0 && ar[j]> key)
        {
            ar[j+1]=ar[j];
            j--;
        }
        ar[j+1]=key;
    }
}
int main(){
    int arr[] = {4,2,8,5,3,1,9,4,6,2};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);
    insertionSorting(arr,size);
    display(arr, size);

    return 0;
}