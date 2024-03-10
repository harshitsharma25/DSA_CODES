#include<bits/stdc++.h>
using namespace std;

 struct ListNode {
     int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

  ListNode* reverseLink(ListNode* nodeOne);

  ListNode* getKthNode(ListNode* temp,int k){
    k -= 1;
    while(temp != NULL && k > 0){
        k--;
        temp = temp -> next;
    }
    return temp;
  }

    ListNode* reverseLink(ListNode* nodeOne){
        //  ListNode* next = nodeTwo -> next;
         ListNode* prev = NULL;

        while(nodeOne != NULL){
           ListNode* front = nodeOne -> next;
           nodeOne -> next = prev;
           prev = nodeOne;
           nodeOne = front;
          
        }

        return prev;
    }


 ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* previousNode = NULL;
        

        while(temp != NULL){

           ListNode* kThNode = getKthNode(temp,k);
           if(kThNode == NULL){
               if(previousNode) previousNode ->next = temp;
               break;
           }


           ListNode* front = kThNode -> next;
           kThNode -> next = NULL;
               
           reverseLink(temp);
                

                if(temp == head){          // to store the head.
                    head = kThNode;
                }

                else{
                    previousNode -> next = kThNode;   // to link the previous linked list of size k to another further linked list of size k.
                }


                previousNode = temp;
                temp = front;           // means after reversing, starting of another reverse will from temp.

        }
        return head;
    }

  
   

void print(ListNode* head){

   while (head != NULL)
   {
      cout<< head -> val<<" ";
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
    vector<int> arr = {1,2,3,4,5,6,7,8};
    int k = 2;

    ListNode* head = convertArr2LL(arr);
    head = reverseKGroup(head,k);

    cout<<"answer is:";
    print(head);
}