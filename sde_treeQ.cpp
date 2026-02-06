// int    maxHeight(TreeNode* root){
//           if(root==NULL){
//             return 0;
//           }
//           int lh=maxHeight(root->left);
//           int rh=maxHeight(root->right);
//           return 1+ max(lh,rh);
// }
int maxDiameter(TreeNode* root int maxi){
       if(root==NULL) return 0;

       int lh=maxDiameter(root->left,maxi);
       int rh=maxDiameter(root->right,maxi);

       maxi=max(maxi,lh+rh);

       return maxi;

}