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

//  void bubbleSort(int* ar,int n){
//      int temp;

//      for(int i=0;i< n-1;i++){
//          cout<<"workong on pass "<<i+1<<endl;
//          for(int j=0;j< n-1-i;j++){
//              if(ar[j]>ar[j+1]){
//                  temp=ar[j];
//                  ar[j]=ar[j+1];
//                  ar[j+1]=temp;
//              }
//          }
//      }
//  }
void bubbleSortAdaptive(int *ar, int n)
{
    int temp;
    //  int isSorted=0;
    int isSorted = 1;

    for (int i = 0; i < n - 1; i++)
    {
        cout << "workong on pass " << i + 1 << endl;
        //  isSorted=1;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
                isSorted = 0;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}

int main()
{
    // int arr[]={5,1,2,8,9,5,7,2};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);
    // bubbleSort(arr,size);
    bubbleSortAdaptive(arr, size);
    display(arr, size);

    return 0;
}