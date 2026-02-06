/*struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
 class Solution
{
    public:
    vector<   }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
vector<int>ans;
int kthLargest(Node *root, int K){
    
          build(root);
          int N=ans.size();
          return ans[N-K];
}
    void build(Node* root){
        if(root==NULL) return;
        build(root->left);
        ans.push_back(root->data);
        build(root->right);
s    }
};