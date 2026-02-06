#include<iostream>
using namespace std;
void firstocc(int arr[],int n,int element);
void lastocc(int arr[],int n,int element);
int main(){
    int arr[]={1,3,3,5,6,6,7};
    int element;
    cin>>element;
    firstocc(arr,7,element);
    lastocc(arr,7,element);
}
void firstocc(int arr[],int n,int element){
    int low=0,ans;
    int high=n-1;
     while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==element){
               ans=mid;
               high=mid-1;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }cout<<"left most element "<<element<<" found at index "<<ans<<endl;;
}void lastocc(int arr[],int n,int element){
    int low=0,ans;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==element){
               ans=mid;
               low=mid+1;
        }
        else if(arr[mid]<element){
            low=mid+1;
        }else{
            high=mid-1;
        }
    }
    cout<<"right most element "<<element<<" found at index "<<ans<<endl;
}