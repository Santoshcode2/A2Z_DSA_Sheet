#include<stack>
#include<vector>
#include<iostream>
using namespace std;

int main(){

}
vector<int> next_element(vector<int>&arr,int n){
          stack<int>st;
          st.push(-1);
          vector<int>ans;
        for(int i=n-1;i>=0;i--){
          int curr=arr[i];
          while(st.top()>=curr){
              st.pop();
          }//ans is stack ka top
          ans[i]=st.top();
          st.push(curr);
        }
        return ans;
}