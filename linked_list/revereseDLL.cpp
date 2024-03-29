#include<bits/stdc++.h>
using namespace std;

struct Node{

    public:
    int data;
    Node* next;
    Node* prev;

   
    Node(int data){
        this -> data = data;
        this -> next = nullptr;
        this -> prev = nullptr;
    }

   
    Node(int data,Node* next,Node* prev){
        this -> data = data;
        this -> next = next;
        this -> prev = prev;
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



Node* reverseDLL(Node* head){
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* prev = NULL;
    Node* current = head;

    while(current != NULL){
        prev = current -> prev;
        current -> prev =  current -> next;
        current -> next = prev;        // reversing the links of previous and next node of current node.
        current = current -> prev;    // by this we are moving further in LL not back in LL.
    }

    return prev -> prev;       // here printing the back node's data of previous node means we are actually printing the 
                              // data of next node's data of current's next node . and i.e our answer.

}

int main(){
    vector<int> arr = {2,44,12,56,5,44};
    Node* head = convertArr2DLL(arr);
    head = reverseDLL(head);
    cout<<"linked list is: ";
    print(head);
}