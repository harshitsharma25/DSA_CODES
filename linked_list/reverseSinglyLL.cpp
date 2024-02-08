//  Program to reverse the singly linked list   T.C = O(N)  , S.C = O(1)

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


Node* reverseSinglyLL(Node* head){
   Node* current = head;
   Node* prev = NULL;

   while(current != NULL){
    Node* forward = current -> next;
    current -> next = prev;
    prev = current;
    current = forward;
   }

   return prev;
}


int main(){

    vector<int> arr = {2,44,44,66,1,78,6,855,24};
   
    Node* head = convertArr2LL(arr);

    // delete the node head
    head = reverseSinglyLL(head);
    cout<<"after Reversing the Linked List :";
    print(head);

}