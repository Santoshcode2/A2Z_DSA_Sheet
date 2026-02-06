//class Solution{
//public:

bool getPath(TreeNode* root, int node){
    if(!root) return false;
    ans.push_back(root->val);
    if(root->val==node)    return true;
    if(getPath(root->left,node) || getPath(root->right,node)){
        return true;
    }ans.pop_back();
    return false;
}
//public:
vector<int> pathLeafNode(TreeNode* root, TreeNode* node){
               vector<int>ans;
               if(root==NULL){
                 return ans;
               }
               getPath(root,node);
               return ans;
}
//};
//T.C=O(N) & S.C=O(N)--FOR WORST CASE & NORMALLY IT IS O(log2N)