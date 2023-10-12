#include <iostream>
using namespace std;

                                            // Brute force approch  T.C = O(N^2)  S.C = O(N)


// int findInsersection(int arr1[],int size1,int arr2[],int size2){


//     // a1 = {1,1,3,5,6}     a2 = {3,5,6,6,7,8}

//   int temp[10],res=0;
//  for (int i = 0; i < size1; i++)
//  {
//     for (int j = 0; j < size2; j++)
//     {
//         if (arr1[i] < arr2[j])
//         {
//            break;
//         }

//        if (arr1[i] == arr2[j])
//        {
//         temp[res++] = arr1[i];
//         break;
//        }

//     }

//  }

//  cout<<"array is: ";

// for (int i = 0; i < res; i++)
// {
//    cout<<temp[i]<<" ";
// }

// }


                                                            //Brute force approch  T.C = O(N^2)  S.C = O(N)


void findInsersection(int arr1[], int size1, int arr2[], int size2)
{

    int i = 0, j = 0; // two pointers
    int res = 0, index = -1, temp[10];

    // a1 = {1,1,3,5,6}     a2 = {3,5,6,6,7,8}

    while (i < size1 && j < size2)
    {
        if (arr2[j] > arr1[i])
        {
            i++;
        }

        else if (arr2[j] == arr1[i])
        {
            temp[res++] = arr1[i];
            i++;
            j++;
        }

        else{
            j++;
        }
    }

    if (res == 0)
        cout << "No elements of an array is intersected!";

    else{

        cout << "array is: ";

    for (int i = 0; i < res; i++)
    {
        cout << temp[i] << " ";
    }
    }
}

int main()
{

    int size1, size2, arr1[10], arr2[10];

    cout << "Enter the size 1: ";
    cin >> size1;

    cout << "Enter an array 1: ";
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the size 2: ";
    cin >> size2;

    cout << "Enter an array 2: ";
    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    findInsersection(arr1, size1, arr2, size2);
}