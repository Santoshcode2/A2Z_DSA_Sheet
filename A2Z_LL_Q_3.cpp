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
    void deleteNode(ListNode* node) {
     
           node->val=node->next->val;
           node->next=node->next->next;
           
    }
};
//T.C=0(1)  & S.C=0(1)
// REMEMBER You are given the node to be deleted node. You will not be given access to the first node of head.