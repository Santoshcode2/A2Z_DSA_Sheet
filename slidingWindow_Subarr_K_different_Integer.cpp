#include<bits/stdc++.h>
using namespace std;

int Subarr_K_different_Integer(vector<int>arr,int K ){
    int cnt=0;
    map<int,int>mpp;

    for(int i=0;i<arr.size();i++){
        mpp.clear();
        for(int j=i;j<arr.size();j++){
            mpp[arr[j]]++; 
            if(mpp.size()==K){
                cnt++;
            }
            else if(mpp.size()>K) break;
        }
    }
    return cnt; //T.C=O(N^2) + O(logN)  &&  S.C=O(N)

}
