#include<bits/stdc++.h>
using namespace std;

int func1(vector<int>arr,int k){
    int n = arr.size();
    int res=0,cnt=0;
     for(int i=0;i<n;i++){
        res=0;cnt=0;
        for(int j=i;j<n;j++){
              res = res^arr[j];
              if(res==k) cnt++;
        }
     }
     return cnt;
}
//T.C=O(N^2) & S.C=O(1)
int func1(vector<int>arr,int k){
    int n = arr.size();
    vector<int,int>mpp;
    int res=0;
    int rem=0;
     for(int i=0;i<n;i++){
        res= res^arr[i];
        rem=res-k;
        if(mpp.find(rem)!=mpp.end()){
            
        }
        else mpp[arr[i]]=i;
     }
     return res;
}
