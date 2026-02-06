#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int i ,int j, string &str){
    while(i<=j){
         if(str[i]!=str[j]) return false;
         else {
            i++;
            j--;
         }

    } return  true;
}

int f(int i , int n , string &str){ //dp
        if(i==n) return 0;
        //string temp=""; -- [i...j]
        /*    if(dp[i]!=-1) return dp[i];    */
        int minCost = INT_MAX;
        for(int j=i;j<n;j++){
             if(isPalindrome(i,j,str)){   
                  int cost = 1 + f(j+1,n,str);   //dp
                   minCost = min(minCost,cost);
             }
        }
        return minCost;
        //return dp[i] = minCost;

}

int palindromePartitioning(string str){
     int n = str.size();
     return f(0,n,str) - 1;
     //vector<int>dp(n,-1);
    // return f(0,n,str,dp) - 1;
}
int main(){
    string str;
    cout<<"enter string: ";
    cout<<palindromePartitioning(str);
    return 0;
}

// //Tabulation Code
// int palindromePartitioning(string str){
//      int n = str.size();
//      vector<int>dp(n+1,0);
//      dp[n] = 0;
//      for(int i=n-1;i>=0;i--){
//         int minCost = INT_MAX;
//         for(int j=i;j<n;j++){
//              if(isPalindrome(i,j,str)){   
//                   int cost = 1 + dp[j+1];   //dp
//                    minCost = min(minCost,cost);
//              }
//         }
//          dp[i] = minCost;
//      }
//     return dp[0] - 1;
// }
