#include<iostream>
using namespace std;

// int leaders(int arr[],int size){
//   int res = 0,temp[10];
//   for (int i = 0; i < size; i++)
//   {
//     bool flag = true;
//     for (int j = i+1; j < size; j++)
//     {
//      if(arr[i] < arr[j])
//         flag = false;
//     }

//     if(flag)
//        temp[res++] = arr[i];
    
//   }


//   cout<<"leaders are: ";
//   for (int i = 0; i < res; i++)
//   {
//     cout<<temp[i]<<" ";
//   }
  
  
// }

int zeroToEnd(int arr[],int size){
  int left = 0,right = size-1;
  while (left<right)
  {
    if(arr[left]==0 && arr[right]!=0)
    {
    swap(arr[left],arr[right]);
    left++; right--;
    }

    else if(arr[left] != 0){
      left++;
    }
    else if(arr[right] == 0){
      right--;
    }
  }

  for (int i = 0; i < size; i++)
  {
   cout<<arr[i]<<" ";
  }
  
  
  
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


   cout<<"answer is: " ;
   zeroToEnd(arr,size);


      
}