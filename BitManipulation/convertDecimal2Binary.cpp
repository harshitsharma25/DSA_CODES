#include<bits/stdc++.h>
using namespace std;


string reverse(string num){
    string ans = "";
    int size = num.length();

    for(int i=size-1; i>=0; i--){
        ans += num[i];
    }

    return ans;
}

string convertDecimal2Binary(int num){
    string res = "";

    while(num > 0){

        if(num % 2 == 1) res += '1';
        else res += '0';

        num /= 2;
    }

   res = reverse(res);

    return res;
}

int main(){
    int num;
  cout<<"Enter Your Decimal Number:";
    cin>>num;

 


   cout<<"Your Binary equivalent is:" << convertDecimal2Binary(num);
     
}