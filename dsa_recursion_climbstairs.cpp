#include<iostream>
using namespace std;
int nstairs(int n);

int main(){
     int n;
     cin>>n;
     nstairs()
}
//#include <bits/stdc++.h> 
int countDistinctWays(int nStairs) {
        //base case
        if(nStairs<0){
            return 0;
        }if(nStairs==0){
            return 1;
        }
        //recursive call
        int ans=countDistinctWays(nStairs-1)+countDistinctWays(nStairs-2);
        
        return ans;
}