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

    Node(int data1,Node* next1, Node* back1){
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
   
    while(head != NULL){
        cout<< head -> data<<" ";
        head = head -> next;
    }
}

Node* insertBeforeHeadDLL(Node* head,int val){
    Node* newHead = new Node(val,head,nullptr);
    head -> back = newHead;
    return newHead;
}


Node* insertBeforeTail(Node* head,int val){

    if(head -> next == NULL){                // this is the edge case when only single element is present in DLL.
        return insertBeforeHeadDLL(head,val);
    }
    Node* tail = head;

    while(tail -> next != NULL){
        tail = tail -> next;
    }

    Node* prev = tail -> back;
    Node* newTail = new Node(val,tail,prev);
    prev -> next = newTail;
    tail -> back = newTail;

    return head;
}

Node* insertBeforeKthElementDLL(Node* head,int value,int k){
    if(k==1){
        return insertBeforeHeadDLL(head,value);
    }

    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp -> next;
    }

    Node* prev = temp -> back;
    Node* newNode = new Node(value,temp,prev);
    prev -> next = newNode;
    temp -> back = newNode;

    return head;
}

int main(){
    vector<int> arr = {22,44,5,12,566,22,2,89,125};
    Node* head = convertArr2DLL(arr);
    head = insertBeforeKthElementDLL(head,1,6);
    cout<<"linked list is: ";
    print(head);
}