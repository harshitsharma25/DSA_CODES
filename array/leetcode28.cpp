#include<iostream>
using namespace std;
int strStr(string haystack, string needle) {
        int index=-1;

        // for(int i=0; i<haystack.size(); i++){
            int j  = 0,i=0;
            while(j<haystack.size()){
                  if(needle[i] == haystack[j]){
                   int k = i+1,l = j+1;
                   while(k<needle.size()){
                       if(needle[k] != haystack[l]){
                          goto l1;
                       }
                       if(needle[k] == haystack[l]){
                           k++; l++;
                       }
                   }
                    index = j;
                    if(index>=0) break;
             }
             l1:;
              j++;
            }
           
          
        // }

        return index;
        
    }

int main(){
    int size1,size2,k;
    char a[40],b[10];

    // cout<<"Enter the size 1: ";
    //   cin>>size1;

    // cout<<"Enter the size 2: ";
    //   cin>>size2;

    cout<<"Enter an string 1: ";
    //  gets(a);
    cin>>a;

    cout<<"Enter an string 2: ";
    // gets(b);
    cin>>b;


   cout<<"answer is: " << strStr(a,b);


      
}