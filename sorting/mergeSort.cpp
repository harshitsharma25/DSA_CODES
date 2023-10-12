#include<iostream>
using namespace std;

int merge(int arr[],int low,int mid,int high){                     // Merge function     
   
   int left = low, right = mid+1;
   int temp[10],res = 0;

   while (left <= mid  && right <= high)
   {
      if (arr[left] <= arr[right])
         { 
            temp[res] = arr[left];
            left++;
            res++;
         }

       else {
           temp[res] = arr[right];
           right++;
           res++;
       }  
      
   }

   while (left <= mid)
   {
      temp[res] = arr[left];
      left++;
      res++;
   }

   while(right <= high){
    temp[res] = arr[right];
    right++;
    res++;
   }

   for (int i = low; i <= high; i++)
   {
      cout<<"i is: "<<i<<endl;
      arr[i] = temp[i-low];
   }
   

}



void mergeSort(int arr[],int low,int high){                         // MergeSort function   -- Divider function        
   
    if (high > low){
        
    int mid = low + (high-low)/2;

    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
    }
    
}

int main(){
    int size,arr[10];

    cout<<"Enter the size: ";
      cin>>size;

   cout<<"Enter an array: ";
     for (int i = 0; i < size; i++){
         cin>>arr[i];
    }

    int start = 0, end = size-1;
 
    mergeSort(arr,start,end);

    cout<<"final array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
     
}