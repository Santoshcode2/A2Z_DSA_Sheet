#include<iostream>
using namespace std;
int binsearch(int arr[],int n);
bool possiblesol(int arr[],int n,int m,int mid);

int main(){
    int arr[]={10,20,30,40};int mid;
    possiblesol(arr,4,2,mid);
    binsearch(arr,4);

}
 int binsearch(int arr[],int n){
    int low=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int high=sum;int m=2;
    int ans=-1;
    while(low<=high){
        int  mid=(low+high)/2;
         if(possiblesol(arr,n,m,mid)){
                  ans=mid;
                  high=mid-1;
         }
         else{
            low=mid+1;
         }
    }
}bool possiblesol(int arr[],int n,int m,int mid){
    int studentCount= 1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum + arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentCount++;
            if(studentCount>m || arr[i]>mid){
                return false;
            }
            pagesum=arr[i];
        }
    }
    return true;

}
