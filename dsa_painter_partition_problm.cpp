#include<iostream>
using namespace std;
int main(){
     
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
}