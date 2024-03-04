//  Program to 

#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;

    Node(int data1){
        val = data1;
        next = nullptr;
    }

    Node(int data1,Node* next1){
        val = data1;
        next = next1;
    }
};



void print(Node* head){

   while (head != NULL)
   {
      cout<< head -> val<<" ";
      head = head -> next;
   }
}


Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    mover ->next = temp;
    mover = temp;
  }
    return head;
}


int helper(Node* temp){
    if(temp == NULL){
        return 1;
    }

    int carry;
    carry = helper(temp -> next);
    temp -> val = temp -> val + carry;
    if(temp -> val < 10){
        return 0;
    }
    temp ->val = 0;     // if data is 10 , then carry will be 1
    return 1;
}

Node* addOne(Node* head){
    int carry = helper(head);
    if(carry == 1){
        Node* newNode = new Node(1);
        newNode -> next = head;
        return newNode;
    }
    return head;
}


int main(){

    vector<int> arr = {9,9,9};
   
    Node* head = convertArr2LL(arr);

    // delete the node head
    head = addOne(head);
    cout<<"adding one at last of LL:";
    print(head);

}