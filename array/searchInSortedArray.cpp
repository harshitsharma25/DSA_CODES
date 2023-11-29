#include<iostream>
using namespace std;
int searchSortedArray(int arr[],int size,int key){
    int low = 0, high = size-1;
    while(low <= high){
        int mid = (low+high)/2;

        if(arr[mid] == key) return mid;

        if (arr[low] <= arr[mid])
        {
          if ((arr[low] <= key ) &&  (key <= arr[mid] ))
          {
            high = mid-1;
          }
          else 
             low = mid+1;
        }

        else{
            if((arr[mid] <= key) && (key <= arr[high])){
                low = mid+1;
            }
            else
               high  = mid+1;
        }
        
    }
    return -1;
}

int main(){
    int size,arr[10],key;
    cout<<"Enter size:";
       cin>>size;

    cout<<"Enter an array:";
       for (int i = 0; i < size; i++)
       {
          cin>>arr[i];
       }
    cout<<"ENter key:";
       cin>>key;

    cout<<"answer is:"<<searchSortedArray(arr,size,key);
       
}