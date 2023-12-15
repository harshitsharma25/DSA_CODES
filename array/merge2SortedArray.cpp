#include<iostream>
using namespace std;

                                              // BRUTE FORCE - (but with extra space)  T.C = O(N )

void merge2SortedArray(int arr1[],int arr2[],int size1,int size2){
    int left = 0, right = 0 , res = 0;
    int arr3[10];

    while(left < size1 && right < size2){
        if(arr1[left] <= arr2[right]){
            arr3[res] = arr1[left];
            res++;
            left++;
        }

        else{
            arr3[res] = arr2[right];
            res++;
            right++;
        }
    }

    while(left < size1){
        arr3[res] = arr1[left];
        res++;
        left++;
    }

    while(right < size2){
        arr3[res] = arr2[left];
        res++;
        right++;
    }

    cout<<"final array is: ";
    for (int i = 0; i < size1 + size2; i++)
    {
        cout<<arr3[i]<<" ";
    }
    
}

int main(){
    int size1,size2,arr1[10],arr2[10];
    cout<<"Enter the size 1: ";
      cin>>size1;

    cout<<"Enter the size 2: ";
      cin>>size2;

    cout<<"Enter an array 1: ";
      for (int i = 0; i < size1; i++)
      {
       cin>>arr1[i];
      }

    cout<<"Enter an array 2: ";
      for (int i = 0; i < size2; i++)
      {
       cin>>arr2[i];
      }

    merge2SortedArray(arr1,arr2,size1,size2);

      
}