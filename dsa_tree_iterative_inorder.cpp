#include<iostream>
#include<vector>
using namespace std;

vector<int> InorderTraversal(tree* root){
       stack<tree*>st;
       vector<int>inorder;
       tree* node=root;
      
       while(True){
            if(node!=NULL){
                st.push(node);
                node=node->left;
            }else{
                if(st.empty()==True){ //means no node to travel
                          break;
                }node=st.top();
                st.pop();
                inorder.push_back(node->val);
                node=node->right;
            }
       }return inorder;
}
