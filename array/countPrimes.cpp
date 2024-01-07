#include <iostream>
using namespace std;

// bool isPrime(int num)
// {
//     for (int i = 2; i * i <= num; i++)
//     {
//         if (num % i == 0)
//             return false;
//     }
//     return true;
// }

int countPrimes(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return 0;
    int cnt = 1;

    for (int i = 3; i < n; i++)
    {
        if (!(i%2==0)){
            cnt += 1;
            cout<<i<<" ";
        }
            
    }
    cout<<endl;
    return cnt;
}

int main()
{
    int n;
    cout<<"enter your number:";
      cin>>n;

    cout<<"your answer is:" << countPrimes(n);
}