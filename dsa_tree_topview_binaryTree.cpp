vector<int> topView(TreeNode* root){
        vector<int> ans;  //it will store my top view
        if(root==NULL) return ans;
        map<int,int>map;
        queue<pair<TreeNode*, int>>q;
        q.push({root,0});
        while(!q.empty()){
            //get the top most node
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int line=it.second;
            //if that line doesn't exist in map--then you will initialise that node in map
            if(map.find(line)==map.end())  map[line]=node->data();
 
            if(node->left!=NULL) q.push({node->left,line-1});
            if(node->right!=NULL) q.push({node->right,line+1});

           
            
        }
        //iterate on the map
        for(auto it: map){
                ans.push_back(it.second);
            }return ans;


}