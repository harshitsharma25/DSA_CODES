#include<bits/stdc++.h>
using namespace std;


long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0;
        int valToDecrease = 0;
        int size = happiness.size()-1;
        
        sort(happiness.begin(),happiness.end());
        
        for(int i=size;i>=0;i--){
            if(happiness[i] <= 0 || k==0) break;
            sum += happiness[i];
            valToDecrease += 1;
            
            if(!(i == 0))
              happiness[i-1] -= valToDecrease;
            k--;
        }
        
        return sum;
    }


int main(){
    vector<int> apple = {2,83,62};
    int k = 3;

    int ans = maximumHappinessSum(apple,k);
    cout<<"answer is:"<<ans;
}