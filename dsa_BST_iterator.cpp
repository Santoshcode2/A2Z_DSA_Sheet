class BSTIterator{
private: stack<TreeNode*>myStack;
public:
    BSTIterator(TreeNode* root){
        pushAll(root);
    }
      bool hasNext(){
        return ! myStack.empty();
      }
        int next(){
            TreeNode* tmpNode=myStack.top();
            myStack.pop();
            pushAll(tmpNode->right);
            return tmpNode->val;
        }

      private://push all the left elements into the stack
      void pushAll(TreeNode* node){
          for(;node!=NULL;myStack.push(node),node=node->left);
      }
};//T.C=O(1) & S.C=O(H)