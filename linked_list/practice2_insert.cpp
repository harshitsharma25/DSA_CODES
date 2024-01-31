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

Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover ->next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
}


// Node* insertHead(Node* head,int value){
//    Node* temp = new Node(value,head);
//    return temp;
    
// }

// Node* insertTail(Node* head,int value){
//     Node* temp = head;
//     while (temp -> next != NULL)
//     {
//         temp = temp ->next;

//     }
//     Node* x = new Node(value,head);
//     temp ->next = x;
//     x ->next = NULL;

//  return head;   
    
// }


// Node* insertAtKth(Node* head,int val,int k){
//     if(head == NULL){                             // if the linked list is empty
//         if(k==1) return new Node(val,head);       // if element to be insert at position one.
//         else return NULL;                         // otherwise return NULL.
//     }

//     if(k==1){
//         return new Node(val,head);
//     }

//     int cnt = 0;
//     Node* prev = NULL;
//     Node* temp = head;
//     while(temp != NULL){
//         cnt++;
//         if(cnt == k){
//             Node* x = new Node(val,temp ->next);
//             prev ->next = x;
//             break;
//         }
//         prev = temp;
//         temp = temp ->next;
//     }


// return head;
// }

Node* insertBeforeValue(Node* head,int data,int value){
    if(head ->data == value)
       return new Node(data,head);

    if(head == NULL){
         return NULL;
       }


    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL)   {
        if(temp->data == value){
            Node* x = new Node(data,prev ->next);
            prev ->next = x;
            break;
        }
        prev = temp;
        temp = temp -> next;
    }
       
return head;
}

int main(){
    vector<int> arr = {2,3,4,45,778,1244,43};
    Node* head = convertArr2LL(arr);
    head = insertBeforeValue(head,5,1244);
    cout<<"linked list is: ";
    print(head);

}