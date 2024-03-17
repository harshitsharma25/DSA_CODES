#include<bits/stdc++.h>
using namespace std;

int  secondMethod(int n){
    int cnt = 0;
    while(n != 0){
        n = n & (n-1);
        cnt++;
    }  

    return cnt;
}

int main(){
    int n;
    cout<<"Enter the number:";
      cin>>n;

    cout<<"No. of set bits are:"<<secondMethod(n);
    // cout<<
    
}