#include<iostream>
using namespace std;
int countSubarrayWithSumXorK(int arr[],int size,int k){
    int totalCount = 0;

    for (int i = 0; i < size; i++)
    {
        int operation = 0, count = 0;
       for (int j = i; j < size; j++)
       {
          operation ^= arr[j];
          if(operation == k)  count+=1;
       }
       totalCount += count;
       
    }
    return totalCount;
}

int main(){
    int size,arr[10],k;
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
       cin>>arr[i];
      }

    cout<<"Enter the value of XOR : ";
      cin>>k;

    cout<<"answer is: "<<countSubarrayWithSumXorK(arr,size,k);
      
}