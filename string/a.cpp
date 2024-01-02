#include<bits/stdc++.h>
#include<iostream>

using namespace std;

    int beautyCalculate(string s)
    {
        unordered_map<char,int> mpp;
        int maxi = -1 , mini = 1000;

        for(int i=0;i<s.size();i++)
        {
            mpp[s[i]]++;          // calculated the frequencies of all 
                                  // characters in a string.
        }

        for(auto i : mpp)
        {
            if(maxi < i.second)
               maxi = i.second;

            if(mini > i.second)   
               mini = i.second;
        }

        int diff = maxi - mini;
        return diff;

    }     


    int main() {
        int totalSum = 0;
        string s;

        cout<<"enter string: ";
          cin>>s;
        

        for(int i=0;i<s.length();i++)
        {  
          string tempS = "";
          for(int j=i;j<s.size();j++){ 
            tempS += s[j];
            totalSum += beautyCalculate(tempS);
          }
        }

    cout<<"total sum is: "<<totalSum;
    return 0;
        
}
