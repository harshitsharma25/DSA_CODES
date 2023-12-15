#include<iostream>
using namespace std;

// int kadaneAlgorithm(int arr[],int size){
//   int maxi = arr[0];

//   for (int i = 0; i < size; i++)
//   {
//    int sum = 0;
//    for (int j = i; j < size; j++)
//    {
//       sum += arr[j];
//       maxi = max(maxi,sum);

//    }
   
//   }
//   return maxi;
  
// }

int kadaneAlgorithm(int arr[],int size){
  int maxi = INT_MIN,sum = 0;

  for(int i =0; i<size; i++){
    sum += arr[i];
    maxi = max(maxi,sum);
    if(sum < 0){
      sum = 0;
    }
  }
  return maxi;
}
int main(){

    int size,arr[10];
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
       cin>>arr[i];

    cout<<"maximum subarray sum is: "<<kadaneAlgorithm(arr,size);
      
}