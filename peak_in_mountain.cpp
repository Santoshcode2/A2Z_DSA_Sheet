#include<iostream>
using namespace std;
void getpivot(int arr[],int n);
int main(){
    int arr[]={3,5,9,10,15,1,2,0};
    getpivot(arr,8);
    return 0;
}
void getpivot(int arr[],int n){
        int low=0;
        int high=n-1;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid-1]<arr[mid] && arr[mid]>arr[mid+1]){
                  cout<<"pivot element "<<arr[mid]<<" have index "<<mid;     
        }
            if(arr[mid]>arr[mid-1]){
                 low=mid+1;
            }else{
                high=mid;
            }
        }cout<<"pivot element "<<arr[low]<<" have index "<<low;     
}