#include<iostream>
using namespace std;

                                     // T.C = O(sum-max+1) * O(N)

// int findMax(int arr[],int size){
//     int maxi = INT_MIN;

//     for (int i = 0; i < size; i++)
//     {
//         if(maxi < arr[i])
//             maxi = arr[i];
//     }
//     return maxi;
// }

// int findSum(int arr[],int size){
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//        sum += arr[i];
//     }
//     return sum;
// }

// int findCount(int arr[],int size,int pages){
//     int stuCount = 1 , book = arr[0];

//     for (int i = 1; i < size; i++)
//     {
//         if((book + arr[i]) <= pages){
//             book += arr[i];
//         }

//         else{
//             stuCount++;
//             book = arr[i];
//         }
//     }
//     return stuCount;
// }

// int main(){
//     int size,arr[10],m,ans;
//     cout<<"Enter the size:";
//       cin>>size;

//     cout<<"Enter an array:";
//       for (int i = 0; i < size; i++)
//       {
//         cin>>arr[i];
//       }

//     cout<<"Enter students required:";
//       cin>>m;

//     int low = findMax(arr,size) , high = findSum(arr,size);

//     for (int pages = low; pages <= high; pages++)
//     {
//         int cntStu = findCount(arr,size,pages);
//         if(cntStu == m){
//             ans = pages;
//             break;
//         }
//     }
    
//     cout<<"answer is:" << ans;
      
// }

