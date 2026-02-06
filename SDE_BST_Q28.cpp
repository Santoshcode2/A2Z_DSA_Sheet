//class Solution{
//public:
   TreeNode* bstFromPreorder(vector<int> &nums){
                 int i=0;
                 int bound=INT_MAX;
                 build(nums,i,bound);//kya return karna padega?
   }
   TreeNode* build(vector<int>&nums,int & i,int bound){
            if(i>nums.size() || nums[i]>bound) return NULL;
            TreeNode* root= new TreeNode(nums[i++]);
            root->left=build(nums,i,root->val);
            root->right=build(nums,i,bound);
            return root;
   } 