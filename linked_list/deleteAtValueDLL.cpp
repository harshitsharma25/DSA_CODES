// this question never asks to delete the head of the linked list bcoz we have to write extra lines of code i.e.

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

void deleteAtValueDLL(Node* temp){
    Node* prev = temp -> back;
    Node* front = temp -> next;
    if(front == NULL){
        prev -> next = nullptr;
        temp -> back = nullptr;
        free(temp);
        return;
    }

    prev -> next = front;
    front -> back = prev;

    temp -> next = temp -> back = nullptr;
    free(temp);

}



int main(){
    vector<int> arr = {33,6,7,32,6,89};
    Node* head = convertArr2DLL(arr);
    deleteAtValueDLL(head->next->next);
    print(head);
    return 0;
}