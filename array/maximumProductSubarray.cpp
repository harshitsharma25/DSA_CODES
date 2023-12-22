#include<iostream>
using namespace std;

int maxProductSubarray(int arr[],int size){
    int pref = 1 , suff = 1;
    int maxi = INT_MIN;

    for (int i = 0; i < size; i++)
    {
       if(pref == 0) pref = 1;
       if(suff == 0) suff = 1;

       pref *= arr[i];
       suff *= arr[size-i-1];
       maxi = max(maxi,max(pref,suff));
    }
    
    return maxi;
}

int main(){
    int size,arr[10];
    cout<<"Enter the size :";
      cin>>size;

    cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
       cin>>arr[i];
      }

   cout<<"answer is:"<< maxProductSubarray(arr,size);
      
}