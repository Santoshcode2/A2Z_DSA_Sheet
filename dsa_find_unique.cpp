#include<iostream>
using namespace std;
int main(){
    int n,i,c=0;
    cout<<"enter size of array \n";
    cin>>n;
    int arr[n];
    cout<<"elements of array\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];                                    
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    cout<<"unique element is: "<<ans;
}