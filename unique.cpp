#include<iostream>
using namespace std;
void unique(int arr[],int n);

int main(){
        int arr[]={1,3,7,4,3,4,1,7,9};
        unique(arr,9);
        return 0;
}
void unique(int arr[],int n){
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans^arr[i];
        }
        cout<<ans;
}