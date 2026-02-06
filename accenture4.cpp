#include<bits/stdc++.h>
using namespace std;

int func(int arr[], int len,int num,int diff){
      int cnt=0;
      for(int i=0;i<len;i++){
             if(abs(arr[i]-num)<=diff) cnt++;
      }
      return (cnt>0 ? cnt :-1 );
}

int main(){
    int n;
    cin>>n;
    int arr[1000001];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int num;
    cin>>num;
    int diff;
    cin>>diff;

    cout<<func(arr,n,num,diff);

}