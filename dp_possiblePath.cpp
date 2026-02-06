#include<bits/stdc++.h>
using namespace std;

int main(){

    return 0;
}
int f(int i , int j,vector<vector<int>>dp){
    //base case
    if(i==0  && j==0) return 1;
    if(i<0 || j<0 ) return 0;


    //before the function call check whether the answer is prevously stored or not | if yes ->then return it
    if(dp[i][j]!=-1) return dp[i][j];
    int up =f(i-1,j,dp) ;
    int left = f(i,j-1,dp);

    return dp[i][j] =  up + left; 
}
