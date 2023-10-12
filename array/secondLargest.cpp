#include<iostream>
#include<algorithm>
using namespace std;

                                                       // BRUTE FORCE APPROACH     T.C = O(n * logn)          


 
// int secondLargest(int arr[],int size){                     

//   sort(arr,arr + size);                             T.C = O(n* logn)

//   int largest = arr[size-1],secondLargest;

//   for (int i = size-2; i >= 0; i--)
//   {
//     if (arr[i] < largest)
//     {
//       secondLargest = arr[i];
//       break;
//     }
    
//   }
//   return secondLargest;
// }



                                                     // BETTER APPROACH    T.C = O(2N)




// int secondLargest(int arr[],int size){                 

//   int largest = arr[0];
   
//        for (int i = 1; i < size; i++)
//       {
//         if (arr[i] > largest)
//         {
//             largest = arr[i];
//         }
        
//       }

//       // cout<<"largest is: "<<largest;

//     int secondLargest = arr[0];

//    for (int i = 0; i < size; i++)
//    {
//      if (arr[i] != largest && arr[i] > secondLargest)
//      {
//          secondLargest = arr[i];
//      }
     
//    }
   
   
//     return secondLargest;

// }



                                                            // OPTIMAL APPROACH    T.C = O(N)

int secondLargest(int arr[],int size){

  int largest = arr[0], secondLargest = -1;

  for (int i = 1; i < size; i++)
  {
      if (arr[i] > largest)
      {
        secondLargest = largest;
        largest = arr[i];
      }

      else if(arr[i] != largest  &&  arr[i] > secondLargest){

        secondLargest = arr[i];

      }
      
  }
  
  return secondLargest;
}



int main(){
    int size,arr[10],res=0;
    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array: "  ;
      for (int i = 0; i < size; i++)
      {
        cin>>arr[i];
      }

    

      // int second = arr[secondLargest(arr,size)];

    int second =  secondLargest(arr,size);
   
      cout<<"Second largest value is: "<<second;
      
      
}