int    levelOrder(TreeNode* root){
       vector<vector<int>>ans;
       if (root==NULL) return ans;
       queue<TreeNode*>q;
       q.push(root->data);
       while(!q.empty()){
            int size=q.size();
            vector<int>level;
                for(int i=0;i<size;i++){
                     TreeNode* node=q.front();
                     q.pop();
                     if(node->left) q.push(node->data);
                     if(node->right) q.push(node->data);
                     level.push_back(node->data);
                }ans.push_back(level);
        }return ans;
}