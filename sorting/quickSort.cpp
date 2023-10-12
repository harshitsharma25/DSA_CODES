#include<iostream>
using namespace std;

int partition(int arr[],int low,int high){

    int i = low , j = high;
    int pivot = arr[low];

    while (i < j)
    {
       while (arr[i] <= pivot && i <= high)
       {
          i++;
       }

       while (arr[j] > pivot && j > low)
       {
          j--;
       }

       if(i < j)
        swap(arr[i], arr[j]);
       
    }

    swap(arr[low], arr[j]);
    return j;
    
}


void quickSort(int arr[],int low,int high){

    if(low < high){
        int pIndex = partition(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}

int main(){

    int size,arr[20];

    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

    quickSort(arr,0,size-1);

    cout<<"Sorted array is: ";
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    
      
}