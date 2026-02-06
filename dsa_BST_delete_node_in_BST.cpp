int  DeleteNode(TreeNode* root, int val){

    if(root==NULL) return NULL;
    if(root==val){
             return helper(root);
    }
    TreeNode* dummy=root;
    while(root){
       if(root->data>val){
             if(root->left!=NULL &&  root->left->data==val){
                    root->left = helper(root->left);
                    break;
             }
             else{
                root=root->left;
             }
        }
        else{
             if(root->right!=NULL &&  root->right->data==val){
                    root->right = helper(root->right);
                    break;
             }
             else{
                root=root->right;
             }

        } 
    }return dummy;
}
int helper(root->left){
         if(root->left==NULL){
            return root->right;
         }if(root->right==NULL){
            return root->left;
         }       
         TreeNode* rightChild=root->right;
         TreeNode* leftRight=findleftright(root->left);
         leftright->right=RightChild;
         return root->left;

}

int findleftRight(root->left){
    if(root->right==NULL){
        return root;
    }
    root=root->right;

}