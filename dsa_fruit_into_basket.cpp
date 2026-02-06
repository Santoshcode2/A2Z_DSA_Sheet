#include<bits/stdc++.h>
using namespace std;
//brute force--->  T.C=O(N^2)   &    S.C=O(3)
int fruitIntobasket(vector<int>&nums , int k){
      int maxLen=0;
      for(int i=0;i<nums.size();i++){
            set<int>st;
            for(int j=i;j<nums.size();j++){
                st.insert(nums[j]);
                if(st.size()<=2){
                    maxLen=max(maxLen,j-i+1);
                }
                else break;
             }
       }
}
//optimal Approach-->T.C=O(2N)  &  S.C=O(3) i.e constant space 
int fruitIntobasket_Optimal(vector<int>&nums , int k){
            int l=0,r=0 , maxLen=0;
            map<int,int>mpp;
            while(r < nums.size()){
                  mpp[nums[r]]++;
                  if(mpp.size()>k){
                        while(mpp.size()>k){
                              mpp[nums[l]]--;
                              if(mpp[nums[l]]==0){
                                    mpp.erase(nums[l]);
                              }
                              l++;
                        }
                  }
                  if(mpp.size()<=k){
                        maxLen=max(maxLen,r-l+1);
                  }
                  r++;
            }
            return maxLen;
}

//MOST OPTIMAL APPROACH --> T.C=O(N) & S.C=0(3)
int fruitIntobasket_Most_Optimal(vector<int>&nums , int k){
            int l=0,r=0 , maxLen=0;
            map<int,int>mpp;
            while(r < nums.size()){
                  mpp[nums[r]]++;
                  if(mpp.size()>k){
                        if(mpp.size()>k){
                              mpp[nums[l]]--;
                              if(mpp[nums[l]]==0){
                                    mpp.erase(nums[l]);
                              }
                              l++;
                        }
                  }
                  if(mpp.size()<=k){
                        maxLen=max(maxLen,r-l+1);
                  }
                  r++;
            }
            return maxLen;
}
