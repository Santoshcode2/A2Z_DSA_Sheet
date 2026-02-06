#include<iostream>
using namespace std;
void binsearch(int arr[],int n,int k);
int main(){
        
         int arr[6]={1,5,9,13,34,38};
         binsearch(arr,6,9);
        return 0;
}
void binsearch(int arr[],int n,int k){
         // int element;
          //cout<<"enter the element to search: ";
          //cin>>element;
          int low=0,high=n-1;
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