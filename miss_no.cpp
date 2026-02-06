#include<iostream>
using namespace std;
int main(){
    int n,i,j,arr[20];
    cin>>n;
    cout<<"enter the elements: ";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }for(i=0;i<n-1;i++){
        int a=arr[i+1]-arr[i];
        cout<<a<<" ";
        }
    }

    
