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
int findfloor(TreeNode* root, int key){

    int floor=-1;
    while(root){
         if(root->data==key){
            floor=root->data;
            return floor;
         }
        if(key>root->data){//we have to increase it & before increasing lets store it first
             floor=root->data;//we want greatest value 
             root=root->right;
         }else{
            root=root->left;
         }
    }return floor;
}