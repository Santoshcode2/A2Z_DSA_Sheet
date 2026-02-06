vector<vector<int>>ans;
                      //level order traversal means iterative traversal
vector<vector<int>>   levelOrder(TreeNode* root){
          if(root==NULL) return ans;
          queue<TreeNode*>q;       //ye space to delete kar de rahe hai
          q.push(root->data);
          while(!q.empty()){
                int size=q.size();
                vector<int>level;
                for(int i=0;i<size;i++){
                    TreeNode* node=q.front();
                    q.pop();
                    if(node->left!=NULL) q.push(node->data);
                    if(node->right!=NULL) q.push(node->data);
                    level.push_back(node->data);
                }ans.push-back(level);
          } return ans;
 
}//T.C=O(N) & S.C=O(N)
