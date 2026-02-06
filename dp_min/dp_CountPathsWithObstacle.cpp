#include<bits/stdc++.h>
using namespace std;
int CountPaths(vector<vector<int>>& points);
int f(int i , int j,vector<vector<int>>& points,vector<vector<int>>&dp);

int main(){
    vector<vector<int>> points;
    cout<<CountPaths(points);
    return 0;


}
int mod =(int)(1e9 + 7);
int f(int i , int j,vector<vector<int>>& points,vector<vector<int>>&dp){
     if(i>=0 && j>=0 && points[i][j]==-1 ) return 0;
     if(i==0 && j==0) return 1;
     if(i<0 || j<0)  return 0;
     if(dp[i][j]!=-1) return dp[i][j];
     int up = f(i-1,j,points,dp);
     int left = f(i,j-1,points,dp);

     return dp[i][j] =(up + left) % mod;
}

int CountPaths(vector<vector<int>>& points){
         int m  = points.size();
         int n = points[0].size(); 
         vector<vector<int>>dp(m,vector<int>(n,-1));
         return f(m-1,n-1,points,dp);
}
//tabulation 

// int CountPaths(vector<vector<int>>& points){
//          int m  = points.size();
//          int n = points[0].size(); 
//          int dp[m][m]
//          for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(points[i][j]==-1) dp[i][j] = 0;
//                 else if(i==0 && j==0 ) dp[i][j] = 1 ;
//                 else {
//                       int up=0; left=0;
//                       if(i>0) up = dp[i-1][j];
//                       if(j>0) left = dp[i][j-1];
//                       dp[i][j] = (up + left) % mod;
//                  }
//             }
//         }
//         return dp[m-1][n-1];
// }