#include<iostream>
using namespace std;

// int trappingRainwater(int arr[],int size){
//     int res = 0;

//     for (int i = 1; i < size-1; i++)
//     {
//         int lmax = arr[i];

//         for (int j = 0; j < i; j++)
//           lmax = max(lmax,arr[j]);

//         int rmax = arr[i];

//         for (int j = i+1; j < size; j++)
//           rmax = max(rmax,arr[j]);

//         res = res + (min(lmax,rmax) - arr[i]);
        
//     }

//     return res;
    
// }

int trappingRainwater(int arr[],int size){
    
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

    cout<<"Trapped Rainwater is: "<<trappingRainwater(arr,size);

      
}