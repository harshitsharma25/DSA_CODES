#include<iostream>
using namespace std;

                                                    // BRUTE FORCE  T.C = O(N*N)

// int findMissing(int arr[],int size){
//     // arr[] = {1,2,4,5}
//     // arr[] = {1,2,4,3,5}
//     int res;
//     for (int i = 1; i <= size; i++)
//     {
//       bool flag = false;

//       for (int j = 0; j < size-1; j++)
//       {
//         if (arr[j] == i)
//         {
//           flag = true;
//           break;
//         }
        
//       }

//       if(!flag)
//          res = i;
      
//     }
    
   
//     cout<<"element is: "<<res;
     
    
// }

                                                    // BETTER APPROACH   T.C = O(N + N)

int findMissing(int arr[],int size){
  int hash[size+1] = {0};

  for (int i = 0; i < size-1; i++)
  {
    hash[arr[i]] = 1;
  }
 
 for (int i = 1; i <= size; i++)
 {
    if (hash[i] == 0)
    {
      return i; 
    }
    
 }
 
  
}   


                                            //  Best approach  -- sum approach T.C = O(N)

// int findMissing(int arr[],int size){

//   int sum = 0,aSum ;
//   aSum = (size*(size+1))/2;

//   for (int i = 0; i < size-1; i++)
//      sum += arr[i];

//   int missing = aSum - sum;   

//   return missing;

// }                    


                                                    // xor approach


// int findMissing(int arr[],int size) {

//   int xor1 = 0, xor2 = 0, ans;

//   for (int i = 1; i <= size; i++)
//     xor1 = xor1 ^ i;

//   for (int i = 0; i < size-1; i++)
//     xor2 = xor2 ^ arr[i];

//   ans = xor1 ^ xor2;

//   return ans;  

// }



int main(){
    int size,arr[10];

    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array : ";
      for (int i = 0; i < size-1; i++)
      {
       cin>> arr[i];
      }

    cout<<"missing number is: "<<findMissing(arr,size);
      
}