#include<iostream>
using namespace std;

double minimizeDistanceGasStation(int arr[],int size,int key,int howMany[]){
    for (int i = 1; i <= key; i++)
    {
      long double maxi = -1;
      int maxInd = -1;

      for (int i = 0; i < size-1; i++)
      {
       long double diff = arr[i+1] - arr[i];
       long double sectionLength = diff / (howMany[i]+1);
       if(maxi < sectionLength){
          maxi = sectionLength;
          maxInd = i;
       }
      }

      howMany[maxInd]++;
      
    }

    long double maxAns = -1;
    for (int i = 0; i < size-1; i++)
    {
        long double diff = arr[i+1] - arr[i];
        long double sectionLength = diff / (howMany[i]+1);
        maxAns = max(maxAns,sectionLength);
    }
    
    return maxAns;
}

int main(){
    int size,arr[10],key;
    int howMany[10] = {0};     // int howMany[size-1] = {0};

    cout<<"Enter the size:";
      cin>>size;

    cout<<"Enter an array:";
      for (int i = 0; i < size; i++)
      {
        cin>> arr[i];
      }

    cout<<"Enter the key:";
      cin>>key;

    cout<<"answer is:"<< minimizeDistanceGasStation(arr,size,key,howMany);
      
}