#include<bits/stdc++.h>
#include<iostream>
using namespace std;

    // int minOperations(vector<int>& nums) {
    //     int oper = 0;

    //     unordered_map<int,int> mp;

    //     for(int i=0;i<nums.size();i++){
    //         mp[nums[i]]++;
    //     }

    //     for(auto i:mp){
            
        
    //         if(i.second == 2 || i.second==4 || i.second == 5)
    //         {
    //             if(i.second == 2) oper += 1;
    //             else if(i.second == 4) oper += 2;
    //             else oper += 2;
    //         }

    //         else if((i.second % 5 == 0) && (i.second%10 != 0))
    //         {
    //             int rem = i.second%6;
    //             if(rem==3){
    //             int val = i.second-rem;
    //             oper += val/3;
    //             oper += 1;}

    //             else if(rem==1){
    //                 int val = i.second-4;
    //                 oper += val/3;
    //                 oper += 2;
    //             }
    //             else if(rem==5){
    //                 int val = i.second-5;
    //                 oper += val/3;
    //                 oper += 2;
    //             }
    //         }

    //         else if(i.second % 3 == 0)
    //         {
    //             oper += i.second/3;
    //         }

    //         else if(i.second%2==0 && i.second>5)
    //         {

    //             int rem = i.second % 6;  
    //               oper += rem/2;

    //             int remain = i.second - rem;
    //               oper += remain/3;
                
    //         }


    //         else if(i.second==1){
    //            return -1;
    //         }

    //         else if(i.second > 5){
    //             int val = i.second-3;
    //             int rem = val % 6;  
    //               oper += rem/2;

    //             int remain = val - rem;
    //               oper += remain/3;
    //               oper += 1;
    //         }  
    //     }
    //     return oper;
    // }


 int minOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto a: nums){
            mp[a]++;
        }

        int count=0;
        for(auto a: mp)
        {
            int t = a.second;
            if(t==1)return -1;
            count += t/3;
            if(t%3==0)count++;
        }
        return count;
    }
    

    int main() {
        int oper = 0,size,element;
        // int arr[10];
        vector<int> nums;
        
        cout<<"enter size: ";
          cin>>size;

        cout<<"enter array: ";
         for(int i=0;i<size;i++){
            cin>>element;
            nums.push_back(element);
         }


    cout<<"total operations are: "<<minOperations(nums);
    return 0;
        
}