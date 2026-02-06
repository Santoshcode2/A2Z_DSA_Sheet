//class Solution{
//public:
int maxPathSum(TreeNode* root){
       
       int maxi=0;
       buildMax(root,maxi);
       return maxi;
}
int buildMaxi(TreeNode* node,int maxi){
         if(node==NULL) return 0;

        int left =max(0, buildMaxi(node->left,maxi));
        int right = max(0,buildMaxi(node->right,maxi));
        maxi=max(maxi,left+right+node->data);

        return (node_>data)+ max(left,right);

}
//};
