// #include<bits/stdc++.h>
// using namespace std;
// vector<vector<int>>  preInPost(TreeNode* root){
            
//             vector<vector<int>>ans;
//             stack<pair<TreeNode,int>>st;
//             st.push({root,1});
//             vector<int> pre,in,post;
//             if(root==NULL) return ans;
            
//             while(!st.empty()){
//                     auto it=st.top();
//                     st.pop();

//                     if(it.second==1){
//                         pre.push_back(it.first->data);
//                         it.second++;
//                         st.push(it);
//                         if(it.first->left!=NULL){
//                             st.push({it.first,1});
//                         }
//                     }
//                     if(it.second==2){
//                         in.push_back(it.first->data);
//                         it.second++;
//                         st.push(it);
//                         if(it.first->right!=NULL){
//                             st.push({it.first,1});
//                         }
//                     }else{
//                         post.push_back(it->first);
//                     }

//             }
//             ans.push_back(in);
//             ans.push_back(pre);
//             ans.push_back(post);
//             return ans;
        



// }//T.C= O(3N) --> WE ARE VISITING EVERY NODE 3 TIMES  & S.C=O(4N) FOR PRE ,IN ,POS & finally storing all in ans  



#include<bits/stdc++.h>
using namespace std;

struct TreeNode{
   int val;
   TreeNode* left;
   TreeNode* right;
};

vector<vector<int>> preInPost(TreeNode* root){
    vector<vector<int>>ans;
    vector<int>pre,in,pos;
    stack<pair<TreeNode*,int>>st;
    st.push({root,1});
    if(root==NULL) return ;
    while(!st.empty()){
        //pre
        auto it = st.top();
        st.pop();
        if(it.second==1){
            pre.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->left!=NULL){
                st.push({it.first->left,1});
            }
        }
        //in
        else if(it.second==2){
            in.push_back(it.first->val);
            it.second++;
            st.push(it);

            if(it.first->right!=NULL){
                st.push({it.first,1});
            }
        }
        //post
        else{
            pos.push_back(it.first->val);
        }
    }
            ans.push_back(in);
            ans.push_back(pre);
            ans.push_back(pos);
            return ans;
}