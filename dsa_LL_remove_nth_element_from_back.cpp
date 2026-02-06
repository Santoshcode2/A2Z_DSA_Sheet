/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
          if(head==NULL || (head->next==NULL && n==1)) return NULL;
          
          ListNode* temp=head;
          int cnt=0;
          while(temp!=NULL){
                 cnt++;
                 temp=temp->next;
          }
          if(cnt==n){
            ListNode* newHead=head->next;
            delete head;
            return newHead;
          }
          temp=head;
        //   for(int i=0;i<(cnt-n-1);i++){
        //        temp=temp->next;
        //   }
        int res=cnt-n;
        while(temp!=NULL){
            res--;
            if(res==0){
                break;
            }else temp=temp->next;
        }
          //jis node ko delete karna hai waha tak pahunch gaya hu
            ListNode* deleteNode=temp->next;
          temp->next=temp->next->next;
           delete deleteNode;
          return head;
    }
};