#include<iostream>
using namespace std;
void sortOne(int arr[],int n);
void printarray(int arr[],int n);

int main(){
    int arr[8]={0,1,1,0,0,0,1,1};
    sortOne(arr, 8);
    printarray(arr,8);
    return 0;
}
void sortOne(int arr[],int n){
    int i=0,j=n-1;
    while(i<j){
          while(arr[i]==0 && i<j){
             i++;
          }while(arr[j]==1 && i<j){
             j--;
          }if(arr[i]==1 && arr[j]==0 && i<j){                           //agar yaha pohunch gaye ho iska matlab
          swap(arr[i],arr[j]);                                //arr[i]==1 and arr[j]==0 ko ab swap karna padega
          i++;
          j--;}
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
     
