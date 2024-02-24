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

int lengthOfLL(Node* head){
  int cnt = 0;
  Node* temp = head;

  while(temp){
    temp = temp -> next;
    cnt++;
  }
  return cnt;
}

int main(){
  
    vector<int> arr = {24,5,6,77,4,66,78,65,2};
    Node* head = convertArr2LL(arr);
    int len = lengthOfLL(head);
    cout<<"lenght of linked list is: "<<len;

}