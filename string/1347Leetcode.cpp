// program to find minimum steps to convert string t to anagram of string s.

#include<bits/stdc++.h>
using namespace std;

     int minSteps(string s, string t) {
        vector<int> countS(26,0);
        vector<int> countT(26,0);

         for(char c : s){
            countS[c-'a']++;
        }

         for(char c : t){
            countT[c-'a']++;
        }

        int cnt = 0;

        for(int i=0;i<26;i++){
          cnt += abs(countS[i] - countT[i]);
        }
       
        return cnt/2;
    }

  int main(){
    string s,t;
    cout<<"Enter string s:";
      cin>>s;
    cout<<"Enter string t:";
      cin>>t;

    cout<<"answer is:"<<minSteps(s,t);

  }
