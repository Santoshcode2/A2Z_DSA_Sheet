/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
          if(headA==NULL || headB==NULL) return NULL;
          ListNode* t1=headA ;
          ListNode* t2=headB;
          map<ListNode*,int>mpp1;
          //first i will traverse the Linkedlist-A
          while(t1!=NULL){
               mpp1[t1]++;
               t1=t1->next;
          }//now i will traverse the linkedlist-B
          while(t2!=NULL){
              if(mpp1.find(t2)!=mpp1.end()){
                return t2;
              }
               else{ 
                       t2=t2->next;
               }
          }
          return NULL;
          
    }
};
//Time Complexity : O(m + n)
//Space Complexity : O(m)