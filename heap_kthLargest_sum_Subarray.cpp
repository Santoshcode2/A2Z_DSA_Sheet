#include<bits/stdc++.h>
using namespace std;

//BRUTE  FORCE 
int getKthLargest(vector<int>& arr , int K){
    int n =arr.size();
    vector<int>ans;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[i];
            ans.push_back(sum);
        }
    }
    sort(ans.begin(),ans.end());
    return ans[ans.size() - K];
}

//OPTIMIAL USING HEAP OPTIMISING SPACE COMPLEXITY
int getKthLargest(vector<int>& arr , int K){
    int n =arr.size();
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[i];
            if(pq.size()<K){
                pq.push(sum);
            }
            else{
                if(pq.top()<sum){
                    pq.pop();
                    pq.push(sum);
                }
            }
        }
    }
    return pq.top();
}