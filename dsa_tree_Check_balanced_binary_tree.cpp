#include<iostream>
using namespace std;

bool  isBalanced(TreeNode* root){
    return Check_Balanced(root)!=-1 //we will call the function if it is -1 means not balanced binary tree
}

int Check_Balanced(TreeNode* root){
       if(root==NULL){
        return 0;
       }
       int leftHeight=Check_Balanced(root->left);
       if(leftHeight==-1) return -1;// if by chace left height is -1 return -1
       int rightheight=check_Balanced(root->right);
       if(rightHeight==-1) return -1; //if by chace right height is -1 return -1

       if(abs(leftHeight-rightheight)>1) return -1;

       return   1 + max(leftheight,rightheight);


}
//T.C=O(N) & S.C=O(N)