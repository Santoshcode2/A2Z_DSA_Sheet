vector<int> addLeftBoundary(TreeNode* root, vector<int> res){
                TreeNode* cur=root->left;
                while(cur){
                    if(!isLeaf(cur)) res.push_back(cur->data);
                    if(cur) cur=cur->left;
                    else cur=cur->right;
                }
}
vector<int> addRightBoundary(TreeNode* root, vector<int> res){
              TreeNode* cur=root->right;
              vector<int>temp;
              while(cur){
                if(!isLeaf(cur)) temp.push_back(cur->data);
                if(cur) cur=cur->right;
                else cur=cur->left;
              }
              for(int i=temp.size()-1;i>=0;i++){
                   res.push_back(temp[i]);
              }
}
vector<int>   addLeaves(TreeNode* root, vector<int> res){ ///INORDER TRAVERSAL
            if(isLeaf(root)){
                res.push_back(root->data);
                return;
            }
            if(root->left)     addLeaves(root->left,res);
            if(root->right)     addLeaves(root->right,res);
}


//public:
vector<int> boudaryTraversal(treeNode* root){
        vector<int> res;
        if(root==NULL) return res;
         if(!isLeaf(root)) res.push_back(root->data);
        addLeftBoundary(root, res);
        addLeaves(root,res);
        addRightBoundary(root, res);
        return res;
        
}