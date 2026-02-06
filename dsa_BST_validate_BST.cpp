/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return validBST(root,long.MIN VALUE,long.MAX_VALUE);
        
    }
    bool validBST(TreeNode* root, long minval ,long maxval){
    //base case 
    if(root==NULL) return true;
    if(root->val >maxval || root->val <minval) return true;
    //traversing in the BT
    return validBST(root->left,minval,root->val) && validBST(root->right,root->val,maxval);

    }
};