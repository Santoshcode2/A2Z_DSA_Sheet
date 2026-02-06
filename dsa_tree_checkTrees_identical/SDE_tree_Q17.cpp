TreeNode*  LCA(TreeNode* root,TreeNode* p,TreeNode* q){
    //base case
    if(root==NULL || p==root || q==root) 
            return root;    
    
    TreeNode* left=LCA(root->left,p,q);
    TreeNode* right=LCA(root->right,p,q);
    //we have traverse our tree while coming back

    if(left==NULL) return right;
    else if(right==NULL) return left;
    else{
        return root;
    }

}