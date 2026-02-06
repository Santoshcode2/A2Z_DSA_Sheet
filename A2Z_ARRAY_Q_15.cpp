class Solution {
public:
//better + optimal  approach for 2 sum problem :
    vector<int> twoSum(vector<int>& nums, int target) {
          map<int,int>mpp;
          for(int i=0;i<nums.size();i++){
            //mujhe ketna jayada chahiye target tak pahunchne ke liye
            int more=target-nums[i];
            if(mpp.find(more)!=mpp.end()){ //if more exist in map
                return {mpp[more],i}; //return "YES"
            }mpp[nums[i]]=i; 
          } return {};           //return "NO"    //return {-1,-1};
    }
};//T.C=O(N)  && S.C=O(N)

//we can optimize it if we have to return only "YES" if terget exist else "NO"
class Solution {
public:
//optimal approach for 2 sum problem :
    string twoSum(vector<int>& nums, int target) {
          int n=nums.size();
          int left=0; int right=n-1;
         
         while(left<right){
             int sum=nums[left]+ nums[right];
            if(sum==target){
                return "YES";
            }else if(sum<target) left++;
            else right--;
          } return "NO";
    }
};