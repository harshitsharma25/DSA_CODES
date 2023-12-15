#include<iostream>
using namespace std;

                                                         // T.C = O(n*m) * O(n+m)  + O(n*m)

// int markRow(int arr[][10],int column,int i){
//   for (int j = 0; j < column; j++)
//   {
//     if(arr[i][j] != 0)
//     {
//       arr[i][j] = -1;
//     }
//   }

// }

// int markColumn(int arr[][10],int row,int j){
//   for (int i = 0; i < row; i++)
//   {
//     if(arr[i][j] != 0)
//     {
//         arr[i][j] = -1;
//     }
//   }

// }


// int setMatrixZero(int arr[][10],int row,int column)
// {

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if(arr[i][j] == 0){
//                 markRow(arr,column,i);
//                 markColumn(arr,row,j);
//             }
//         }
        
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             if(arr[i][j] == -1){
//                 arr[i][j] = 0;
//             }
//         }
        
//     }
    
    
// }


                                                    // T.C = O(m * n)
void setMatrixZero(int arr[][10],int m,int n){
    int row[m] = {0};
    int column[n] = {0};

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(arr[i][j] == 0){
                row[i] = 1;
                column[j] = 1;
            }
        }
        
    }

    for (int i = 0; i < m; i++)
    {
        for(int j = 0; j<n; j++){

            if(row[i] == 1 || column[j] == 1){
                arr[i][j] = 0;
            }
        }
    }
    
    

}



int main(){
    int row,column,arr[10][10];
    cout<<"Enter the row for a matrix: ";
       cin>> row;
    cout<<"Enter the row for a matrix: ";
       cin>> column;

    cout<<"Enter an array: "<<endl;

       for (int i = 0; i < row; i++){
          for (int j = 0; j < column; j++)
           {
             cin>> arr[i][j];
           }
        }

        setMatrixZero(arr,row,column);

        cout<<endl<<"final matrix is: "<<endl;
        for (int i = 0; i < row; i++)
        {
           for(int j = 0; j < column ;j++){
            cout<<arr[i][j]<<" ";
           }
           cout<<endl;
        }
        

               
       
}