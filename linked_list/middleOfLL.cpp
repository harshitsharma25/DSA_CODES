#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int dat){
        data = dat;
        next = nullptr;
    }

    Node(int dat,Node* next1){
        data = dat;
        next = next1;
    }
};


Node* convertArr2LL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover -> next = temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    while(head != NULL){
        cout<< head -> data << " ";
        head = head -> next;
    }
}



                                             // T.C = O(3N/2)

Node* middleOfLL(Node* head)
{
    if(head == NULL || head -> next == NULL || head -> next -> next == NULL){
        return NULL;
    }

    Node* temp = head;
    Node* ans = NULL;
    // now i want to count the total no. of nodes in LL.
    int cnt = 0;
    while(temp != NULL){    // will calculate total no. of nodes in LL
        cnt++;
        temp = temp -> next;
    }

    int midNode = cnt/2 +1;
    cnt = 0;
    temp = head;

    while(temp != NULL){
        cnt++;
        if(cnt == midNode){
            ans = temp;
            break;
        }
        temp = temp -> next;
    }

    return ans;
}

int main(){
    vector<int> arr = {2,4,5,62,55,3};
    Node* head = convertArr2LL(arr);
    head = middleOfLL(head);
    cout<<"Your LL is: ";
    // print(head);
    cout<<head -> data;

}