#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool search(int nums[],int num,int n){
       int start = 0 , end = n-1;
       
       while(start <= end){
           int mid = (start+end)/2;
           if(nums[mid] == num){
               return true;
           }
           else if(nums[mid] < num){
               start = mid+1;
           }
           else{
               end = mid-1;
           }
       }
        return false;
   }

int main(){
    int n,nums[10],missing=0,repeatedNo=0;
    // cout<<"enter numbers:"<<endl;
    cout<<"enter size:";  cin>>n;
    

    cout<<"enter array:"; 
    for (int i = 0; i < n; i++)
    {
        cin>>nums[i];
    }
    sort(nums,nums+n);

     for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1])
              repeatedNo = nums[i];
        }


    
    for(int i = 1; i <= n; i++)
         {
          if(search(nums,i,n))
           continue;

          else{
              missing = i;
              break;
          }
           
         }

    cout<<"answer is:"<<repeatedNo<<" "<< missing;
    
}