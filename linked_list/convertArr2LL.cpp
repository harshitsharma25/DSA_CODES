#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1){
        data = data1;
        next = nullptr;
    }

    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
};

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }

    return head;
}

int main(){
vector<int> arr = {12,45,5,6};
//   Node head = Node(arr[0]);         taking the instance and printing the first element of array.
//   cout<<head.data;                  output = 12


// Node* head = new Node(arr[1]);      here i am taking the Node pointer and printing its data.   
// cout<< head->data;

// Node* y = new Node(arr[0],nullptr);     Here, printing the address of arr[0].
// cout<<y;

Node* head = convertArr2LL(arr);    // giving the head element and store it in head Node*.
Node* temp = head;                  // copying the head into temp Node* bcoz we want to preserve head.
while(temp){
    cout<< temp -> data<<" ";
    temp = temp -> next;
}

}