#include<iostream>                       
using namespace std;
int getsort(int arr[],int n);
int printarr(int arr[],int n);

int main(){
    int arr[]={7,26,0,32,26,2,1};
    getsort(arr,7);
    printarr(arr,7);
    return 0;
}
int getsort(int arr[],int n){
           for(int i=0;i<n-1;i++){            //no of rounds will be 1 to n-1
                  int min_index=i;
                  for(int j=i+1;j<n;j++){
                       
                        if(arr[min_index]>arr[j]){
                              min_index=j;
                       
                        }
                   }swap(arr[min_index],arr[i]);
            } 
}
int printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}