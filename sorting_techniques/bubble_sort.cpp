#include<bits/stdc++.h>
using namespace std;

void getsort(vector<int>&arr,int n){
    int cntswap=0;
   for(int i=n-1;i>=0;i--){
          for(int j=0;j<=i-1;j++){
               if(arr[j]>arr[j+1]){
                     swap(arr[j],arr[j+1]);
                     cntswap=1;
               }
          }
          if(cntswap==0) break; 
   }
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    getsort(arr,n);
    cout<<"your output: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//T.C=O(N^2) -->worst & average case 
//T.C =O(N) -->BEST CASE  i.e when array is already sorted given 
