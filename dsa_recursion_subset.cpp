class Solution {
public:

int solve(vector<int>nums,vector<int>output,int index,vector<vector<int>> & ans){
           
     //base case
     if(index>nums.size()){
         ans.pushback(output);
         return;
     }
     //exclude part
     solve(nums,output,index+1,ans);
     
     //include part
     int element=nums[index];
     output.pushback(element);
     solve(nums,output,index+1,ans);

}
vector<vector<int>> subsets(vector<int>& nums) {
         
         vector<vector<int>>ans;
         vector<int>output;
         int index=0;
         solve(nums,output,index,ans){
             return ans;
         }
    }
}