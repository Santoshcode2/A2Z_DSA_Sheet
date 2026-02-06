#include<iostream>
#include<vector>
#include<stack>
using namespace std;

vector<int> IterativePreorder(TreeNode* root){

vector<int>preorder;              //create a list
if(root==NULL) return preorder;          //return emptylist
stack<TreeNode*>st;
st.push(root);
while(!st.empty()){
         root=st.top();
         st.pop();
         preorder.push_back(root->val);
         if(root->right!=NULL){
            st.push(root->right);
         }if(root->left!=NULL){
            st.push(root->left);
         }
}return preorder;

}