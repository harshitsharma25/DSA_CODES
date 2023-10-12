#include<iostream>
using namespace std;

// void frequencyCalc(int arr[],int size){
//     int m = 0;

//     for (int i = 0; i < size; i += m)
//     {
//        int count = 1;

//        for (int j = i+1; j < size; j++)
//        {
//           if (arr[i] == arr[j])
//           {
//              count++;
//           }
//        }

//          m = count;

//          cout<<"occurrences of "<<arr[i] <<" is: "<<count<<endl;
       
//     }
    
// }


void frequencyCalc(int arr[],int size){
    
    int i = 1,freq=1;

    while(i<size){

      while (i < size && arr[i] == arr[i-1])
      {
        freq++;
        i++;
      }

      cout<<"frequencies of "<<arr[i-1] <<" is: "<<freq<<endl;

      i++;
      freq = 1;

    }

    if ( (size == 1) || (arr[size-1] != arr[size-2]) )
    {
       cout<<"frequencies of "<<arr[size-1]<<" is: "<<1;
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

    frequencyCalc(arr,size);
      
}