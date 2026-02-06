#include<iostream>
using namespace std;
void getpivot(int arr[],int n);

int main(){
       int arr[]={7,9,1,2,3};                      //space complexity = O(1)
       getpivot(arr,5);
       return 0;
}
void getpivot(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<high){                               //time complexity= O(n)
        int mid=(low+high)/2;
        if(arr[mid]>=arr[0]){
            low=mid+1;
        } else{
            high=mid;
        }
    } cout<<"pivot element "<<arr[high]<<" have index "<<high;
}
