#include<bits/stdc++.h>
using namespace std;
int Find_No_of_Superior_Element(int arr[] ,int n);
int Find_No_of_Superior_Element(int arr[] ,int n){
      if(n==0) return 0;
      int superior = 1;
      int largest = arr[n-1];
      for(int i=n-2;i>=0;i--){
        if(arr[i]>largest) {
            superior++;
            largest =arr[i];
        }
      }
      return superior;
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<< Find_No_of_Superior_Element(arr,n);
    return 0;
}