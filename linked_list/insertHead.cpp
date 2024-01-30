// program to delete the Kth node' value from the one d linked list

#include<bits/stdc++.h>
using namespace std;

// defining the structure

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



// function to convert array to linked list.

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



// printing the linked list.

void print(Node* head){

   while (head != NULL)
   {
      cout<< head -> data<<" ";
      head = head -> next;
   }
}


Node* insertHead(Node* head,int val){
    return new Node(val,head);
}

Node* insertTail(Node* head,int val){

    if(head == NULL) return new Node(val);
    Node* temp = head;
    while (temp != NULL)
    {
        if(temp -> next == NULL){
            temp ->next = new Node(val,head);
            temp ->next->next = NULL;
            break;
        }
        temp = temp ->next;
    }
    return head;
}



// Node* insertAtK(Node* head,int val,int k){
//     if(head == NULL){
//         if(k==1){
//         return new Node(val);
//         }
//         else return NULL;
//     }

//     if(k==1){
//         Node* temp = new Node(val,head);
//         return temp;
//     }

//     int cnt = 0;
//     Node* temp = head;
//     while (temp != NULL){
//         cnt++;
//         if(cnt == k-1){
//             Node* x = new Node(val,head);
//             x ->next = temp ->next;
//             temp -> next = x;
//             break;
//         }
//         temp = temp->next;
//     }
    
//     return head;
// }



// inserting the element before the given value.
Node* insertBeforeValue(Node* head,int element,int val){   // val means before which node 'val' we will insert element.
if(head == NULL) return NULL;
if(head -> data == val) return new Node(element,head);

Node* temp = head;
while(temp -> next != NULL){
    if(temp -> next -> data == val){
        Node* x = new Node(element,temp ->next);
        temp -> next = x;
        break;
    }
    temp = temp -> next;
}
return head;
}

int main(){

    vector<int> arr = {2,44,5,22,66,35};
   
    Node* head = convertArr2LL(arr);

    // delete the node head
    // head = insertHead(head,58);
    head = insertBeforeValue(head,5888,35);
    cout<<"inserting the head: ";
    print(head);

}