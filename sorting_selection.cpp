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

void selectionSorting(int* ar,int n){
    int indexOfMin,temp;
    for(int i=0;i<n-1;i++){
        indexOfMin=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[indexOfMin]){
                indexOfMin=j;
            }
        }
        temp=ar[i];
        ar[i]=ar[indexOfMin];
        ar[indexOfMin]=temp;
    }
}

int main(){
    int arr[] = {4,2,8,5,3,1,9,4,6,02};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);

    selectionSorting(arr,size);
    display(arr, size);


    return 0;
}
