#include<bits/stdc++.h>
using namespace std;

int f(int ind , int target,vector<int>&arr){//dp
     /*
     if(ind==0){
          if(sum == 0 && num[0] == 0) return 2;
          if(sum == 0  || sum == num[0]) return 1;
          return 0;
     }
     */
     
      //base case
      if(target==0) return true;
      if(ind==0) return (arr[0]==target);

    //explore all the posibilities of the index
    //if(dp[ind][target]!=-1) return dp[ind][target];
    bool notTake =f(ind-1,target,arr); //dp
    bool take = false;
    if(target>=arr[ind]) {
        take = f(ind-1,target-arr[ind],arr); //dp
    }
    return take | notTake ;
    //return dp[ind][target] = take | notTake ;

}
bool subsetSumToK(int n,int k,vector<int>&arr){
    //vector<vector<bool>>dp(n+1 , vector<bool>target(k+1,-1));
     return f(n-1,k,arr);//dp
    /* tabulation
    //base case 
    for(int i=0;i<n;i++){
        dp[i][0] = true;
    }
    if(arr[0]<=k) dp[0][arr[0]] = true;
    for(int ind =1;ind<n;ind++){
            for(int target=1;target<=k;target++){
                bool notTake =dp[ind-1][target]; //dp
                bool take = false;
                if(target>=arr[ind]) {
                    take = dp[ind-1][target - arr[ind]]; //dp
                }
                 dp[ind][target] =  take | notTake ;
         }
    }   return dp[n-1][target];
    */

}