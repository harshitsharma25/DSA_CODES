#include<iostream>
#include<bits/stdc++.h>
using namespace std;

    string myReverse(string s){
        int n = s.length() - 1;
        int i;
        char temp;

        for(i=0;i< s.length()/2;i++){
            temp = s[n];
            s[n] = s[i];
            s[i] = temp;
            n--;
        }
        return s;
    }


    string reverseWords(string s) {
        string ans = "";
        int i = 0,sIndex = 0;

       while(i<s.length()){
           if(s[i] == ' ' || i == s.length()-1){
               string t = "";

               if( i == s.length()-1) i+=1;
               t += s.substr(sIndex,i-sIndex); 
            //    cout<<t;
               ans += myReverse(t);

                if( i == s.length()) i-=1;
               if(i != (s.length()-2))
                 ans += ' ';

               sIndex = i+1;  
           }
           i++;
       }

        return ans;
    }


int main(){
    string s;
    cout<<"Enter string:";
    getline(cin,s);

   cout<<"your answer is:"<< reverseWords(s);
}