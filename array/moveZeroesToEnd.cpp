#include<iostream>
using namespace std;

// void moveZeroesToEnd(int arr[],int size){

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == 0 )
//         {
//           for (int j = i+1; j < size; j++)
//           {
//             if (arr[j] != 0)
//             {
//                 // cout<<"i :"<<i<<"  j :"<<j<<endl;
//                 swap(arr[i],arr[j]);
//                 break;
//             }
            
//           }
          
//         }
        
//     }

//     cout<<"Final array is: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
    
// }

void moveZeroesToEnd(int arr[],int size){
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i],arr[count]);
      count++;
    }
    
  }

  cout<<"final array is: ";
  for (int i = 0; i < size; i++)
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

      moveZeroesToEnd(arr,size);
         
}