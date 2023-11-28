#include<bits/stdc++.h>
using namespace std;

int floor(int arr[],int size, int key){
     int low = 0 , high = size-1,floor = -1 ;

   while (low <= high){
    int mid = (low + high)/2;

    if(arr[mid] <= key){
    floor = arr[mid];
    low = mid+1;
    }
   
    else{
        high = mid-1;
    }
   }
   return floor;
}

int ceil(int arr[],int size, int key){
     int low = 0 , high = size-1,ceil = -1 ;

   while (low <= high){
    int mid = (low + high)/2;

    if(arr[mid] >= key){
     ceil = arr[mid];
     high = mid-1;
    }
   
    else{
        low = mid+1;
    }
   }
   return ceil;
}

int floor_find(int arr[],int size,int key){

   int floor_val = floor(arr,size,key);
   int ceil_val = ceil(arr,size,key);

cout<<"floor is:"<<floor_val<<" ceil is:"<<ceil_val;
   
}


int main(){
    int size,arr[10],key;
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

    cout<<"Enter key:";
      cin>>key;

    // cout<<"floor is:";
    floor_find(arr,size,key);
 

}