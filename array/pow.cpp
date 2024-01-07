#include <iostream>
using namespace std;

double myPow(double x, int n) {
        double ans;
        double temp = x;
       if(n>0) {
       for(int i=1;i<n;i++){
            x*=temp;
        }
        ans = x;
       }
    

        return ans;
    }

int main()
{
    int pow;
    double n;

    cout<<"enter your number:";
      cin>>n;
      
    cout<<"enter your power:";  
      cin>>pow;

    cout<<"your answer is:" << myPow(n,pow);
}