#include<bits/stdc++.h>
using namespace std;

int majorityElementN3(int arr[],int size){
    int e1,e2,count1=0,count2=0;

    for (int i = 0; i < size; i++)
    {
        if(count1==0 && arr[i] != e2){
            count1 =1;
            e1 = arr[i];
        }
        else if(count2 == 0 && arr[i] != e1){
            count2 =1 ;
            e2 = arr[i];
        }
        else if(arr[i] == e1){
            count1++;
        }
        else if(arr[i]== e2){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }

    int cnt1 = 0, cnt2 =0,temp[2],res=0;
    for (int i = 0; i < size; i++)
    {
        if(e1 == arr[i]){
            cnt1++;
        }
        else if(e2 == arr[i]){
            cnt2++;
        }
    }
    cout<<"cnt1:"<<cnt1 <<" cnt2:"<<cnt2<<" size:"<<size<<endl;

    if(cnt1 > (size/3)) temp[res++] = e1;
    if(cnt2 > (size/3)) temp[res] = e2;
    
    cout<<"elements are: ";
    for (int i = 0; i < 2; i++)
    {
       cout<<temp[i]<<" ";
    }
    
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

    // cout<<"elements are: ";
    majorityElementN3(arr,size);
      
}