#include<bits/stdc++.h>
using namespace std;
//T.C =O(N) && S.C=O(1)
class Solution {
public:
    int subarraySum(vector<int>& nums, int goal){
        if(goal<0) return 0;
        int l=0,r=0,n=nums.size(),len=0;
        int sum=0;
        int cnt=0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal){
                sum=sum-nums[l];
                l++;
            } 
            cnt=cnt +(r-l+1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
         return subarraySum(nums,goal)-subarraySum(nums,goal-1);

    }
    
};