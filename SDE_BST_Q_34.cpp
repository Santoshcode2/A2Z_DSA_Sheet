int findfloor(TreeNode* root, int key){
    int floor=-1;
    while(root!=NULL){
       if(root==key){
        floor=root->data;
        return floor;
       }
        if(key>root->data){
            floor=root->data;
            root=root->right;
        }else{
            root=root->left;
        }
    }return floor;
}//T.C=O(H) 