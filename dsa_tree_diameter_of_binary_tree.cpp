//class solution{
//public:
int height_Binary_Tree(TreeNode* root){
    int diameter=0;
    height(root,diameter);
    return diameter;

}                    
//private:
int height(TreeNode* node, &diameter){
        if(node==NULL){
            return 0;
        }
        int lh=height(node->left,diameter);
        int rh=height(node->right,diameter);
        int diameter=max(diameter,lh+rh);
         
        return 1 + max(lh,rh); 
}
//};
//                T.C=O(N)   & S.C=O(N)