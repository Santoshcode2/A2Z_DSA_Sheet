#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array \n";
    cin>>n;
    int arr[n];
    cout<<"elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];                                    
    }
    int ans=0;
    for(int i=0;i<n;i++){          //XOR of all input element array
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;                //XOR of element from 0 to N-1
    }cout<<"duplicate element "<<ans;
}