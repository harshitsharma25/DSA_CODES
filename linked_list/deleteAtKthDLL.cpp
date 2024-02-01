#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }

    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
};

Node* convertArr2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev -> next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data <<" ";
        temp = temp -> next;
    }
}

Node* deleteHead(Node* head){
    if(head == NULL || head ->next == NULL) return NULL;
    Node* prev = head;
    head = head -> next;
    head ->back = nullptr;
    prev -> next = nullptr;
    delete prev;

return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head ->next == NULL) return NULL;

    Node* tail = head;
    while(tail -> next != NULL){  
        tail = tail -> next;    // this will stop at the tail node.
    }

    Node* prev = tail -> back;
    prev -> next = nullptr;
    tail -> back = nullptr;
    delete tail;

    return head;
}

Node* deleteAtKthDLL(Node* head,int k){
    Node* temp = head;
    int cnt = 0;
    // we have to break at that node when k equals to its index.
    while(temp != NULL){
      cnt++;
      if(cnt == k) break;
      temp = temp -> next;
    }

    // now i have to exclude the all of edge cases as below.
    Node* prev = temp -> back;
    Node* front = temp ->next;

    if(prev == NULL && front == NULL) return NULL;    // if single element present in linked list.
 
    else if(prev == NULL){
        return deleteHead(head);                           // if we have to delete head.
    }

    else if(front == NULL){                        // if we have to delete tail.
        return deleteTail(head);
    }
    
    prev -> next = front;
    front ->back = prev;

    temp -> next = nullptr;
    temp -> back = nullptr;
    delete temp;
    
return head;
}


int main(){
    vector<int> arr = {33,6,7,32,6,89};
    Node* head = convertArr2DLL(arr);
    head = deleteAtKthDLL(head,4);
    print(head);
}