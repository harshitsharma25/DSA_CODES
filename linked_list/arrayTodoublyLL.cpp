#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* prev;

    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }

    Node(int data1,Node* next1, Node* prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
};


Node* convertArr2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev ->next = temp;
        prev = temp;
    }
    return head;
}

void print(Node* head){
    // Node* temp = head;      // dont't need to make new node temp bcoz we don't need to return the head.
    while (head != NULL)
    {
       cout << head ->data << " ";
       head = head -> next;
    }
}

int main(){
    vector<int> arr = {22,55,11,6,2234};
    
    Node* head = convertArr2DLL(arr);
    cout<<"doubly linked list is: ";
    print(head);

}