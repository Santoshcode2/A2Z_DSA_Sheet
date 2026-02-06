bool isSymmetric(TreeNode* root){
      //return root==NULL || isSymmetricCheck(root->left,root->right);  
        if(root==NULL) return false;
        isSymmetricCheck(root->left,root->right);
}

bool isSymmetricCheck(TreeNode* left,TreeNode* right){
    if(left==NULL || right==NULL) return left==right; 
    if(left->val!=right->val) return false; 
    return isSymmetricCheck(left->left,right->right);
     && 
    isSymmetricCheck(left->right,right->left);
}











// bool isSymmetric(TreeNode* root){
//        return root==NULL || symmetric(root->left,root->right);

// }
// bool  symmetric(root->left,root->right){
//        if(left==NULL || right==NULL) return left==right;
//        if(left->val!=right->val) return false;
//        return symmetric(left->left,right->right) && symmetric(left->right,right->left);
// }




















