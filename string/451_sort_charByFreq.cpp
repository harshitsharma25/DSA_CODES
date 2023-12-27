#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string charCounter(string s){

    unordered_map<char,int> freq;  // declaring the unordered map 'freq'.
      int n = s.size();

        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }

        // Now convert unordered map freq to vector for the sorting.
    vector<pair<char,int>> freq_arr(freq.begin(),freq.end());

    sort(freq_arr.begin(),freq_arr.end(), [](auto& f1,auto& f2){
        return f1.second > f2.second;
    });

    // hence, our vector array is sorted in decreasing order.

    string ans = "";

    // for(int i=0;i<;i++){                // Here, int 'i' don't iterate in the vector of type pair<char,int> so only
                                          // pair type iterate in the pair.

    // }

    for(pair<char,int> pair : freq_arr){                      // same as for(int i : arr){}
      while(pair.second-- > 0) ans += pair.first;
    }

    return ans;

        
}

int main(){

    int size;
    string s;

    // cout<<"Enter the size :";
    //   cin>>size;

    cout<<"Enter the string : ";
     cin >> s;

   

  cout << "your answer is: " << charCounter(s);
      
}