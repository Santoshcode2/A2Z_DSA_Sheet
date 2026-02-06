
  struct Node {
      int val;
      ListNode *next;
  };


#include<bits/stdc++.h>
using namespace std;

struct Node{
    
    Node* next;
};
class Solution{
    public:
        bool detectLoop(Node* head){
            Node* slow=head;
            Node* fast=head;
            while(fast!=NULL && fast->next!=NULL){
                slow=slow->next;
                fast=fast->next->next;
                if(slow==fast) return true;
            }
            return false;
        }
};//T.C=O(N) && S.C=O(1)
