#include<iostream>
using namespace std;
int getsort(int arr[],int n);                              
int printarr(int arr[],int n);

int main(){
       int arr[]={3,6,1,0,23,12,7};
       getsort(arr,7);
       printarr(arr,7);
       return 0;
}
int getsort(int arr[],int n){
    for(int i=1;i<n;i++){
           for(int j=0;j<=n-i;j++){
                   if(arr[j]>arr[j+1]){
                         swap(arr[j],arr[j+1]);
                   }
           }
    }
}
int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
    }
}
