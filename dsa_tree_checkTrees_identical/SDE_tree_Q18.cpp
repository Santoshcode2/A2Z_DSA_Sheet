bool  checkTreeIdentical(TreeNode* p, TreeNode* q){
            
            if(p==Null || q==NULL) {
                return(p==q);

            }
            return(p->val==q->val);
            && checkTreeIdentical(p->left,q->left);
            && checkTreeIdentical(p->right,q->right);
            
            
}