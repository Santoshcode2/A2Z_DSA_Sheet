#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n);
void printarray(int arr[],int n);
int main(){
      int arr1[]={1,2,3,4,5,6,7,8};
      int arr2[]={1,2,3,4,5,6,7,8,9};     
      swapAlternate(arr1,8);
      printarray(arr2,9);
      return 0;
}
void swapAlternate(int arr[],int n){
    for(int i=0;i<9;i=i+2){
         if(i+1<9){
            swap(arr[i],arr[i+1]);
        }
    }
}void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}