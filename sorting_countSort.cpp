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

int maximum(int* ar,int n){
      int max=0;
      for(int i=0;i<n;i++){
          if(ar[i] > max){
              max=ar[i];
          }
      }
      return max;
}

 void countSort(int* ar,int n){
     int i,j;
     int max=maximum(ar,n);
     int* count= new int(max);

     for(i=0;i<max+1;i++){
         count[i]=0;
     }

     for(i=0;i<n;i++){
         count[ar[i]]=count[ar[i]]+1;
     }

     i=0;
     j=0;

     while(i<=max){
         if(count[i]>0){
             ar[j]=i;
             count[i]=count[i]-1;
             j++;
         }else{
             i++;
         }
     }
 }
int main(){
    int arr[] = {4, 2, 8, 5, 3, 1, 9, 4, 6, 02};
    int size = sizeof(arr) / sizeof(arr[0]);

    display(arr, size);
     countSort(arr,size);
    display(arr, size);
    
    return 0;
}