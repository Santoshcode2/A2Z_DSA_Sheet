#include<bits/stdc++.h>
using namespace std;
int func(int arr[],int n);

int func(int arr[],int n){

    if(n<=3) return 0;

    vector<int>odd;
    vector<int>even;
    
    for(int i=0;i<n;i++){
          if(i%2==0 ){
            //even index
            even.push_back(arr[i]);
          }else{
            odd.push_back(arr[i]);
          }
    }
    sort(even.rbegin(),even.rend()); //desc
    sort(odd.begin(),odd.end());    //asce
    int m=even.size();
    return  even[1]+ odd[1];


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
    cout<<func(arr,n);
    return 0;
}