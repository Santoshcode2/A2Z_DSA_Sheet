//class Solution{
//public:
   TreeNode* bstFromPreorder(vector<int> &A){  //A is an array in preorder form-> a=[8,5,1,7,10,12]
           int i=0;
           build(A,i,INT_MAX);
   }
   
   int build(vector<int>A , int &i,int bound ){
            //first i will check whether the array is empty || greater than bound  
          if(i>A.size() || A[i]>bound) return NULL;
          TreeNode* root=new TreeNode(A[i++]);   //create a node
          root->left=build(A,i,root->val);    //root->left first because A is given in preorder traversal 
          root->right=build(A,i,bound);
          return root;                                    

   }
//};

//T.C=O(n)
//S.C=O(1)