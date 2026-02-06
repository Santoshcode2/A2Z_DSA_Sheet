#include<iostream>
using namespace std;
void parr(int *arr,int n);
int main(){
    int arr[]={1,2,3,5,7};
    cout<<"{1,2,3,5,7}";
    parr(arr,5);
}
void parr(int *arr,int n){
    for(int i=n-1;i>=0;i--){
        cout<<"\t"<<arr[i];
    }
}