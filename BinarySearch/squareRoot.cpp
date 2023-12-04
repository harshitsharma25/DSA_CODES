#include<iostream>
using namespace std;


// int squareRoot(int number){
    
//     int answer;

//     for (int i = 1; i*i <= number; i++)
//        answer = i;
    
//     return answer;
// }


//                         BETTER APPROACH T.C = O(log n)
// int squareRoot(int number){
//     int low = 1,high = number,answer = -1;

//     while(low <= high){
//         int mid = (low+high)/2;

//         if((mid * mid) <= number){
//             answer = mid;
//             low = mid+1;
//         }

//         else{
//             high = mid -1;
//         }
//     }
//     return answer;
// }


               //here we can return high as well because it will get reduced by one and give same result.
int squareRoot(int number){
    int low = 1,high = number;

    while(low <= high){
        int mid = (low+high)/2;

        if((mid * mid) <= number){
            // answer = mid;
            low = mid+1;
        }

        else{
            high = mid -1;
        }
    }
    return high;
}


int main(){
    int number;
    cout<<"Enter the number: ";
      cin>>number;
        
    cout<<"answer is:"<<squareRoot(number);
}