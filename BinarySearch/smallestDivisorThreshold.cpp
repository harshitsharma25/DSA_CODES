#include<iostream>
#include<bits/stdc++.h>
using namespace std; 


int max_no(int arr[],int size){

    int maxi = INT_MIN;
    for(int i=0;i<size;i++){
        if(maxi < arr[i])
           maxi = arr[i];
    }
    return maxi;
}

int sumArray(int arr[],int num,int size){
    int ans1 = 0;
    
    for(int i=0;i<size;i++){
        ans1 = ans1 + ceil((double)arr[i]/(double)num);
    }

    return ans1;
}


int smallestDivisor(int arr[],int size, int threshold) {
        int low = 1;
        int high = max_no(arr,size);
        // int size = arr.size();
        int ans = -1;

        while(low <= high){
            int mid = (low+high)/2;

            if(sumArray(arr,mid,size) <= threshold){
                ans = mid;
                high = mid-1;
            }
            else{
                low = mid + 1;
            }
        }
        
        return ans;
    }

int main(){
    int threshold,arr[10],size;

    cout<<"Enter the threshold: ";
      cin>>threshold;

    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter the array: ";
     for (int i = 0; i < size; i++)
     {
        cin>>arr[i];
     }
     
        
    cout<<"answer is:"<<smallestDivisor(arr,size,threshold);
}