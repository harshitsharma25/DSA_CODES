// program to delete the head node from the one d linked list

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

Node* removeHead(Node* head){

    if(head == NULL) return head;    // this is the edge case.
    Node* temp = head;
    head = head -> next;
    delete temp;
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
    cout<<endl;
}

int main(){
    // vector<int> arr = {2,44,5,22,66,35};
    vector<int> arr = {7,4};
    Node* head = convertArr2LL(arr);

    // delete the node head
    head = removeHead(head);
    cout<<"after deleting the head:";
    print(head);

}