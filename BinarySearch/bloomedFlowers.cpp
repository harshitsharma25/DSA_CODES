#include<iostream>
using namespace std;

int mini(int arr[],int size){
    int min = INT_MAX;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int maxi(int arr[],int size){
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

bool possible(int arr[],int day,int m,int k,int size){

    int count = 0, totalBouquets = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] <= day)
        {
            count++;
        }
        else{
            totalBouquets += count/k;
            count = 0;
        }
        
    }
    totalBouquets += count/k;
    if(totalBouquets >= m)  return true;
    else return false;
    
}

int bloomedFlowers(int arr[],int size,int m,int k){
    if(size <  m*k)  return -1;

    int minimum = mini(arr,size),maximum = maxi(arr,size);
    for (int i = minimum; i <= maximum; i++)
    {
      if(possible(arr,i,m,k,size) == true)  return i;
                                  
    }
    return -1;
}

int main(){
    int size,arr[10],m,k;
    cout<<"Enter the size:";
      cin>>size;

    cout<<"Enter an array:";
       for (int i = 0; i < size; i++)
       {
          cin>>arr[i];
       }

    cout<<"Enter bouquets needed:";
       cin>>m;

    cout<<"Enter adjacent days required:";
       cin>>k;

    cout<<"answer:"<<bloomedFlowers(arr,size,m,k);
       
}