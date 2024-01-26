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

int searchLL(Node* head,int val){
   Node* temp = head;
   while(temp){
    if(temp->data == val) return 1;
    temp = temp -> next;
   }

return 0;
}

int main(){
    vector<int> arr = {24,5,6,7,7,};
    Node* head = convertArr2LL(arr);
    int n = 24;
    if(searchLL(head,n))  cout<<"element "<<n<<" is found.";
    else  cout<<"element "<<n<<" not found";

}