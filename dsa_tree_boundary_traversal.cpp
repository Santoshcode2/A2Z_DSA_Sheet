void AddleftBoundary(TreeNode* root, vector<int> res){
    TreeNode* cur=root->left;  //we are starting with root ka left
    while(cur){     
        if(!isleaf(cur)) res.puh_back(cur->data);
        if(cur->left) cur=cur->left;
        else cur=cur->right;

    }
} 
void addRightBoundary(TreeNode* root,vector<int> res){
         TreeNode* cur=root->right;
         vector<int>temp;
         while(cur){
            if(!isLeaf(cur)) temp.push_back(cur);
            if(cur->right) cur=cur->right;
            else{
                cur=cur->left;
            }
         }
         for(int i=temp.size()-1;i>=0;--i){
            res.push_back(temp[i]);
         }
}
void   addLeaves(TreeNode* root , vector<int>res){  //do inorder traversal 
    if(isLeaf(root)) {
        res.push_back(root->data);
        return;
    }
    if(root->left) addLeaves(root->left,res);
    if(root ->right) addLeaves(root->right,res);
}



//public:
vector<int> boudaryTraversal(treeNode* root){
    vector<int>res;  //create a data structure
    if(!root) return res;  //if there is no root return empty data structure
    if(!isLeaf(root)) res.push_back(root->data);
    addLeftboundary(root,res);
    addLeaves(root,res);
    addRightBoundary(root,res);
    return res;
}
//isLeaf is a predefined function in vs code to get the leaf nodes