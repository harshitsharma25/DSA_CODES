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
        prev -> next  = temp;
        prev = temp;
    }
    return head;
}


void print(Node* head){
    while(head != NULL){
        cout<<head -> data <<" ";
        head = head -> next;
    }
}


Node* deleteTail(Node* head){
    if(head == NULL || head -> next == NULL){
        return NULL;
    }

    Node* tail = head;
    while(tail->next != NULL){
        tail = tail -> next;
    }
    Node* previous = tail -> back;
    previous -> next = nullptr;
    tail -> back = nullptr;
    return head;
}

int main(){
    vector<int> arr = {344,22,55};
    Node* head = convertArr2DLL(arr);
    head = deleteTail(head);
    cout<<"doubly linked list is: ";
    print(head);
}