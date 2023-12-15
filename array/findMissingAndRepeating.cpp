#include<bits/stdc++.h>

using namespace std;


                                   //BRUTE FORCE APPROACH  T.C = O(N^2),S.C = O(1)

// int findMissingAndRepeating(int arr[],int size){
//     int repeating = -1,missing = -1;

//     for (int i = 1; i <= size; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//            if(arr[j] == i) count++;
//         }
        
//         if(count == 2)
//             repeating = i;

//         else if(count == 0) missing = i;

//         if(repeating != -1 && missing != -1) break;
//     }

//     cout<<"Repeating element is:"<<repeating<<"  Missing element is:"<<missing;
    
// }

                                  //BETTER APPROACH (HASHING ) T.C = O(N) , S.C = O(N)

// void findMissingAndRepeating(int arr[],int size){
//     int repeating = -1,missing = -1;

//     int hash[size+1] = {0};
//     for (int i = 0; i < size; i++)
//     {
//         hash[arr[i]]++;
//     }

//     for (int i = 1; i <= size; i++)
//     {
//        if(hash[i] == 2) repeating = i;
//        else if(hash[i] == 0) missing = i;

//        if(repeating != -1 && missing != -1)  break;
//     }

//     cout<<"Repeating number is:"<<repeating << " Missing number is:"<<missing;
// }

                                        
                                        // OPTIMAL APPROACH 1   - MATH  T.C = O(N) , S.C = O(1)

void findMissingAndRepeating(int arr[],int size){

    // x = repeating number
    // y = missing number

    long long SN = (size * (size+1)) /2;
    long long S2N = (size * (size+1) * (2*size+1)) / 6;

    long long S = 0 , S2 = 0;

    for (int i = 0; i < size; i++)
    {
       S += arr[i];
       S2 += (long long)arr[i] * (long long)arr[i];
    }
    
    long long val1 = S-SN;
    long long val2 = S2-S2N;
    val2 = val2/val1;

    long long x = (val1 + val2)/2;
    long long y = x-val1;

    cout<<"Repeating number is:"<<(int)x << " Missing number is :"<<(int)y;
}

                                     // OPTIMAL APPROACH 2 - XOR

void findMissingAndRepeating(int arr[],int size){
    // x = repeating number
    // y = missing number
    

}

int main(){
    int size,arr[10];
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

    findMissingAndRepeating(arr,size);

}