#include<bits/stdc++.h>
using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
  };

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

                                                     // Approach one - tortoise and hare approach

// if can return the intersection node as well.
// int getIntersectionNode(ListNode *headA, ListNode *headB) {
//         if(headA == NULL || headB == NULL) return -1;
//         ListNode* first = headA;
//         ListNode* second = headB;

//         while(first != second){
//             first = first -> next;
//             second = second -> next;

//             if(first == second){    // return the first node
//                 return first -> val;
//             }

//             if(first == NULL){
//                 first = headB;              // here if first pointer reached the null of LL one then it will point to the head of LL 2
//             }
//             if(second == NULL){
//                 second = headA;             // here if second pointer reached the null of LL two then it will point to the head of LL 1.
//             }
//         }

//         return first -> val;
//     }


                                 // Approach two - by maintain the same level of both linked list.

int intersectionPoint(ListNode* small,ListNode* big,int d){
    while(d){
        d--;
        big = big -> next;
    }

    while(small != big){
        small = small -> next;
        big = big -> next;
    }
    return small -> val;
}

int getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return -1;
        ListNode* first = headA;
        ListNode* second = headB;

        int size1=0;
        int size2=0;

        while(first != NULL){
            size1 += 1;
            first = first -> next;
        }

        while(second != NULL){
            size2 += 1;
            second = second -> next;
        }

        if(first < second){
            return intersectionPoint(headA,headB,size2 - size1);
        }
         else{
            return intersectionPoint(headB,headA,size1 - size2);
        }

        return -1;
    }

   

  int main(){
    vector<int> arr1 = {3,4,35,6,7,3,67,2};
    vector<int> arr2 = {78,4};

    ListNode* head1 = convertArr2LL(arr1);
    ListNode* head2 = convertArr2LL(arr2);

    head2 -> next -> next = head1 -> next -> next;   // here the tail of linked list 2 is linded to third element of linked list 1.
                                                      // and the intersection is the third node in linked list 1.

    int val = getIntersectionNode(head1,head2);

    if(val >= 0)
    cout<<"The intersection point is:"<<val;

    else{
        cout<<"No intersection";
    }
  }