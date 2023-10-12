#include<iostream>
using namespace std;

int moveZeroesEnd(int arr[],int size){

  int count = 0;

  for (int i = 0; i < size; i++)
  {
    if (arr[i] != 0)
    {
      arr[count++] = arr[i];
    }
    
  }

  for (int i = count; i < size; i++)
  {
    arr[i] = 0;
  }
  

  cout<<"count is: "<<count<<endl;

  cout<<"array is: ";

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


  //  cout<<"answer is: " ;
   moveZeroesEnd(arr,size);
    //  cout<<moveZeroesEnd(arr,size);

      
}