#include<iostream>
using namespace std;

 int binary_searching_arr(int arr[],int size,int element){
     int low=0;
     int high=size;
    
     while(low<=high){
          int mid = low+ (high-low)/2;//it must be present inside of loop
        // int mid = (low + high)/2;  // this also shows first and last element
         if(arr[mid]==element){
             return mid;
         }
         if(arr[mid]<element){
             low=mid+1;
         }
         else{
             high=mid-1;
         }
     }
     return -1;
 }
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element;
    cout<<"Enter element for searching "<<endl;
    cin>>element;
    int position=binary_searching_arr(arr,size,element);
    if(position== -1){
        cout<<"Element is not found "<<endl;
    }else{
    cout<<"Posititon of element is "<<position<<endl;
    }
    return 0;
}