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

int leaders(int arr[],int size){
  int temp[10],res = 0,maxi = INT_MIN;

  for (int i = size-1; i >= 0; i--)
  {
    if(arr[i] > maxi){
      temp[res++] = arr[i];
      maxi = max(maxi,arr[i]);
    }
  }

  cout<<"leaders are: ";
  for (int i = 0; i < res; i++)
  {
   cout<<temp[i]<<" ";
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


  //  cout<<"answer is: " ;
   leaders(arr,size);
    //  cout<<moveZeroesEnd(arr,size);

      
}