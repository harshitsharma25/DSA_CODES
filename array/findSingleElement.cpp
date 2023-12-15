#include<iostream>
using namespace std;

int findSingleElement(int arr[],int size){

    if(size == 1)                     return arr[0];

    if(arr[0] != arr[1])              return arr[0];
    if(arr[size-1] != arr[size-2])    return arr[size-1];

    int low = 1 ,high = size - 2;

    while(low <= high){
        int mid = (low+high)/2;

        if((arr[mid] != arr[mid-1]) && (arr[mid] != arr[mid+1]))
             return arr[mid];

        // element is present in left half if, else if condition is true.
        else if(((mid % 2 == 1) && (arr[mid] == arr[mid-1]))  || ((mid % 2 == 0) && (arr[mid] == arr[mid+1]))){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }

    return -1;
}

int main(){
    int size,arr[12];
    cout<<"Enter the size:";
      cin>>size;

    cout<<"Enter an array:";
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

   cout<<"single element is:"<<findSingleElement(arr,size);
      
}