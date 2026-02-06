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
TreeNode* constructBST(vector<int>& arr,int start, int end){
    if(start>end) return NULL;
    int mid=(start+end)/2;
    TreeNode* root=new TreeNode(arr[mid]);
    //now i will call construct root->left & root->right recurcsively
   root->left=constructBST (arr,start,mid-1);
   root->right=constructBST(arr,mid+1,end);
    return root;  
} 
    TreeNode* sortedArrayToBST(vector<int>& nums) {
             
            return constructBST(nums,0,nums.size()-1);
    }
 
};