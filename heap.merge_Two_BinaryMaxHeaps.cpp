#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:

    void heapify(vector<int>&arr,int n,int i){
        int largest = i;
        int  leftChild = 2*i+1;   //zero based indexing
        int rightchild = 2*i+2;
        if(leftChild<=n && arr[largest]<arr[leftChild]){
            largest = leftChild;//then update your largest      
        }
        if(rightchild<=n && arr[largest]<arr[rightchild]){
            largest = rightchild;
        }
        //check whether your largest has been updated
        if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
        }
    }

    vector<int> mergeHeaps(vector<int>&a, vector<int> &b, int n , int m){
            //step1: merge two arrays
            vector<int>arr(n+m);
            for(int i=0;i<n;i++){
                arr.push_back(a[i]);
            }
            for(int i=n;i<m;i++){
                arr.push_back(b[i]);
            }
            //arr contains both  a & b
            //step2: create the heap use heapify algo
            int size = arr.size(); 
            for(int i=(size/2)-1;i>=0;i--){  //for zero based indexing 
                heapify(arr,size,i);
            }

            return arr;


    }

};