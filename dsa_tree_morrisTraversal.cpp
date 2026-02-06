vector<int>  getInorder(TreeNode* root){
        vector<int>inorder;
        TreeNode* cur=root;  //so that my root doesn't get destroyed
        while(cur!=NULL){
           //CASE 1
            if(cur->left==NULL){
                inorder.push_back(cur->val);
                cur=cur->right;
            }
            //CASE 2
            else{
                TreeNode* prev=cur->left;
                while(prev->right && prev->right!=cur){ //if there exist a right and that right is not pointing to cur
                    prev=prev->right;
                }
                if(prev->right==NULL){
                    //create the thread;
                    prev->right=cur;
                    cur=cur->right;

                }
                else{
                    //cut the thread
                    prev->right=NULL;
                    inorder.push_back(cur->val);
                    cur=cur->right;
                }
            }

        }return inorder;
}