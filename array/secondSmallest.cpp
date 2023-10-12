#include<iostream>
#include<algorithm>
using namespace std;

int secondSmallest(int arr[],int size){

    int smallest = arr[0];
    int sSmallest = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            sSmallest = smallest;
            smallest = arr[i];
        }

        else if(arr[i] > smallest  && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
        
    }
    return sSmallest;
}


int main(){
    int size,arr[10],res=0;
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: "  ;
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

    

      // int second = arr[secondLargest(arr,size)];

    int second =  secondSmallest(arr,size);
   
      cout<<"Second smallest value is: "<<second;
      
      
}