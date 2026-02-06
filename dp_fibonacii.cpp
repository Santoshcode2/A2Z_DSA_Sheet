#include<bits/stdc++.h>
using namespace std;

int f(int n ,vector<int>& dp){
    if(n<=1) return n;
    if(dp[n]!=-1) return dp[n];  //step-1
    return dp[n] = f(n-1,dp)+f(n-2,dp); // step2
}
// int main(){
//     int n;
//     cin>>n;
//     vector<int>dp(n+1,-1); //step3
//     cout<<f(n,dp);
//     return 0;
// }
// T.C=O(N)  &&  S.C = O(N) + O(N)   {Recursive Stack Space  + Array}

//optimised solution
int main(){
     int n;
     cin>>n;
     int x=0, y=1;
    
     int z;
     for(int i=2;i<=n;i++){
          z=x+y; 
         x=y;
         y=z;
     }
     cout<<z;
}