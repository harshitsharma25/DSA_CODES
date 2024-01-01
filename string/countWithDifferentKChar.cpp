#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int countSubStrings(string str, int k) 
{
   int n = str.size();
   int count = 0;

   for(int i=0;i<n;i++)
   {
       vector<int> charCount(26,0);
       int diffChar = 0;

       for(int j=i;j<n;j++){
           if(charCount[str[j]-'a']==0){
               diffChar++;
           }

           charCount[str[j]-'a']++;

           if(diffChar == k){
               count++;
           }

           else if(diffChar > k){
               break;
           }
       }

   }
   return count;
}



int main(){
    string s;
    int k;

    cout<<"Enter string: ";
      cin>>s;

    cout<<"Enter value k: ";
      cin>>k;

    cout<<"answer is: "<< countSubStrings(s,k);


}