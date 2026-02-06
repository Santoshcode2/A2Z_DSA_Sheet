#include<bits/stdc++.h>
using namespace std;
int maxConsOnes(vector<int>nums, int k);
int maxConsOnes_most_optimal(vector<int>nums, int k);
//OPTIMAL APPROACH T.C=O(2N)  & S.C=O(1)
 
int maxConsOnes(vector<int>nums, int k){
          int l=0, r=0, n=nums.size(), maxLen=0;
          int zeros=0;
          while(r<n){
              if(nums[r]==0){
                zeros++;
              }
              while(zeros>k){
                  if(nums[l]==0)zeros--; 
                  l++;
              }
              if(zeros<=k){
                int len=r-l+1;
                maxLen=max(maxLen,len);
              }
              r++;
          }
          cout<< maxLen;
}
int main(){
    vector<int>nums={1,1,1,0,0,0,1,1,1,1,0};
    maxConsOnes(nums,2);
    cout<<endl;
    maxConsOnes_most_optimal(nums,2);
    return 0;
    
}


//most optimal approach--T.C=O(N)  & S.C=O(1)
int maxConsOnes_most_optimal(vector<int>nums, int k){
          int l=0, r=0, n=nums.size(), maxLen=0;
          int zeros=0;
          while(r<n){
              if(nums[r]==0){
                zeros++;
              }
              if(zeros>k){
                  if(nums[l]==0)zeros--; 
                  l++;
              }
              if(zeros<=k){
                int len=r-l+1;
                maxLen=max(maxLen,len);
              }
              r++;
          }
          cout<< maxLen;
}

//brute force--T.C=O(N*2)  && S.C=O(1)
int maxConsOnes_most_optimal(vector<int>nums, int k){
        int maxLen=0;
        for(int i=0;i<nums.size();i++){
          int zeros=0;
          for(int j=i;j<nums.size();j++){
                    if(nums[j]==0) zeros++;
                    if(nums[j]<=k){
                        int len=j-i+1;
                        maxLen=max(maxLen,len);
                    }else break;
          }
       }return maxLen;
}