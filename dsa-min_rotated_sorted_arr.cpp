class Solution {
public:
    int findMin(vector<int>& nums) {
       int s=0; int e=nums.size()-1; int target=INT_MAX;
       while(s<=e){
           int mid=(s+e)/2;
           //konsa part sorted hai check karunga
           if(nums[mid]>nums[s]){
            //means left is sorted
            target=min(target,nums[s]);
            s=mid+1;
           }else{
            //means right is sorted
             target=min(target,nums[mid]); 
             e=mid-1;
           }
       }return target; 
    }
};