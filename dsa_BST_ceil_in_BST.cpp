int findCeil(TreeNode* root,int key){
           
           int ceil=-1;
           while(root){
                    if(root->data==ceil){
                        ceil=root->data;
                        return ceil;
                    }
                    else if(key>root->data){
                        root=root->right;
                    }
                    else{
                        ceil=root->data;
                        root=root->left;
                    }

           }
           return ceil;


}