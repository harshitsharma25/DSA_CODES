#include<iostream>
using namespace std;

int insertionSort(int arr[],int size){

    for (int i = 0; i < size; i++)
    {
        // for (int j = i; j > 0 ; j--)
        // {
        //    if (arr[j] < arr[j-1])
        //    {
        //      swap(arr[j-1],arr[j]);
        //    }
           
        // }

        // OR

        int j = i;
 
        while (j>0 && arr[j] < arr[j-1])
        {
          swap(arr[j-1],arr[j]);
          j--;
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

    cout<<"Enter size: ";  cin>>size;

    cout<<"Enter an array: ";
    for (int i = 0; i < size; i++)  cin>>arr[i];

    insertionSort(arr,size);

}