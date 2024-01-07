#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string reverseWords(string s){
    string ans= "";
   

    int n = s.length();
    int j = n-1;

    while(s[j] == ' '){
        j--;
    }

    int index = j;

    for(int i=j;i>=0;){

       while(index >= 0) {
            if(s[index] != ' ')
             index--;

             else break;
        }

       ans += s.substr(index+1,i-index);

    //    int m=ans.length();

     while(index != -1  && s[index] == ' '){
        index--;
       }

       if(index!=-1) 
         ans += ' ';

      

       i = index;
    }

    return ans;
}

int main(){
    string s;
    cout<<"Enter string:";
     getline(cin,s);

    cout<<"answer is:"<<reverseWords(s);
}