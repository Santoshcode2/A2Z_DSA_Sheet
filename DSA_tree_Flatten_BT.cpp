int  flattenBinaryTree(TreeNode* root){
         
        TreeNode* prev=NULL;
        if(root==NULL) return ;
        flattenBinaryTree(root->right);
        flattenBinaryTree(root->left);
        root->right=prev;
        root->left=NULL;
        prev=root
}

