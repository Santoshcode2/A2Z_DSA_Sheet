#include<bits/stdc++.h>
using namespace std;
int LongSubsKDistChar(string s, int K){
    
    int maxLen=0;
    map<char,int>mpp;
    
    for(int i=0;i<s.size();i++){
        mpp.clear();
        for(int j=i;j<s.size();j++){
             mpp[s[i]]++;
             if(mpp.size()<=K){
                maxLen=max(maxLen,j-i+1);
             }
             else break;
        }
    }
    return maxLen;
}

//SLIDING WINDOW APPROACH
int LongSubsKDistChar(string s, int K){
     int maxLen=0, l=0, r=0;
     map<char,int>mpp;

     while(r<s.size()){
        mpp[s[r]]++;
        while(mpp.size()>=K){
            mpp[s[l]]--;
            if(mpp[s[l]]==0){
                mpp.erase(mpp[s[l]]);
                l++;
            }
        }
        if(mpp.size()<=K){
            maxLen=max(maxLen,r-l+1);
        }
        r++;
    }
    return maxLen;
    
}
