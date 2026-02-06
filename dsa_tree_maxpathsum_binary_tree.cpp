#include<iostream>
using namespace std;
//class Solution{
//public:
int maxPathSum(TreeNode* root){
      int maxi=INT_MIN;
      maxPathDown(root,maxi);
      return maxi;
}

int maxPathDown(TreeNode* node,int  &maxi){
              if(node==NULL){
                return 0;
              }
        int left=max(0,maxpath_Binary(node->left,maxi));     //if from left/right i will get a negative  
        int right=max(0,maxpath_Binary(node->right,maxi));   //i will just return zero
        maxi=max(maxi,left+right+node->val);

         return  max(left,right)+ node->val;
}
//};