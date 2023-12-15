#include<iostream>
using namespace std;

int main(){
    int size,arr[10],key;

    cout<<"Enter the size:";
      cin>>size;

   cout<<"Enter an array:";
     for (int i = 0; i < size; i++)
     {
        cin>>arr[i];
     }

   cout<<"Enter the key:";
     cin>>key;
     

   for (int i = 0; i < size; i++)
   {
    if (arr[i] <= key)
    {
        key++;
    }

    else break;
    
   }

   cout<<"Answer is:" << key;
     
}