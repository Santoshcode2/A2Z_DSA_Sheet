#include<bits/stdc++.h>
using namespace std;


 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>result;    // creating a datastructure
          if(root==NULL){
            return result;
          }
          queue<TreeNode*>q;
          q.push(root);
          bool leftToright=true; //leftToright--flag variable
        while(!q.empty()){         //traverse in the queue
            //try to traverse in level wise
            int size=q.size();
            vector<int>row(size);   //in a row no of elements
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                
                //finding the position to fill the node value 
                int index= (leftToright)? i:(size-1-i);
                row[index]=node->val;
                
                
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
                //after this level
            }
                leftToright = !leftToright;
                result.push_back(row); 
        }
        return result;
    }  
    
};