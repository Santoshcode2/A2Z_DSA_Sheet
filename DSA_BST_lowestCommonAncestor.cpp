//class Solution{
//public:
    TreeNode* find_LCA(TreeNode* root, TreeNode* p, TreeNode* q){
         
        if(root==NULL){
            return NULL;
        }
        int cur=root->data;
        //if both of them lie on left side
        if(cur > p->data  && cur > q->data){
            return  find_LCA(root->left,p,q);
        }
        //if both of them lie on right side
        if(cur < p->data  && cur < q->data){
            return  find_LCA(root->right,p,q);
        }
        return root;
    }

//};