#include<iostream>
using namespace std;
bool firstocc(int arr[],int n,int key);
bool lastocc(int arr[],int n,int key);

int main(){
    int arr[9]={1,2,3,3,3,3,4,4,5};
    firstocc(arr,9,4);
    lastocc(arr,9,4);
    return 0;
}
bool firstocc(int arr[],int n,int key){
    int low=0;
    int high=n-1;int ans=0;
    while(low<=high){
            int mid=(low+high)/2;
            if (arr[mid]==key){
                   high=mid-1;
                   ans=mid;
                
            }else if(arr[mid]>key){
                high=mid-1;
            }else{
                low=mid+1;
            }
    }cout<<" first occ "<<key<<" at index "<<ans<<endl;
}bool lastocc(int arr[],int n,int key){
    int low=0;
    int high=n-1;int ans=0;
    while(low<=high){
            int mid=(low+high)/2;
            if (arr[mid]==key){
                low=mid+1;
                ans=mid;
                
            }else if(arr[mid]>key){
                high=mid-1;
            }else{
                low=mid+1;
            }
    }cout<<" last occ "<<key<<" at index "<<ans;
}