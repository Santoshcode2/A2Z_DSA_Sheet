#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[],int l ,int r , int k){
  
    //first k elements ka maxheap banana hai
     priority_queue<int>pq; //t.c=O(k)
     //step1
     for(int i=0;i<k;i++){
         pq.push(arr[i]);
     }

     //step2
     for(int i=k;i<=r;i++){ //t.c=O(r-(k))
        if(arr[i]<pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
     }
     return pq.top();

}