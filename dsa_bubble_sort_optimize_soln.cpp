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
              bool swapped=false;                         
              for(int j=0;j<n-i;j++){
                       if(arr[j]>arr[j+1]){
                            swap(arr[j],arr[j+1]);
                            swapped=true;          //if swapping will occur it will return true
                       }                           
              }if(swapped==false){                 //if not occur then it will return false 
                break;                              //array is already sorted so it will return the arr.
              }
    }
}
void printarr(int arr[],int n){
          for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
          }
}
