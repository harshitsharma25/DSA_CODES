#include<iostream>
using namespace std;

int number_appear_once_other_two(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        int count = 0, num = arr[i];
        for (int j = 0; j < size; j++)
        {
           if (arr[j] == arr[i])
           {
              count++;
           }
           
        }

        if(count == 1)
           return arr[i];
     }
}

int main(){
    int size,arr[10];

    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array : ";
      for (int i = 0; i < size; i++)
      {
       cin>> arr[i];
      }

    cout<<"number appear once is: "<<number_appear_once_other_two(arr,size);
}