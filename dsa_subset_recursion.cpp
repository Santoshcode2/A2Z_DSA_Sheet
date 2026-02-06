class Solution{
public:
    void   solve(vector<int>& nums,vector<int>output,vector<vector<int>>ans,int index){
               //base case
               if(index> nums.size()){
                    ans.push_back(output);
                    return;
               }
               //exclude part
               solve(nums,output,ans,index+1);
               //include part
               output.push_back(nums[index]);
               solve(nums,output,ans,index+1);


    }

     
    vector<vector<int>> subsets(vector<int>& nums) {
               vector<vector<int>>ans;
               vector<int>output;
               int index=0;
               solve(nums,output,ans,index);
               return ans;
    }
}