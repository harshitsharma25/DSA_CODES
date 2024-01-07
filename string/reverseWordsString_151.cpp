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
        }

       ans += s.substr(index+1,i-index);

    //    int m=ans.length();

       if(index!=-1) 
         ans += ' ';

       while(s[index] == ' '){
        index--;
       }

       i = index;
    }

    return ans;
}

int main(){
    string s;
    cout<<"Enter string: ";
       cin>>s;

    cout<<"answer is: "<<reverseWords(s);
}