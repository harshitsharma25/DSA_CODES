                            //    major element is that whose count is greater than n/2 or count > n/2  (n = size of an array)

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

                                                    // BETTER APPROACH T.C = O(n logn)

// int findMajority(int arr[],int size){

//     map<int,int> mpp;
//     int ans;

//     for (int i = 0; i < size; i++)
//        mpp[arr[i]]++;

//    for(auto it: mpp){
//      if(it.second > (size/2)){
//         ans = it.first;
//      }
//    }
       
//   return ans;
// }

                                                  // BEST APPROACH

int findMajority(int arr[],int size) {
     int count = 0,element;


    for (int i = 0; i < size; i++)
    {
      
       if(count == 0){
         count = 1;
         element = arr[i];
       }

       else if(arr[i] == element){
        count++;
     }

     else 
       count--;
    }

    // i am considering that element which comes at last is my major element.

    int count1 = 0;
    for (int i = 0; i < size; i++)
    {
        if(element == arr[i])
           count1++;
       
    }

    if(count1 > (size/2))
      return element;

return -1;

}

int main(){

    int size,arr[10];  
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

    cout<<"majority element is: "<< findMajority(arr,size);


      
}