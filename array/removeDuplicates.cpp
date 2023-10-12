#include<iostream>
using namespace std;

// void removeDuplicates(int arr[],int size){
//     int res = 1,temp[size];

//     temp[0] = arr[0];

//     for (int i = 1; i < size; i++)
//     {
//         if(temp[res-1] != arr[i]){
//             temp[res] = arr[i];
//             res++;
//         }
//     }


//     cout<<"Final array is: ";
//     for (int i = 0; i < res; i++)
//     {
//       arr[i] = temp[i];
//     }

//     for (int i = 0; i < res; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    
// }

// void removeDuplicates(int arr[],int size){
//     int res = 1;

//     for (int i = 1; i < size; i++)
//     {
//         if (arr[res-1] != arr[i])
//         {
//             arr[res] = arr[i];
//             res++;
//         }
        
//     }

//     cout<<"final array is: ";
//     for (int i = 0; i < res; i++)
//     {
//        cout<<arr[i]<<" ";
//     }
    
    
// }


void removeDuplicates(int arr[],int size){
    int k =1;
    for (int i = 1; i < size; i++)
    {
       if (arr[i] > arr[i-1])
       {
         arr[k++] = arr[i];
       }
       
    }

    cout<<"final array is: ";
    for (int i = 0; i < k; i++)
    {
       cout<<arr[i]<<" ";
    }
    
    
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

      removeDuplicates(arr,size);
      
}