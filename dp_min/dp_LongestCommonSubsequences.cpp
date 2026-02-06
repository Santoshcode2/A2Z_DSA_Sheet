#include<bits/stdc++.h>
using namespace std;

int f(int i ,int j ,string & s,string & t){//vector<vector<int>> &dp
    if(i<0 || j<0) return 0;
//if(dp[i][j]!=-1) return dp[i][j];
    if(s[i]==t[i]) return 1 + f(i-1,j-1,s,t);//dp

    return max(f(i-1,j,s,t),f(i,j-1,s,t)); 
}

int lcs(string s , string t){

    int n = s.size();
    int m = t.size();
    // vector<vector<int>> dp(n,vector<int>(m,-1));
    return f(n-1,m-1,s,t);//dp
}


//shift index by 1 place
int f(int i ,int j ,string & s,string & t){//vector<vector<int>> &dp
    if(i==0 || j==0) return 0;
//if(dp[i][j]!=-1) return dp[i][j];
    if(s[i-1]==t[j-1]) return 1 + f(i-1,j-1,s,t);//dp

    return max(f(i-1,j,s,t),f(i,j-1,s,t)); 
}

int lcs(string s , string t){

    int n = s.size();
    int m = t.size();
    // vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    return f(n,m,s,t);//dp
}
//tabulation
int lcs(string s , string t){

    int n = s.size();
    int m = t.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    for(int j=0;j<=m;j++) dp[0][j]=0;
    for(int i=0;i<=n;i++) dp[i][0]=0;    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(s[i-1]==t[j-1]) dp[i][j] = 1 + dp[i-1][j-1];//dp

            else  dp[i][j] = max(dp[i-1][j],dp[i][j-1]); 
        }
    }
    return dp[n][m];
}


