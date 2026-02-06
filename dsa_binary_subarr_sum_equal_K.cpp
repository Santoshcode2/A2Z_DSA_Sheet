#include<bits/stdc++.h>
using namespace std;
int BinarySubarr(vector<int>nums ,int target);
int BinarySubarr(vector<int>nums ,int target){
   int cnt=0;
    for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;i<nums.size();j++){
           sum+=nums[j];
           if(sum==target){
              cnt++;
              while(nums[j+1]!=1){
                   j++;
                   cnt++;
              }
           }
        }
    }cout<< cnt;
}
int main(){
      vector<int>nums={1,0,1,0,1};
      BinarySubarr(nums ,2);
      return 0;

}