// program to delete the Kth node from the one d linked list

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
    mover ->next = temp;
    mover = temp;
  }
    return head;
}



// printing the linked list.

void print(Node* head){

   while (head != NULL)
   {
      cout<< head -> data<<" ";
      head = head -> next;
   }
}

    Node* removeNthFromEnd(Node* head, int n) {

        // if(head -> next == NULL) return NULL;
    //     if(n == 1){
    //     Node* temp1 = head;
    //     head = head -> next;
    //     // free(temp1);
    //     return head;
    //   }

      int size = 0;
      Node* temp = head;
      while(temp != NULL){
          size++;
          temp = temp -> next;
      }

      if(size == n){
        Node* newHead = head -> next;
        return newHead;
      }

     

     int n2 = size - n;
      temp = head;

      while(temp != NULL){
          n2--;
          if(n2==0){
             
              break;
          }
          
          temp = temp -> next;
      }

       Node* delNode = temp -> next;
       temp -> next = temp -> next -> next;
              free(delNode);

        return head;
    }


int main(){

    vector<int> arr = {1,2};
   
    Node* head = convertArr2LL(arr);

    
    head = removeNthFromEnd(head,1);
    cout<<"after deleting kth the element:";
    print(head);

}