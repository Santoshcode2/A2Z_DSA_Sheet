class Solution{
public:
void  func(int index,int sum,vector<int>& arr,vector<int>& ans,int n){
          //base case --if i have cross the array size
          if(index==n) {
              ans.push_back(sum);
              return;
          }
          //include
          func(index+1, sum + arr[index],arr,ans,n);
   
          //exclude
          func(index+1,sum,arr,ans,n);
      
  }
    vector<int> subsetSums(vector<int> arr, int n) {
          vector<int>ans;
          func(0,0,arr,ans,n);
          sort(ans.begin(),ans.end());
          return ans;
    }
};