#include<iostream>
using namespace std;

// int buySellStock(int arr[],int start,int end){

// if(end <= start){
//     return 0;
// }

// int profit = 0;

// for (int i = start; i < end; i++)
// {
//    for (int j = i+1; j <= end; j++)
//    {
//       if (arr[j] > arr[i])
//       {
//          int curr_profit = arr[j] - arr[i] + buySellStock(arr,start,i-1) + buySellStock(arr,j+1,end);

//          profit = max(profit,curr_profit);
//       }
      
//    }
   
// }

// return profit;

// }

int buySellStock(int arr[],int size){

    int profit = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[i-1])
        {
           profit += (arr[i] - arr[i-1]) ;
        }
        
    }
    return profit;
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

    int start = 0 , end = size-1;

      
      
//    cout <<"profit is: "<< buySellStock(arr,start,end);
      cout<<"profit is: "<<buySellStock(arr,size);


}