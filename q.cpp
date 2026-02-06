#include<iostream>
using namespace std;
void sortonetwo(int arr[],int n);
void printarr(int arr[],int n);
int main(){
       int arr[]={0,2,0,1,2,1,0,1};
       sortonetwo(arr,8);
       printarr(arr,8);
}void sortonetwo(int arr[],int n){
         int i=0,j=n-1;
         while(i<j){
             while(arr[i]==0){
                i++;
             }while(arr[j]==2){
                j--;
             }if(arr[i]==2 && arr[j]==0 && i<j){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
        }
    
}void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}