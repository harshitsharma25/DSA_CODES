// program to delete the tail node from the one d linked list

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
        mover -> next = temp;
        mover = temp;
    }
    
    return head;
}



// printing the linked list.

void print(Node* head){

    while(head != NULL){
        cout<< head -> data << " ";
        head = head -> next;
    }
    
}



//removing the tail of linked list.

Node* removeTail(Node* head){
    if(head == NULL || head -> next == NULL)  return NULL;
    Node* temp = head;

    while (temp -> next -> next != NULL)
    {
        temp = temp -> next;                 // will traverse until the last second element in the linked list.
    }
    
    delete temp -> next;                    // deleting the tail of linked list.
    temp -> next = nullptr;
    

    return head;
}


int main(){
    vector<int> arr = {2,44,5,22,66,35};
   
    Node* head = convertArr2LL(arr);

    // delete the node head
    head = removeTail(head);
    cout<<"after deleting the element:";
    print(head);

}