// program to delete the Kth node' value from the one d linked list

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


// Node* removeKthElement(Node* head,int value){
//     if(head ->data == value){
//         Node* temp = head;
//         head = head -> next;
//         free(temp);
//         return head;
//     }

  
//     Node* prev = NULL;
//     Node* temp = head;

//     while(temp != NULL){
    
//         if(temp -> data == value){
//             prev -> next = prev -> next -> next;
//             free(temp);
//             break;
//         }

//         prev = temp;
//         temp = temp -> next;

//     }
//     return head;
// }

Node* removeKthElement(Node* head,int value){
    if(head ->data == value){
        Node* temp = head;
        head = head -> next;
        delete temp;
        return head;
    }

    Node* prev = NULL;
    Node* temp = head;

    while(temp != NULL){
        if(temp ->data == value){
            prev -> next = prev -> next -> next;
            // delete temp;                   // if we don't add it then delete operation still performs but it will remains in the heap memory but will not shown in the linked list.
            break;
        }

        prev = temp;
        temp = temp ->next;
    }
    return head;
}




int main(){

    vector<int> arr = {2,44,5,22,66,35};
   
    Node* head = convertArr2LL(arr);

    // delete the node head
    head = removeKthElement(head,5);
    cout<<"after deleting kth the element:";
    print(head);

}