#include<iostream>
using namespace std;

  int search_element(int arr[],int n,int element){
      for (int i = 0; i < n; i++)
      {
          if(arr[i]==element)
           return i;
      }
      return -1;
      
  }
  int main(){
      int arr[]={76,3,65,9,34,66,45};
      int n=sizeof(arr)/sizeof(arr[0]);
    //   int n=7;
      int element;
      cout<<"Enter element for searching"<<endl;
      cin>>element;
      int position= search_element(arr,n,element);

      if(position== -1 ){
          cout<<"Element not found "<<endl;

      }
      else{
          cout<<"element position is "<<position+1<<endl;
  }
  }