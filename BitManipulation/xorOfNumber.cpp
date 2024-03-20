#include<bits/stdc++.h>
using namespace std;


// T.c = O(N) , S.c = O(1)
int xorOfNumber(int n){
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        num ^= i;
    }
    return num;
}


// T.c = O(1) , S.c = O(1)   (OPtimal solution)
// int xorOfNumber(int n){
//     if(n % 4 == 1) return 1;
//     else if(n % 4 == 2) return n+1;
//     else if(n  % 4 == 3) return 0;
//     else return n;

// }

int main(){
    
   int n;
   cout<<"Enter the number: ";
      cin>>n;

   cout<<"Xor of a number is:"<< xorOfNumber(n);
}