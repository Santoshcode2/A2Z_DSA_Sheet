#include<bits/stdc++.h>
using namespace std;

int maxElement(vector<int>& nums){
    int maxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
          maxi=max(maxi,nums[i]);
    }return maxi;
}
int SumElement(vector<int> nums,int threshold,int mid){
           int sum=0;
           for(int i=0;i<nums.size();i++){
                  sum+=ceil((double)nums[i]/(double)mid);
           }return sum; 
}

int SmallestThreshold(vector<int>nums, int threshold){
        
        int s=1; int end=maxElement(nums);int ans=INT_MAX;
        while(s<=end){
            int mid=(s+end)/2;
            int sum=SumElement(nums,threshold,mid);
            if(sum>threshold){
                  s=mid+1;
            }else{
                 ans=min(ans,mid);
                end=mid-1;
            }
        }return ans;
}

int main(){
    int n = 4;
    vector<int>arr(n);

    cout<<"enter the elements of arr:  ";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<SmallestThreshold(arr,6);

    return 0;
}