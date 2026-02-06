#include<iostream>
using namespace std;
int reverse_arr(int arr[],int n,int m);
void printarr(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    cout<<"arr[]={1,2,3,4,5,6}"<<endl;
    int m;cout<<"enter the position ";
    cin>>m;
    reverse_arr(arr,6,m);
    printarr(arr,6);
    return 0;
}
int reverse_arr(int arr[],int n,int m){
          int i=m+1,j=n-1;
          while(i<j){
               swap(arr[i],arr[j]);
               i++;
               j--;
          }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}