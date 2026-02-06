//class Solution{
//public:
    TreeNode* find_LCA(TreeNode* root, TreeNode* p, TreeNode* q){
            if(root==NULL){
                return NULL;
            } 
            TreeNode* cur=root->data;
            if(cur > p->data && cur > q->data){
                return find_LCA(root->left,p,q);
            }
            if(cur < p->data && cur < q->data){
                return find_LCA(root->right,p,q);
            }
            else{
                return root;
            }


    }
//};