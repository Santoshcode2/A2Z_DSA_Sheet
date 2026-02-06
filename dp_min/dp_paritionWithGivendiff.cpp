#include<bits/stdc++.h>
using namespace std;

int mod = (int)(1e9 + 7);
int f(int ind , int sum,vector<int>&arr,vector<vector<int>>&dp){//dp
      //base case
    if(ind==0){
          if(sum == 0 && arr[0] == 0) return 2;
          if(sum == 0  || sum == arr[0]) return 1;
          return 0;
    }
    //explore all the posibilities of the index
    if(dp[ind][sum]!=-1) return dp[ind][sum];
    int  notTake =f(ind-1,sum,arr,dp); //dp
    int take = 0;
    if(sum>=arr[ind]) {
        take = f(ind-1,sum-arr[ind],arr,dp); //dp
    }
    return dp[ind][sum] = (take | notTake) % mod ;

}

     int  findways(vector<int>&arr,int tar){
           int n = arr.size();
           vector<vector<int>>dp(n,vector<int>(tar+1,-1));
           return f(n-1,tar,arr,dp);

    //       //Tabulation
    //         vector<vector<int>>dp(n,vector<int>(tar+1,0));
    //         if(arr[0]==0) dp[0][0] = 2;
    //         else dp[0][0] =1;

    //         if(arr[0]!=0 && arr[0]<=tar) dp[0][arr[0]] = true;
    //         for(int ind =1;ind<n;ind++){
    //         for(int target=1;target<=tar;target++){
    //             int notTake =dp[ind-1][target]; //dp
    //             int  take = 0;
    //             if(target>=arr[ind]) {
    //                 take = dp[ind-1][target - arr[ind]]; //dp
    //             }
    //              dp[ind][target] =  (take | notTake)%mod ;
    //      }
    // }   return dp[n-1][tar];
     }


int countPartitions(int n ,int d, vector<int>&arr){
     int totSum=0;
     for(int i =0;i<n;i++){
        totSum += arr[i];
     }
     if(totSum-d <0 || (totSum-d)%2) return false;
     return findways(arr,(totSum-d)/2);
}