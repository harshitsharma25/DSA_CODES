#include<iostream>
using namespace std;

int main(){
    int size,arr[20],res=0;
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: ";
    for (int i = 0; i < size; i++)
    {
       cin>>arr[i];

    }

    cout<<"Largest Number is: ";
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
        
    }
    cout<<arr[res];


    
}