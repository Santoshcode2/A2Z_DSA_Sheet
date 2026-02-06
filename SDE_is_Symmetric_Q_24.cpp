bool isSymmetric(TreeNode* root){
 
     return (root==NULL) || Symmetric(root->left,root->right);

}
bool Symmetric(TreeNode* left,TreeNode*  right){
            if(left==NULL || right==NULL) return left==right; 
            if(left->val!=right->val) return false;
            return Symmetric(left->left,right->right) && Symmetric(left->right,right->left);            

}


