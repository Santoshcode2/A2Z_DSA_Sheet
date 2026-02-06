/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 * };
 *
 *************************************************************************/
int findLength(Node* fast,Node* slow){
    
        int cnt=1;
        fast=fast->next;
        while(fast!=slow){
            cnt++;
            fast=fast->next;
    }return cnt;
}
int lengthOfLoop(Node *head) {
      Node* slow=head;
      Node* fast=head;
      while(fast!=NULL && fast->next!=NULL){
          fast=fast->next->next;
          slow=slow->next;
          if(slow==fast){
              return findLength(fast,slow);
          }
      }return 0;
}
//T.C=O(n)
//S.C=O(1)