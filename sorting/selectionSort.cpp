#include<iostream>
using namespace std;

int selectionSort(int arr[],int size){
     
     for (int i = 0; i < size-1; i++){
        int mini = i;

        for (int j = i+1; j < size; j++){
          if (arr[j] < arr[mini]) {
            mini = j;
          }
          
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
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

    selectionSort(arr,size);

}