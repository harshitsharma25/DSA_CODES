#include<iostream>
#include<bits/stdc++.h>
using namespace std;


    string rightShift(string s,int shift){
        string temp="";
        int n = s.size();

        for(int i = n-shift; i<n; i++){  // copy the substring from n-shift
                                         // to n-1 index to temp string.
            temp += s[i];
        }

        for(int i = n-shift-1; i>=0; i--){  // right shift performed
            s[shift+i] = s[i];
        }

        for(int i=0;i<temp.size();i++){
            s[i] = temp[i];
        }

        return s;
    }




bool rotateString(string s,string goal){
    int s1 = s.size();
    int s2 = goal.size();

        if(s1 != s2) return false;

        for(int i=1;i<=s1;i++){
            if(rightShift(s,i)==goal)
              return true;

            else continue;  
        }

        return false;
}

int main(){
    int size;
    string s,goal;

    // cout<<"Enter the size :";
    //   cin>>size;

    cout<<"Enter the string goal: ";
     cin >> goal;

    cout<<"Enter the string your:";
      cin>>s;

   if(rotateString(s,goal)) cout<<"string is rotated";
   else   cout<<"string is not rotated";

      
}