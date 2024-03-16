#include<bits/stdc++.h>
using namespace std;


int main(){

    int a, b;

    cout<<"Enter the first number: ";
      cin>>a;

    cout<<"Enter the second number: ";
      cin>>b;

    cout<<"Before operation a is:"<<a<<endl;   
    cout<<"Before operation b is:"<<b<<endl;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout<<"After operation a is:"<<a<<endl;  
    cout<<"After operation b is:"<<b<<endl;  
}