#include<iostream>
using namespace std;
void swapAlter(int arr[],int n);
void printarr(int arr[],int n);

int main(){
    int arr[]={1,3,6,4,8,0,9};
    swapAlter(arr,7);
    printarr(arr,7);
    return 0;
}
void swapAlter(int arr[],int n){
    for(int i=0;i<n;i+=2){
         if(i+1<n){
              swap(arr[i],arr[i+1]);
              
         }
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    } 
}