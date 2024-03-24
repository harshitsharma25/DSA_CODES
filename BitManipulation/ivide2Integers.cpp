// this program is calculates the quotient without using the division operator.

#include<bits/stdc++.h>
using namespace std;



// brute force , T.c = O(dividend) or O(N) , S.c = O(1)
int divide2Integers(int dividend,int divisor){
    int sum = 0 , cnt = 0;
    while(sum + divisor <= dividend){
        cnt += 1;
        sum += divisor;
    }
    return cnt;
}



// optimal T.c = O(log N) ^ 2 and S.c = (1)
// int divide2Integers(int dividend,int divisor){
//     if(dividend == divisor) return 1;

//     bool sign = true;
//     if(dividend <= 0 && divisor > 0) sign = false;
//     if(dividend > 0  && divisor < 0) sign = false;

//     int ans = 0;
//     int numerator = dividend;
//     int denominator = divisor;

//     while(numerator >= denominator){
//         int count = 0;
//         while(numerator >= (denominator << (count + 1))){
//             count++;
//         }

//         ans += (1 << count);

//         numerator -= (divisor * (1<<count));
//     }

//     if(ans >= INT_MAX && sign == true) return INT_MAX;
//     else if(ans >= INT_MAX && sign == false) return INT_MIN;

//     return sign ? ans : -ans;
// }


int main(){

    int dividend, divisor;
    cout<<"Enter dividend:";
      cin>>dividend;

    cout<<"Enter divisor:";
      cin>> divisor; 

    cout<<"answer is:" << divide2Integers(dividend,divisor);
}