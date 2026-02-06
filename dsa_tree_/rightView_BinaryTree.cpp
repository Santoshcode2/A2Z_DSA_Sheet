//class Solution{
 vector<int> rightSideView(TreeNode* root){
     vector<int> res;
      recursion(root,0,res);
      return res;
 }

//public:
void recursion(TreeNode* root, int level, vector<int> &res){
    if(node==NULL) return;
     
    if(res.size()==level) res.push_back(node->data);

    recursion(node->right,level+1,res);
    recursion(node->left,level+1,res);
}
//};