#include<iostream>
using namespace std;
void getbubble(int arr[],int n);
void printarr(int arr[],int n);

int main(){
    int arr[]={6,2,4,0,10,1,14};
    getbubble(arr,7);
    printarr(arr,7);
    return 0;
}
void getbubble(int arr[],int n){
    for(int i=1;i<n;i++){
              //rounds from 1 to n-1
              for(int j=0;j<n-i;j++){
                       if(arr[j]>arr[j+1]){
                            swap(arr[j],arr[j+1]);
                       }
              }
    }
}
void printarr(int arr[],int n){
          for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
          }
}
