class Solution {
public:
    int search(vector<int>& nums, int target) {
         
        int s=0 ; int e=nums.size()-1;
        while(s<=e){
                int  mid=(s+e)/2;
                if(nums[mid]==target) return mid;
                //now i will check whether left or right which one is sorted
                if(nums[mid]>=nums[s]){  //if left part is sorted 
                     if(target<=nums[mid] && nums[s]<=target){
                            e=mid-1;
                     } else{
                        s=mid+1;
                     }
                }else{
                        if(target>=nums[mid] && nums[e]>=target){
                           s=mid+1;  
                        }else{
                            e=mid-1;
                        }
                }
        }return -1;
    }
};