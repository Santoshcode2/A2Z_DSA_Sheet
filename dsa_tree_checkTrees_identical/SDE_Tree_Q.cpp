vector<vector<int>> Zigzag(TreeNode* root){

          vector<vecctor<int>>ans;
          if(root==NULL) return ans;
          queue<TreeNode* >q;
          q.push(root);
        //   bool leftToRight=true;

          while(!q.empty()){
                int size=q.size();
                vector<int>level;
                for(int i=0;i<size;i++){
                    TreeNode* node=q.front();
                    q.pop();

                    // int index = leftToRight ? i : (size-1-i);

                    if(node->left!=NULL) q.push(node->left->data);
                    if(node->right!=NULL) q.push(node->right->data);
                    level.push_back(node->data);
                }
                // leftToRight=! leftToRight;
                ans.push_back(level);
          }
          return ans;

}