// program to reverse the linked list recursively.

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

 Node* reverseRecursiveLL(Node* head) {
       if(head == NULL || head -> next == NULL){
          return head;
       }

       Node* newHead = reverseRecursiveLL(head -> next);
       Node* front = head -> next;
       front -> next = head;
       head -> next = NULL;

       return newHead;
}

int main(){

    vector<int> arr = {2,4,35,6,43,4};
   
    Node* head = convertArr2LL(arr);

    // delete the node head
    head = reverseRecursiveLL(head);
    cout<<"after deleting kth the element:";
    print(head);

}