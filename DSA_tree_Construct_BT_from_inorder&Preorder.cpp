TreeNode* buildTree(vector<int> &preorder , vector<int> &inorder){
          
          map<int,int>Map;

          for(int i=0;i<inorder.size();i++){
               Map[inorder[i]]=i;
          }
          treeNode* root = buildTree(preorder,0,preorder.size()-1,inorder,0,inorder.size()-1,Map);
          return root;
}
TreeNode* buildTree(vector<int> &preorder,int preStart,int preEnd,vector<int> &inorder,int inStart,int inEnd,map<int,int>Map){
            
}