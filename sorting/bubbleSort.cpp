#include<iostream>
using namespace std;

int bubbleSort(int arr[],int size){

    for (int i = size-1; i > 0; i--)
    {
      bool isSwap = false;
      for (int j = 0; j < i; j++)
      {
        if (arr[j] > arr[j+1])
        {
          int temp = arr[j+1];
          arr[j+1] = arr[j];
          arr[j] = temp;
          isSwap = true;
        }
        
      }
      
      if(!isSwap)
           break;
    }

    cout<<"final array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}

int main(){
int size,arr[10];

    cout<<"Enter size: ";  cin>>size;

    cout<<"Enter an array: ";
    for (int i = 0; i < size; i++)  cin>>arr[i];

    bubbleSort(arr,size);

}