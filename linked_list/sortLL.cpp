#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
     ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

   ListNode* sortList(ListNode* head) {
        if(head == NULL) return NULL;
        if(head -> next == NULL)  return head;

        ListNode* temp = head;
        int i=0;
        vector<int> arr;
        
        while(temp != NULL){
            arr.push_back(temp -> val);
            temp = temp->next;
            // i++;
        }
        int n = arr.size();

        temp = head; i=0;
        sort(arr.begin(),arr.end());

        while(temp != NULL){
            temp -> val = arr[i];
            temp = temp -> next;
            i++;
        }
        
        return head;
    }

ListNode* convertArr2LL(vector<int> &arr){
   ListNode* head = new ListNode(arr[0]);
   ListNode* mover = head;

   for(int i=1;i<arr.size();i++){
    ListNode* temp = new ListNode(arr[i]);
    mover -> next = temp;
    mover = temp;
   }
 
 return head;
}


void print(ListNode* head){
cout<<head -> val<<" ";
head = head -> next;
}



int main(){

         vector<int> arr = {24,5,6,77,4,66,78,65,2};
         ListNode* head = convertArr2LL(arr);
         head = sortList(head);
         cout<<"sorted LL is:";
         print(head);
 }