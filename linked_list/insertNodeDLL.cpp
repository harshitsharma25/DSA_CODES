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

void insertNodeDLL(Node* node,int val){
    Node* prev = node -> back;
    Node* newNode = new Node(val,node,prev);
    prev -> next = newNode;
    node -> back = newNode;
}

int main(){
    vector<int> arr = {22,44,5,12,566,22,2,89,125};
    Node* head = convertArr2DLL(arr);
    insertNodeDLL(head-> next -> next,1023);
    cout<<"linked list is: ";
    print(head);
}