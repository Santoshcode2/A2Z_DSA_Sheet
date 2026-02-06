
#include<bits/stdc++.h>
using namespace std;

vector<int> LeaderInArray(vector<int>arr){
          int n = arr.size();
          vector<int>ans;
          int maxi = arr[n-1];
          ans.push_back(maxi);
          for(int i=n-2;i>=0;i--){
                if(arr[i]>maxi){
                     ans.push_back(arr[i]);
                     maxi = arr[i];
                }      
          }
          reverse(ans.begin(),ans.end());
          return ans;
}

int main(){
     vector<int> arr = {10,22,12,3,0,6};
     for(int val: LeaderInArray(arr)){
        cout<<val<<" ";
     }
    return 0;
}