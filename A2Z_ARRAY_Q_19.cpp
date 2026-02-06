class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int maxi=INT_MIN;
        int n=nums.size();int sum=0;
        for(int i=0;i<n;i++){
            //   int sum=0;
             for(int j=i,sum=0;j<nums.size();j++){
               
                
                 sum = sum + nums[j];
                maxi=max(maxi,sum);
             }
        }return maxi;
       
    }
};

