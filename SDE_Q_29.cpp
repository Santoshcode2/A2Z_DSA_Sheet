bool  search_key(TreeNode* root, TreeNode* key){
             int bound=INT_MAX;
              Searchkey(root,k,bound);
              
}
void   Searchkey(TreeNode* root,TreeNode* k,int bound){
    if(root->data==key) return;
    if(root->data<key){
        Searchkey(root->right,key,root->data);
    }else {
          Searchkey(root->left,key);
    }

}