class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int xor1=0; int xor2=0;
        for(int i=0;i<n;i++){
            xor1=xor1^i;
            xor2=xor2^nums[i];
        }xor1=xor1^n;
        return xor1^ xor2;
    }
};

// //sum approach optimal soln but xor approach is better than sum approach
// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int n=nums.size();
//         long sum=n*(n+1)/2;
//         long s2=0;
//         for(int i=0;i<n;i++){
//             s2+=nums[i];
//         }return sum-s2;
//     }
// };