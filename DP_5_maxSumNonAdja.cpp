#include<bits/stdc++.h>
using namespace std;
int maximumNOnAdjacentSum(vector<int> &nums);
int f(int ind , vector<int> &nums);

int main(){
    int n;
    cin>>n;
    vector<int>nums;
    for(int i=0 ;i<n;i++){
         cin>>nums[i];
    }
    cout<<maximumNOnAdjacentSum(nums);
    return 0;
}

int f(int ind , vector<int> &nums){
     if(ind == 0) return nums[ind];
     if(ind < 0) return 0;

     int pick = nums[ind] + f(ind-2,nums);
     int notpick = 0 + f(ind-1,nums) ;
     return max(pick,notpick);
}

int maximumNOnAdjacentSum(vector<int> &nums){
    int n = nums.size();
    return f(n-1,nums);
}