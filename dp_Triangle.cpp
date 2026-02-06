#include<bits/stdc++.h>
using namespace std;

int f(int i , int j,vector<vector<int>> & grid){ //dp
    //base case
    int n = grid.size();
    if(i==n-1) return grid[n-1][j]; 
//if(dp[i][j]!=-1) return dp[i][j];
    int dwn = grid[i][j] + f(i+1,j,grid);
    int diag = grid[i][j] + f(i+1,j+1,grid) ;
    /*
    int dwn = grid[i][j] + f(i+1,j,grid,dp);
    int diag = grid[i][j] + f(i+1,j+1,grid,dp) ;
    */

    return min(dwn,diag); 
    // return  dp[i][j] =  min(dwn,diag); 
}

int minPathSum(vector<vector<int>> & grid){
    //  vector<vector<int>>dp(n,vector<int>(n,-1))
     return f(0,0,grid);//dp

    /*
          //  vector<vector<int>>dp(n,vector<int>(m,0))
            for(int j=0;j<n;j++) dp[n-1][j] = grid[n-1][j];
            for(int i=n-2 ;i>=0;i--){
              for(int j=i;j>=0;j--){
                 int dwn = grid[i][j] + f(i+1,j,grid,dp);
                 int diag = grid[i][j] + f(i+1,j+1,grid,dp) ;
                dp[i][j] =  min(dwn,diag); 
                    }
          }
          return dp[0][0];

    */



}