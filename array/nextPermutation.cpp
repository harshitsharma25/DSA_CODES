#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void nextPermutation(vector<int> nums){
     int index = -1;

        for(int i = nums.size()-2; i>=0; i++){
            if(nums[i] < nums[i+1]){
                index = i;
                break;
            }
        }

        if(index == -1){
            reverse(nums.begin(),nums.end());
        }

        else{
            
            for(int i = nums.size()-1; i>index; i--){
                if(nums[i] > nums[index]){
                    swap(nums[i],nums[index]);
                    break;
                }
            }

            reverse(nums.begin()+index+1,nums.end());
        }

}



int main(){

    int size;
    vector<int> nums(10);

    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
        cin>>nums[i];
      }

//    cout <<"profit is: "<< buySellStock(arr,start,end);
      nextPermutation(nums);

      cout<<"next permutation is: ";
      for (int i = 0; i < nums.size(); i++)
      {
       cout<<nums[i]<<" ";
      }

}