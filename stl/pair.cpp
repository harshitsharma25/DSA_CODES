#include<bits/stdc++.h>
using namespace std;


int main(){

pair<int,int> p = {3,4};

cout<<"first is: "<<p.first<<" second is: "<<p.second;

pair<int,pair<int,int>> q = {1,{2,3}};
cout<<endl<<"first is: "<<q.first<<"Second's second is: "<<q.second.second<<"second's first is: "<<q.second.first;

pair<int,int> arr[] = {{1,2},{3,4},{5,6}};

cout<<endl<<arr[1].second;

return 0;
}
