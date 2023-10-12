#include<iostream>
using namespace std;

// void leadersInArray(int arr[],int size){
//     int curr = arr[size-1];

//     cout<<curr<<" ";

//     for (int i = size-2; i > 0; i--)
//     {
//         if (curr < arr[i])
//         {
//           curr = arr[i];
//           cout<<curr<<" ";
//         }
        
//     }
    
// }


void leadersInArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
         bool flag = false;

       for (int j = i+1; j< size; j++)
       {
          if(arr[j] >= arr[i]){
            flag = true;
            break;
          }
       }

       if(flag == false )
       {
        cout<<arr[i]<<" ";
       }
       
    }
 }


int main(){
    int size,arr[10],d;
    cout<<"Enter the size: ";
      cin>>size;

     cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

     

      leadersInArray(arr,size);
      
}