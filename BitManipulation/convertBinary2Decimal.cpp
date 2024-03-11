#include<bits/stdc++.h>
using namespace std;


int convert2Decimal(string binary){
    int p2 = 1,i=0;
    int ans=0;
    for(i = binary.length()-1 ; i>=0; i--){
        if(binary[i] == '1') ans += p2;
        p2 *= 2;
    }
    return ans;
}

int main(){
    string binary;
    cout << "Enter the Binary String:";
      cin >> binary;

    cout << "your decimal equivalent is:" << convert2Decimal(binary);
}