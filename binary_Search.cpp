
#include<bits/stdc++.h>
using namespace std;

bool binSearch(vector<int>&arr , int target){
     int s=0,e=arr.size()-1;
     while(s<=e){
        int mid = (s+e)/2;
        if(arr[mid]==target) return true;
        else if(arr[mid]<target){
            s=mid+1;
        } 
        else{
            e=mid-1;
        }
     }
}

int main(){
    vector<int>arr= {12,11,9,8,14,19};
    int n; cin >>n;
    cout<<"enter the arr elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target =12;
    cout<< binSearch(arr, target);
    return 0;
}