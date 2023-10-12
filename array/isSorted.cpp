#include<iostream>
using namespace std;

int isSorted(int arr[],int size){
    bool flag = true;

for (int i = 0; i < size-1; i++)
{
     if (arr[i] > arr[i+1])
    {
        flag = false;
        break;
    }
}

    if (flag)
      cout<<"Array is sorted!";

    else
      cout<<"Array is not sorted";
    
    
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

     isSorted(arr,size);
     
}