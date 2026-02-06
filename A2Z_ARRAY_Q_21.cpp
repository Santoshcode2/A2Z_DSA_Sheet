class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    //     vector<int>arr;
    //     for(int i=0;i<nums.size();i++){
    //          if(nums[i]>0)  arr[2*i]=nums[i];
    //          else arr[2*i+1] = nums[i];
    //    }return arr;
    // } 
        int n=nums.size();
        vector<int>ans(n);
        int posIndex=0;  int negIndex=1;
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                  ans[negIndex]=nums[i];
                  negIndex+=2;
            }
            else {
               ans[posIndex]=nums[i];
               posIndex+=2;
            } 
        }return ans;
    }
};