#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void leftRotateByd(int arr[],int size,int d){

    int temp[10];
     d %= size;

    for (int i = 0; i < d; i++)
    {
      temp[i] = arr[i];
    }
    for (int i = d; i < size; i++)
    {
        arr[i-d] = arr[i];
    }

    for (int i = 0; i < d; i++)
    {
      arr[size-d+i] = temp[i];
    }

    cout<<"Final array is: "; 
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

}

// void reverseByd(int arr[],int start,int end){

//   while (start <= end)
//   {
//     int temp = arr[start];
//     arr[start] = arr[end];
//     arr[end] = temp;

//     start++;
//     end--;
//   }
  
// }

// void leftRotateByd(int arr[],int size,int d){

//   d %= size;

//   // reverse(arr,arr + d);                  only for predefined function reverse()
//   // reverse(arr + d,arr + size);
//   // reverse(arr,arr+size);

//   reverseByd(arr,0,d-1);
//   reverseByd(arr,d,size-1);
//   reverseByd(arr,0,size-1);




//   cout<<"final array is: ";
//   for (int i = 0; i < size; i++)
//   {
//     cout<<arr[i]<<" ";
//   }
  

// }

int main(){
    int size,d;
    int arr[10];
    cout<<"Enter the size: ";
      cin>>size;

     cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

      cout<<"Left rotate by : ";
        cin>>d;

      leftRotateByd(arr,size,d);
      
}