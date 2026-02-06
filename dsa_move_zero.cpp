#include<iostream>
using namespace std;

void getzero(int arr[],int n);
void printarr(int arr[],int n);

int main(){
    int arr[]={1,0,0,3,12,0};
    getzero(arr,6);
    printarr(arr,6);
    return 0;
}
void getzero(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
            if(arr[j]!=0){
              swap(arr[j],arr[i]);
              i++;
            }
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";
    }
}