#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
         sort(arr,arr+n);     // O(nlogn)
         sort(dep,dep+n);     //O(nlogn)
         int i=0,j=0;
         int cnt=0, maxCnt=0;
         while(i<n){               //O(2N)
             if(arr[i]<=dep[j]){
                 cnt++;
                 i++;
             }else{
                 cnt--;
                 j++;
             }
             maxCnt=max(maxCnt,cnt);
         }
         return maxCnt;
    
    }
};
//T.C=O(2nlogn + 2N) && S.C=O(1)