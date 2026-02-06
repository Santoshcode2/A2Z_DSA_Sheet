#include<iostream>
using namespace std;
bool getcheck(int arr[],int n);
int main(){
    int arr[]={1,1,1,1,1};
    getcheck(arr,5);
    return 0;
}
bool getcheck(int arr[],int n){
    int count =0;
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            count++;
        }
    }
    if(arr[n-1]>arr[0]){
            count++;
    }
    if(count<=1) cout<<"true";
    else cout<<"false";
}