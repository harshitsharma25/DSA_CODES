#include<iostream>
#include<bits/stdc++.h>
using namespace std;


                                                          //BRUTE FORCE (T.C = O(N^2) S.C = O(n^2)

// void rotateMatrixNinty(int arr[][10],int row,int column){
//     int ans[10][10],c = column;

//     for (int i = 0; i < row; i++)
//     {
//        for (int j = 0; j < column; j++)
//        {
//          ans[j][c-1-i] = arr[i][j];
//        }
       
//     }

//     for (int i = 0; i < row; i++)
//     {
//        for (int j = 0; j < column; j++)
//        {
//           arr[i][j] = ans[i][j];
//        }
       
//     }
    
    

// }

                                                     // BETTER APPROACH (T.C = O(N^2) , (S.C = O(N))   by finding transpose of a matrix order(n*n)

void rotateMatrixNinty(vector<vector<int>>& arr,int row){          // currently giving an error
   // here no.of column = no. of row i.e = n

   //finding the transpose of a matrix.
   for(int i=0; i<row-1; i++){
      for(int j=i+1; j<row; j++){
         swap(arr[i][j],arr[j][i]);
      }
   }



   for (int i = 0; i < row; i++)
   {  
      reverse(arr[i].begin(),arr[i].end());
   }
   
}

int main(){
    int row,column;
    vector<vector<int>> arr(10);
    cout<<"Enter the row: ";
      cin>>row;

    cout<<"Enter the column: ";
      cin>>column;

    cout<<"Enter the matrix: "<<endl;
     for (int i = 0; i < row; i++)
     {
        for (int j = 0; j < row; j++)
        {
            cin>>arr[i][j];
            //  int m = arr[i][j];
            //   arr.push_back(m);
        }
        cout<<endl;
     }

     rotateMatrixNinty(arr,row);

     cout<<endl<<"final matrix is: "<<endl;
     for (int i = 0; i < arr.size(); i++)
     {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
     }
}