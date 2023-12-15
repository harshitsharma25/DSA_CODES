#include<iostream>
using namespace std;

int cube(int num,int count){

    int ans = 1;
    for (int i = 0; i < count; i++)
    {
       ans = ans * num;
    }
    return ans;
}

bool armstrong_num(int n){
int count = 0;
int num=n;

while(num > 0){
   count = count +1;
   num /= 10; 
}

int ans=0;
int n1 = n;

while(n>0){
    int rem = n%10;
    ans = ans + cube(rem,count);
    n /= 10;
}

if(ans == n1) return true;
else          return false;

}

int main(){
    int num;
    cout<<"Enter the number:";
      cin>>num;

    bool val = armstrong_num(num);  
    if(val)
    cout<<"This is a Armstrong Number";

    else
    cout<<"This is not a Armstrong Number";

}