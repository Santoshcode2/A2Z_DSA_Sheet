#include<bits/stdc++.h>
using namespace std;

class Solution{
  private:
      void   solver(vector<int>nums, vector<vector<int>> ans,vector<int>output,int ind){
              //base case
              if(ind>=nums.size()){
                ans.push_back(output);
                return;
              }
              //exclude
                solver(nums,ans,output,ind+1);
              //include
                output.push_back(nums[ind]);
                solver(nums,ans,output,ind+1);

      } 
  public:
     vector<vector<int>> subset(vector<int>nums){
        vector<vector<int>>ans;
        vector<int>output;
        int ind=0;
        solver(nums,ans,output,ind);
        return ans;
     }
     
    };
    
    int main(){
      vector<int>nums;
      int n =4;
      cout<<"enter the elements of nums: ";
      for(int i=0;i<n;i++){
          int val;
          cin>>val;
         nums.push_back(val);
      }
      Solution s;
       vector<vector<int>> result = s.subset(nums);

       cout<<"subsets:\n";
       cout<<"hello";
    
       for(const auto & subset :result){
        cout<<"{ ";
        for(int num: subset){
            cout<<num<<" ";
        }
        cout<<" }\n ";
       }
       return 0;
      
    }