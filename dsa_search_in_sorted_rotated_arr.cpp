#include<iostream>
using namespace std;
int getpivot(int arr[],int n);
bool binsearch(int arr[],int n);
int main(){
          int k=2;
          int arr[]={7,9,1,2,3};
          int pivot=getpivot(arr,5);
    if (k>=arr[pivot] && k<=arr[4]){
        cout<<binsearch(arr,pivot,n-1,k); //binary search on I line
    }else{
        cout<<binsearch(arr,0,pivot-1,k);  //binary search on II line
    }
          }
int getpivot(int arr[],int n){
       int low=0;
       int high=n-1;
       while(low<high){
           int mid=(low+high)/2;
           if(arr[mid]>=arr[0]){
            low=mid+1;
           }
           else{
              high=mid;
           }
       }cout<<"pivot element is "<<arr[low]<<" have index "<<low; 
}
bool binsearch(int arr[],int s,int e,int k){
         
         int low=s,high=e;
         while(low<=high){
              int  mid=(low+high)/2;
               if(arr[mid]==k){
                 cout<<"element "<<arr[mid]<<" found at index "<<mid;
                  break;                                                         //here break is imp.
               }else if(k>arr[mid]){
                    low=mid+1;
               }else{
                    high=mid-1;
               }if(low>high){
                    cout<<"element "<<k<<" not found! ";
               }
          }
}
