bool balancedTree(TreeNode* root){
      return build(root)!=-1;//not balanced_BT  
      
}
int build(TreeNode* root){
     
      if(root==NULL) return 0;

      TreeNode* lh=build(root->left);
      if(lh==-1) return -1;
      TreeNode* rh=build(root->right);
       if(rh==-1) return -1;
   
       if(abs(lh-rh)>1){
        return -1;
       }
       return 1+ max(lh,rh);
}