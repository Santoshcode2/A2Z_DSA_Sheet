//class Solution{
//public:
    TreeNode* InsertNode(TreeNode* root,int val){
             
             if(root==NULL) {
                 return new TreeNode(val);
             }
             TreeNode* cur=root;  //we create a copy of root because  we have to return the root
             
            while(true){

                if(val>cur->data){
                     if(cur->right!=NULL) cur=cur->right;
                     else{
                          cur->right= new TreeNode(val);                          
                     }break;
                }
                else{
                    if(cur->left!=NULL) cur=cur->left;
                    else{
                        cur->left=new TreeNode(val);
                    }break;
                }
            }return root;
    }
//};