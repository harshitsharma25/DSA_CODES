// program to check that ith bit is set or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter your number:";
      cin>>n;

    cout<<"Enter the ith value:";
      cin>>i;  

    if(n & (1<<i)){
        cout<< i<<"th bit is set";
    }  
    else{
        cout<<i<<"th bit is not set";
    }
}