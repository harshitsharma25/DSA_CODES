#include<bits/stdc++.h>
using namespace std;

class Node{

    public:
    int data;
    Node* next;
    Node* back;

   
    Node(int data){
        this -> data = data;
        this -> next = nullptr;
        this -> back = nullptr;
    }

   
    Node(int data,Node* next,Node* prev){
        this -> data = data;
        this -> next = next;
        this -> back = prev;
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
        cout << head -> data << " ";
        head = head -> next;
    }
}


Node* reverseDLL(Node* head)
{

    if(head == NULL || head -> next == NULL) return head;
    Node* prev = NULL;
    Node* current = head;

    while(current != NULL){
        prev = current -> back;
        current -> back = current -> next;
        current -> next = prev;
        current = current -> back;
    }
    return prev -> back;        // returning the back node of the previous node.
}





int main(){
    vector<int> arr = {2,44,12,56,5,44};
    Node* head = convertArr2DLL(arr);
    head = reverseDLL(head);
    cout<<"linked list is: ";
    print(head);
}