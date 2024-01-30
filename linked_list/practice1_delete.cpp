#include<bits/stdc++.h>
using namespace std;


// defining the structure
struct myNode{
    int data;
    myNode* next;

    myNode(int data1){
        data = data1;
        next = nullptr;
    }

    myNode(int data1,myNode* next1){
        data = data1;
        next = next1;
    }

};



// defining the function to convert the vector array into the linked list.
myNode* convertArr2LL(vector<int> arr){
    myNode* head = new myNode(arr[0]);    // head node
    myNode* mover = head;                // mover node

    for (int i = 1; i < arr.size(); i++)
    {
       myNode* temp = new myNode(arr[i]);
       mover ->next = temp;
       mover = temp;
    }

return head;

}



// printing the data of linked list.
void print(myNode* head){
    myNode* temp = head;
    while (temp != NULL)
    {
       cout<<temp->data<<" ";
       temp = temp ->next;
    }
    
}


// function to remove the head of linked list.
// myNode* removeHead(myNode* head){
//     myNode* temp = head;
//     head = head -> next;
//     delete temp;
//     return head;
// }


//function the remove the tail of linked list.
// myNode* removeTail(myNode* head){
//     myNode* temp = head;
//     while (temp->next->next != NULL)
//     {
//       temp = temp->next;                    // here temp node will stop at last second node of the linked list.
//     }

//     temp -> next = nullptr;
//     return head;
// }



// function to remove the node at Kth place in the linked list.
// myNode* removeAtKthPlace(myNode* head,int pos){
//     if(pos == 1){
//         myNode* temp = head;
//         head = head ->next;
//         delete temp;
//         return head;
//     }

//     int cnt = 0;
//     myNode* prev = NULL;
//     myNode* temp = head;
//     while (temp != NULL)
//     {
//         cnt++;
//         if(cnt == pos){
//             prev ->next = prev ->next->next;
//             break;
//         }
//         prev = temp;
//         temp = temp->next;
//     }
//     return head;
// }



// function to remove the value in the linked list.
myNode* removeValue(myNode* head,int value){
    if(head->data == value){                     // if we want to remove the value at head.
        myNode* temp = head;
        head = head ->next;
        delete temp;
        return head;
    }

    myNode* temp = head;
    myNode* prev = NULL;
    while (temp != NULL)
    {
       if(temp -> data == value){
        prev->next = prev->next->next;
        break;
       }

       prev = temp;                         // if value is not matched
       temp = temp ->next;

    }
    
return head;

}


// main function
int main(){
    vector<int> arr = {24,5,6,6,44,66,8876,2};
    myNode* head = convertArr2LL(arr);
    head = removeValue(head,24);

    cout<< "linked list is:";
    print(head);
}