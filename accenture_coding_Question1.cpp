#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<endl;
    int arr1[502];
    int arr2[502];
    int arr3[503];

     map<int,int>mpp1;
     map<int,int>mpp2;

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
        cout<<endl;
    for(int i=0;i<n-1;i++){
        cin>>arr2[i];
        mpp1[arr2[i]]++;
    }
        cout<<endl;

    for(int i=0;i<n-2;i++){
        cin>>arr3[i];
        mpp2[arr3[i]]++;
    }
        cout<<endl;
    
    for(int i=0;i<n;i++){
          if(mpp1.find(arr1[i])==mpp1.end()){
              cout<<arr1[i]<<endl;
          }
    }
    for(int i=0;i<n-1;i++){
          if(mpp2.find(arr2[i])==mpp2.end()){
              cout<<arr2[i];
          }
    }

    return 0;
}
