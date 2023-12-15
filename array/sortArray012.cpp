#include<iostream>
using namespace std;

                                                          // BRUTE FORCE - apply merge sort and T.C = O(n logn)



                                                          // BETTER APPROACH- 

                                                          //  Approach -  just running loop for 0, T.C = (N) and for 1 (ranges from count of "0" to n-1) T.C (for 1) = o(N- count0)
                                                         // x = T.C of count0
                                                        // overall T.C = O(N + N - x) = O(2N - x)

// void sortArray012(int arr[],int size){

//     int count0 = 0;
//     for( int i = 0; i< size; i++){
//         if(arr[i] == 0)
//           swap(arr[count0++],arr[i]);
//     }

//     int count1 = count0;
//     for(int i = count0; i < size; i++){
//         if(arr[i] == 1)
//           swap(arr[count1++], arr[i]);
//     }

//     cout<<"sorted array is: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    

// }


                                                      // BEST APPROACH

void sortArray012(int arr[],int size){
    int mid = 0 , low = 0 , high = size-1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }

        else if(arr[mid] == 1){
            mid++;
        }

        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

int main(){

    int size,arr[20];
    cout<<"Enter the size:";
      cin>>size;

    cout<<"Enter an array: ";
      for (int i = 0; i < size; i++)
      {
         cin>>arr[i];
      }

    sortArray012(arr,size);

    cout<<"final array is: ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
      
}