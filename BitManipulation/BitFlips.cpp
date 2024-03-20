#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int start = 9 , goal = 15, count = 0;
    int ans = start ^ goal;         // NO. of set bits in the result of this xor opeartion will tell us how many times we need to flip the bits to get the result.
    
    while(ans != 0){
        ans = ans & (ans-1);        // after that count the number of set bits
        count++;
    }

    cout<<"no. of bit flips are:"<<count;
}