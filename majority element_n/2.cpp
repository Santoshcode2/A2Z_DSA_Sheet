class Solution {
public:
//better approach
    int majorityElement(vector<int>& nums) {
           map<int,int>mpp; //(element, cnt)
           //t.c=O(N * logN)
           for(int i=0;i<nums.size();i++){
                 mpp[nums[i]]++;
           }
           //O(N)
           for(auto it:mpp){
               if(it.second> (nums.size) / 2){
                  return it.first;
               }
           }
           return -1;
    }
};