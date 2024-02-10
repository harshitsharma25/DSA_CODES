#include<bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* next;

    Node(int data1){
        val = data1;
        next = nullptr;
    }

    Node(int data1,Node* next1){
        val = data1;
        next = next1;
    }
};



void print(Node* head){

   while (head != NULL)
   {
      cout<< head -> val<<" ";
      head = head -> next;
   }
}


Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
    mover ->next = temp;
    mover = temp;
  }
    return head;
}

 Node* reverseBetween(Node* head, int left, int right) {
        if(head -> next == NULL) return head;
        if(left == right) return head;

    stack<int> st;
    Node* r = head;
    Node* l = head;

    int cnt = 0;
    while(l != NULL){
        cnt++;
        if(cnt == left) break;
        l = l->next;
    }

    Node* tempHead = l;       // temporary stores the left node.

    cnt = 0;
    while(r != NULL){
        cnt++;
        if(cnt == right) break;
        r = r->next;
    }

    while(l -> val != r -> val){
        st.push(l -> val);
        l = l->next;
    }
    st.push(r -> val);   // completely inserted required range in stack.

    l = tempHead;                  // again declares the left node.
    while(l->val != r -> val){
        l -> val = st.top();
        st.pop();
        l = l -> next;
    }
    l -> val = st.top();


    return head;
        
    }

int main(){

    vector<int> arr = {2,44};
   
    Node* head = convertArr2LL(arr);

    // delete the node head
    head = reverseBetween(head,1,25);
    cout<<"after deleting kth the element:";
    print(head);

}