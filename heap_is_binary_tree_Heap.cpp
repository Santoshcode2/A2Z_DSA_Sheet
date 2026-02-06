#include<bits/stdc++.h>
using namespace std;

int countNode(struct Node* root){
    if(root==NULL) return 0;
    int ans = 1 + countNode(root->left) + countNode(root->right);
    return ans; 
}

bool isCBT(struct Node* root, int index, int totalcount){
    if(root==NULL) return true;

    if(index>=totalcount) return false;
    else{
        bool left = isCBT(root->left,2*index+1,totalcount);
        bool right= isCBT(root->right,2*index+2, totalcount);
        return (left && right); 
    }
}

bool isMaxOrder(struct Node* root){
    //leafNode
    if(root->left==NULL && root->right==NULL) return true;

    //only one left exist
    if(root->right==NULL){
        return (root->data > root->left->data);
    }
    else{ //both child exists
         bool left = isMaxOrder(root->left);
         bool right = isMaxOrder(root->right);

      if(left && right && (root->data > root->left->data && root->data >root->right->data)){
        return true;
      } 
      else return false;

    }
}

bool isHeap(struct Node* root){
    int index =0;
    int totalCount = countNode(root);
    if(isCBT(root,index, totalCount ) && isMaxOrder(root)){
        return true;
    }
    else return false;

}