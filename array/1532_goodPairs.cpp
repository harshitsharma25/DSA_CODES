#include<bits/stdc++.h>
using namespace std;
int numIdenticalPairs(vector<int>& nums) {
        int cnt = 0;
       unordered_map<int,int> mp;
       for(auto i: nums){
           cnt += mp[i]++;          // it is going to the values of array , not to the indexes of the array.
       }
        return cnt;
    }

int main(){
    vector<int> arr = {1,2,3,1,1,3};
    int ans = numIdenticalPairs(arr);
    cout<<"answer is: "<<ans;

}