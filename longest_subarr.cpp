#include<bits/stdc++.h>
using namespace std;
class solution{
int lenOfLongSubarr(int A[],  int N, long long K) { 
             map<int,int>mpp;
             long long int sum=0;
             long long int len=0;

             for(int i=0;i<N;i++){
                   sum+=A[i];
                   if(sum==K) {
                       len= max(len,i+1); 
                   }
               
    
                   
                   int rem= sum-K;
                   if(mpp.find(rem)!=mpp.end()){
                       int len1= i-mpp[rem] ;
                       len=max(len,len1);
                   }
                   //if the sum previously exist in hash map do not reudate it
                   
                   if(mpp.find(sum)==mpp.end()){
                       mpp[sum]=i;
                    }
             }
             return len;
    } 

};
  