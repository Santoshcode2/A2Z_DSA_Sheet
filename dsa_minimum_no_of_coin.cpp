#include<bits/stdc++.h>
using namespace std;
int minimumCoins(vector<int>&nums , int  target);
int main(){
    vector<int>nums={1,5,2,10,20,100,50,1000,500,200};//5,10,25
    int target;
    cin>>target;
    minimumCoins(nums,target);
    return 0;
}

int minimumCoins(vector<int>&nums , int  target){
        int ans=0;
        sort(nums.begin(),nums.end());//{1,2,5,10,20,50,100,200,500,1000,2000}
        for(int i=nums.size()-1;i>=0;i--){
               while(nums[i]<=target){ //we are running while loop because we can use any note any no of times
                    target-=nums[i];
                    ans++;  //1--
                    if (target<=0) break;
               }
               

        }
        cout<<ans;
}