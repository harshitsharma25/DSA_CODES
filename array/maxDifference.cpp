#include<iostream>
using namespace std;

// int maxDifference(int arr[],int size){
// int maxVal = arr[1] - arr[0],val;

//     for (int i = 0; i < size; i++)
//     {
       
//         for (int j = i+1; j < size; j++)
//         {
//             val = arr[j] - arr[i];
//             maxVal = max(maxVal,val);
//         }
        
//     }

//     return maxVal;
    
// }


int maxDifference(int arr[],int size){

    int minVal = arr[0], res = arr[1] - arr[0];

    for (int i = 1; i < size; i++)
    {
       res = max(res,arr[i] - minVal);
       minVal = min(minVal,arr[i]);
    }
    return res;
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
    
    cout<<"max difference is: "<<maxDifference(arr,size);
    
}