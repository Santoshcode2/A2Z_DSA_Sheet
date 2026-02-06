#include<bits/stdc++.h>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode* right;
    TreeNode* left ;
    TreeNode(int val){
        data = val;
    }
};


class solution{
public:
    vector<int> lowestCommonAncestor(TreeNode* root , TreeNode* p,TreeNode* q){
        //base case
        if(root==NULL || p==root || q==root){
                  return root;
        }
        TreeNode* left=lowestCommonAncestor(root->left,p,q);
        TreeNode* right=lowestCommonAncestor(root->right,p,q);

       // after traversing when it is coming back it has a left and it has a right
        if(left==NULL) return right;
        else if(right==NULL) return left;
            /*if these two conditions are false it means 
            under this root both the roots are lying
            */
        else{
           return root;
        }

    }
};
//T.C=O(N) & S.C=O(N)--IN RECURSIION it uses auxiliary stack space