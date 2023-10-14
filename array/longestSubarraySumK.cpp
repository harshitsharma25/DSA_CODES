#include<iostream>
using namespace std;
 
  //fine and well

int longestSubarrayWithsumK(int arr[],int size,int required_sum){
    
    int maxCount = -1,len = -1;
    for (int i = 0; i < size-1; i++)
    {
        int sum = 0,count = 0;
        for (int j = i; j < size; j++)
        {
           sum += arr[j];
           if (sum <= required_sum)
           {
              count++;
              maxCount = max(maxCount,count);
              if(sum == required_sum)
                len = maxCount;
           }

           else break;
           
        }
        
    }

    return len;
    
}

int main(){

    int size,arr[10],k;
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: " ;
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

    cout<<"Enter required sum: " ;
       cin>>k;
      
    cout<<"largest length : "<<longestSubarrayWithsumK(arr,size,k);
}