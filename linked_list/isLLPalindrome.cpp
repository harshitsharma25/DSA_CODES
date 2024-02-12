#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

 ListNode* reverse(ListNode* head){
        ListNode* tempHead = head;
        ListNode* prev = NULL;

        while(tempHead != NULL){
            ListNode* front = tempHead -> next;
            tempHead -> next = prev;
            prev = tempHead;
            tempHead = front;
        }
        return prev;
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

bool isPalindrome(ListNode* head) {
        if(head == NULL || head -> next == NULL) return true;
        
        ListNode* slow = head;
        ListNode* fast = head;
        
        while(fast -> next != NULL && fast -> next -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* newHead = reverse(slow -> next);
        ListNode* first = head;
        ListNode* second = newHead;

        while(second != NULL){
            if(first -> val != second -> val){
                return false;
            }

            first = first -> next;
            second = second -> next;
        }

        return true;
}


    int main(){

    vector<int> arr = {1,1,2,1};
   
    ListNode* head = convertArr2LL(arr);

    
    if(isPalindrome(head))
      cout<<"yes, list is palindrome";
    else  
      cout<<"no, list in not palindrome";
    // print(head);

   }