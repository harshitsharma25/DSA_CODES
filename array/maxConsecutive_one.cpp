#include<iostream>
using namespace std;

// int find_maxConsecutive_one(int arr[],int size){
//     int index=0, maxCount = 0;

//     for (int i = 0; i < size; (index > 0) ? (i += index) : i++)
//     {
//         int count = 0;
//         for (int j = i; j < size; j++)
//         {
//            if (arr[j] == 1)
//            {
//               count = count + 1;
//               index = count+1;
//               maxCount = max(maxCount,count);
//            }

//            else 
//             break;
//         }
       
//     }

//     return maxCount;
    
// }


int find_maxConsecutive_one(int arr[],int size){
    int count = 0 , maximum = 0;

    for(int i = 0 ; i<size ; i++){
        if (arr[i] == 1)
        {
           count++;
           maximum = max(maximum,count);
        }
        else{
            count = 0;
        }
    }

    return maximum;
}


int main(){
    int size,arr[10010];

    cout<<"Enter the size: ";
      cin>>size;

    cout<<"Enter an array : ";
      for (int i = 0; i < size-1; i++)
      {
       cin>> arr[i];
      }

    cout<<"max consecutive number is: "<<find_maxConsecutive_one(arr,size);
}