//class Solution{
//public:
        TreeNode*  inorderSuccessor(TreeNode* root, TreeNode* q){
                
            TreeNode* successor= NULL;

            while(root!=NULL){
                if(q->val >= root->val){
                    root=root->right;
                }else{
                    predecessor=root;
                    root=root->left;
                }
            }return predecessor;
      
        }
//};