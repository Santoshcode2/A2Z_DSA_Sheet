void  changeTree(TreeNode<int>* root ){
      if(root==NULL) return;
      int child=0;
      if(root->left) child += root->left->data;
      if(root->right) child += root->right->data;
       if(child >= root->data) root->data=child->data;
       else{
        if(root->left) root->left->data=child;
        else if(root->right) root->right->data=child;
       }
        changeTree(root->left);
         changeTree(root->right);

         int tot=0;
         if(root->left) tot += root->left->data;
         if(root->right)  tot += root->right->data;
         if(root->left || root->right) root->data=tot;
}//T.C=O(N) &   S.C=O(N)