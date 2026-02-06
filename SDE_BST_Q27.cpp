bool  findElement(TreeNode* root, TreeNode* node){
      if(root==NULL) return false;
      if(root->val==node->val) return true;
      build(root,node);
     
}
bool build(TreeNode* root,TreeNode*node){
       if(root->val==node->val) return true;
       if(root->val>node->val) 
       findElement(root->left);
       else{
         findElement(root->right);
      } 
  
}