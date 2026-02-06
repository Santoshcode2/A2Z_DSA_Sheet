#include<iostream>
using namespace std;

int maxDepth(treeNode* root){
     if(root==NULL){
        return 0;
     }
     int lh = maxDepth(root->left);
     int rh = maxDep(root->right);

     return 1 + max(lh,rh);
}

// T.C=O(n) & S.C=O(n)