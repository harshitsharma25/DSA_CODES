
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


Node* sortList(Node *head){

    if(!head || !head-> next) return head;
    
    Node* zeroHead  =  new   Node(-1);
    Node* oneHead  =  new Node(-1);
    Node* twoHead = new  Node(-1);

    Node *zero  =  zeroHead;
    Node *one =  oneHead;
    Node *two =  twoHead;
    Node *current = head;

    while(current != NULL){

        if(current -> data == 0){
             zero -> next = current;
             zero = zero -> next;
        }

        else if(current -> data ==1){
             one -> next  = current;
             one = one -> next;
        }

        else if(current -> data == 2){
            two ->  next = current;
            two = two -> next;
        }

        current = current ->  next;

    }

    zero -> next =  (oneHead -> next) ?(oneHead -> next ):(twoHead -> next);
    one -> next = twoHead -> next;
    two -> next =  NULL;

    Node* newHead =  zeroHead -> next;

    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return newHead;


}

Node* convert2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

Node* print(Node* head){
    while(head != NULL){
        cout<<head -> data<<" ";
        head = head -> next;
    }
}

int main(){
    vector<int> arr = {0,2,1,1,2,2,0,2,0,0};
    Node* head = convert2LL(arr);
    head = sortList(head);
    cout<<"sorted list is: ";
    print(head);
}