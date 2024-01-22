#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lIS(vector<int>& arr,int size){
    int l = 1;
    vector<int> temp;
    temp.push_back(arr[0]);

    for(int i=1;i<arr.size();i++){
        if(temp.back() < arr[i]){
            temp.push_back(arr[i]);
            l++;
        }
        else{
            int index = lower_bound(temp.begin(),temp.end(),arr[i]) - temp.begin();
            temp[index] = arr[i];
        }
    }
    
    return l;
}

int main(){
    vector<int> arr;
    int size;
    cout<<"Enter the size:";
      cin>>size;

    cout<<"Enter the array: ";
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }

    cout<<"answer is:"<<lIS(arr,size);
      
}