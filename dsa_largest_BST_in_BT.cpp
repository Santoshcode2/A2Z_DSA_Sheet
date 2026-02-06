class NodeValue{
public:
     int maxNode,minNode,maxSize;
     //constructor
     NodeValue(int minNode,int maxNode, int maxsize){
        this->maxNode=maxNode;
         this->minNode=minNode;
         this->maxSize=maxSize;
     }
};
class Solution{
    private:
    NodeValue largestBSTSubtree(TreeNode* root){
        if(!root){
            return NodeValue(INT_MAX,INT_MIN,0);
        }
        //get values from left & right subtree of current tree
        auto left=  largestBSTSubtree(root->left);
        auto right- largestBSTSubtree(root->right);
           
    }//
}