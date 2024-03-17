

#include<bits/stdc++.h>
using namespace std;



// program to check that ith bit is set or not
void IsithBitSet(int n , int i){
    
    if(n & (1<<i)){
        cout<< i<<"th bit is set";
    }  
    else{
        cout<<i<<"th bit is not set";
    }
}


// program to check n is odd or not.
void isOdd(int n){
    if(n & 1) cout<<"Yes, it is odd number.";
    else cout<<"No, it is not odd number";
}


//program to check number is power of 2 or not.
void isPowerOfTwo(int n){
    if((n & (n-1)) == 0){
        cout<<endl<<"Yes, it is power of two";
    }
    else{
        cout<<endl<<"No, it is not power of two";
    }
}

int main(){
    int n,i;
    cout<<"Enter your number:";
      cin>>n;

    // cout<<"Enter the ith value:";
    //   cin>>i;  

    // IsithBitSet(n,i);

    isOdd(n);
    isPowerOfTwo(n);



}