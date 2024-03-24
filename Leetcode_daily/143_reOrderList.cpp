#include<bits/stdc++.h>
using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 

    ListNode* prevCal(ListNode* tail,ListNode* head){
        ListNode* tempHead = head;
        ListNode* prev = NULL;

        while(tempHead != tail){
            prev = tempHead;
            tempHead = tempHead -> next;
        }
        return prev;
    }


    void reorderList(ListNode* head) {
        ListNode* temp = head;
        ListNode* tail = head;

        while(tail -> next != NULL){
            tail = tail -> next;   // reaching to the tail node.
        }
    
       while((temp -> next -> next != tail) && (temp -> next != tail)){
            ListNode* tempFront = temp -> next;
            ListNode* tailPrev = prevCal(tail,head);

            temp -> next = tail;
            tail -> next = tempFront;

            temp = tempFront;
            tail = tailPrev;
        }

        if(temp -> next == tail){
            temp -> next = tail;
            tail -> next = NULL;
        }

        if(temp -> next -> next == tail){
            ListNode* front = temp -> next;
            temp -> next = tail;
            tail -> next = front;
            front -> next = NULL;
        }

        while(head != NULL){
            cout<<head -> val <<" ";
            head = head -> next;
        }
       
    }

  
ListNode* convertArr2LL(vector<int> &arr){
    ListNode* head = new ListNode(arr[0]);
    ListNode* mover = head;

  for(int i=1;i<arr.size();i++){
    ListNode* temp = new ListNode(arr[i]);
    mover ->next = temp;
    mover = temp;
  }
    return head;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    ListNode* head = convertArr2LL(arr);
    cout<<"modified Linked list is:";
    reorderList(head);


}