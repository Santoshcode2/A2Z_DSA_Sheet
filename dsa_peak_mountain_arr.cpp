#include<iostream>
using namespace std;
void peakarr(int arr[],int n);
int main(){
    int arr[]={7,9,3,2,1}; //3                      //space complexity is O(1)
    peakarr(arr,5);
    return 0;
}
void peakarr(int arr[],int n){
    int low=0;
    int high=n-1;
    while(low<high){                               //Time complexity-->O(logn)
        int mid=(low+high)/2;
        if(arr[mid]<arr[mid+1]){
            low=mid+1;
        }else{
            high=mid;
        }
    }cout<<"peak element is "<<arr[low]<<" have index "<<low;
}   