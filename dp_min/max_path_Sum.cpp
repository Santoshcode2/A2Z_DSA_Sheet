#include<bits/stdc++.h>
using namespace std;
int main(){

    return 0;
}
int f(int i , int j,vector<vector<int>>arr){//dp
    int n= arr.size();
    int m = arr[0].size();
    //base case || out of bound cases
    if(j<0 || j>=m) return -1e9;
    if(i==0) return arr[0][j];
    // if(dp[i][j]!=-1) return dp[i][j];

    //explore all the paths
    int up = arr[i][j] + f(i-1,j,arr);
    int ldg = arr[i][j] + f(i-1,j-1,arr);
    int rdg = arr[i][j] + f(i-1,j+1,arr);

    return max(up,ldg,rdg);
    // return dp[i][j] =  max(up,ldg,rdg);


    /*

    */


}