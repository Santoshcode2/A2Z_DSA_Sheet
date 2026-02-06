class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int subsets=1>>nums.size();
        vector<vector<int>>ans;
        for(int i=0 ;i<subsets;i++){
              for(int j=0;j<nums.size();j++){
                    vector<int>list;
                    //we have to check i-th bit set or not
                    if(nums&(1<<i)){
                          list.push_back(nums[i]);
                    }
              }  ans.push_back(list);         
        }return ans;
    }
};