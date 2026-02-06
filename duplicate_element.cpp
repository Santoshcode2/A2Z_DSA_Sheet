#include<iostream>
using namespace std;
void duplicate(int arr[],int n);

int main(){
    int arr[]={1,4,5,5,2,3};
    duplicate(arr,6);
    return 0;
}
void duplicate(int arr[],int n){
       int ans=0;
       for(int i=0;i<n;i++){
            ans=ans^arr[i];
       }
       for(int i=1;i<n;i++){
             ans=ans^i;
       }
       cout<<"duplicate element "<<ans;
}