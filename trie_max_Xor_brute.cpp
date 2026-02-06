#include<bits/stdc++.h>
using namespace std;

int maxXor(vector<int>arr1,int n ,vector<int>arr2,int m){
    int maxi = INT_MIN;
     int xorKar = 0;
       for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
                 xorKar = arr1[i] ^ arr2[j];
                 maxi = max(maxi , xorKar);
                 xorKar = 0;
           }
       }
       return maxi;

}
int main(){
    vector<int>arr1(2);
    vector<int>arr2(3);
    cout<<"arr1 ka elements enter kar:  "<<endl;
    for(int i=0;i<2;i++){
        cin>>arr1[i];
    }cout<<"arr2 ka elements enter kar:  "<<endl;
     for(int i=0;i<3;i++){
        cin>>arr2[i];
    }
    cout<<"max Xor ki value :  "<<maxXor(arr1,2,arr2,3);
    return 0;

}