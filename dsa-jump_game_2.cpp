class Solution {
public:
    int jump(vector<int>& nums) {
       int jumps=0, l=0,r=0, n=nums.size();
       while(r<n-1){
            int farthest=0;
            for(int i=l;i<=r;i++){
                farthest=max(farthest,i+nums[i]);
            }
            l=r+1;
            r=farthest;
            jumps++;
       }
        return jumps;
    }
};
//T.C=O(N)  & S.C=O(1)

#include<bits/stdc++.h>
using namespace std;
// //brute force
// class Solution {
// public: //[2,3,1,1,4]
 int func(vector<int>& nums,int index,int jump);
    int func(vector<int>& nums,int index,int jump){
        int n=nums.size();
        if(index>=n-1) return jump;
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mini=min(mini,func(nums,index+i,jump+1));
        }
        cout<< mini;

    }
    
    int jump(vector<int>& nums) {
        return   func(nums,0,0);
    }
// };
int main(){
    vector<int>nums={2,3,1,1,4};
    return func(nums,0,0);
}