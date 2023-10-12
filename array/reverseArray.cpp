#include<iostream>
using namespace std;

void reverse(int arr[],int size){

   int low = 0 , high = size-1 , start1 = 0;

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;

        low++;
        high--;
    }
    
    cout<<"Reversed Array is: ";
    while (start1 < size)
    {
      cout<<arr[start1]<<" ";
      start1++;
      
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

      reverse(arr,size);
      
}