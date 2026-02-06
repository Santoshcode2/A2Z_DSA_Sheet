#include<iostream>
using namespace std;

bool checkTrees(Treenode* p , TreeNode* q){ //p & q  are  the root of tree1 & tree2
         if(p==NULL || q==NULL)
          return (p==q);

          return(p->val=q->val) && checkTrees(p->left,q->left) && checkTrees(p->right,q->right);
}
