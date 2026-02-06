
class Solution {
  public:
    long long solve(vector<int>& bt) {
       sort(bt.begin(),bt.end());
       int n=bt.size();
       int strt=0, waitTm=0;
       for(int i=0;i<n;i++){
           waitTm+=strt;
           strt+=bt[i];
       }
       return (waitTm/n);
    }
};
//T.C=O(nlogn + n) && S.C=O(1) 