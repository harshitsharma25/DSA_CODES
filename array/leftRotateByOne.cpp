#include<iostream>
using namespace std;

int leftRotateByOne(int arr[],int size){
    int temp = arr[0];

    for (int i = 1; i < size; i++)
    {
        arr[i-1] = arr[i];
    }

    arr[size-1] = temp;

    cout<<"final array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main(){

    int size,arr[10];
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: ";
     for (int i = 0; i < size; i++)
     {
       cin>>arr[i];
     }

     leftRotateByOne(arr,size);
     
}