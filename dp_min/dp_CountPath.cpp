#include<bits/stdc++.h>
using namespace std;
int CountPaths(vector<vector<int>>& points);
int f(int i , int j,vector<vector<int>>& points,vector<vector<int>>&dp);
int main(){
    vector<vector<int>> points;
    cout<<CountPaths(points);
    return 0;


}
int f(int i , int j,vector<vector<int>>& points,vector<vector<int>>&dp){
     if(i==0 && j==0) return 1;
     if(i<0 || j<0)  return 0;
     if(dp[i][j]!=-1) return dp[i][j];
     int up = f(i-1,j,points,dp);
     int left = f(i,j-1,points,dp);

     return dp[i][j] = up + left;
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
//          vector<vector<int>>dp(m,vector<int>(n,0));
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(i==0 && j==0 ) return dp[0][0] = 1 ;
//                 int up = dp[i-1][j];
//                 int left = dp[i][j-1];
//                 dp[i][j] = up + left;
//             }
//         }
//         return dp[m-1][n-1];
// }