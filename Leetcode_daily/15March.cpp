#include<bits/stdc++.h>
using namespace std;

void productExceptSelf(vector<int>& nums) {
        int left = 0 , right = nums.size() - 1 , i = 0;
        vector<int> temp;

             while((left < i || right > i) && (i<nums.size())){
            int ans = 1;

            while(left < i){
                ans *= nums[left];
                left++;
            }

            while(right > i){
                ans *= nums[right];
                right--;
            }

            temp.push_back(ans);

            i++;  
            left = 0;
            right = nums.size() - 1;
        }

  
        // return temp;
      cout<< "Answer is:";
      for (int i = 0; i < temp.size()-1; i++)
      {
         cout << temp[i] <<" ";
      }
      

}


int main(){
int size;

cout<<"Enter the size:";
  cin>>size;

  vector<int> arr(size);

cout<<"Enter your array:";
  for (int i = 0; i < size; i++)
  {
     cin>>arr[i];
  }

// vector<int> ans =
 productExceptSelf(arr);
//  cout<<"answer is:";

//  for (int i = 0; i < size; i++)
//  {
//    cout << ans[i] << " ";
//  }
 
}