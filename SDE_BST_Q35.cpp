int findfloor(TreeNode* root, int key){
    int ceil=-1;
    while(root!=NULL){
       if(root==key){
        ceil=root->data;
        return ceil;
       }
        if(key>root->data){
            
            root=root->right;
        }else{
            ceil=root->data;
            root=root->left;
        }
    }return ceil;
}//T.C=O(H)  