#include<iostream>
using namespace std;

                                                                 // BRUTE FORCE

// bool ls(int arr[],int size,int key){
//     for (int i = 0; i < size; i++)
//     {
//         if(arr[i] == key){
//             return true;
//         }
//     }
//     return false;
// }

// int longestSubsequence(int arr[],int size){
//     int maxCount = -1;
//     for (int i = 0; i < size; i++)
//     {
//         int x = arr[i]+1 , count = 1;
//         while (ls(arr,size,x) == true)
//         {
//             x = x+1;
//             count = count+1;
//             maxCount = max(maxCount,count);
//         }
        
         
//     } 
  
//     return maxCount;
// }

                                                             // BETTER APPROACH

int longestSubsequence(int arr[],int size)                                                             {
    
}

int main(){
    int size,arr[23];

    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array : ";
      for (int i = 0; i < size; i++)
      {
       cin>> arr[i];
      }

    cout<<"longestSubsequence is: "<<longestSubsequence(arr,size);
      
}