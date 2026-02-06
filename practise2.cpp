#include<iostream>
using namespace std;
int Left_binSearch(int arr[],int n,int key);
int Right_binSearch(int arr[],int n,int key);
int main(){
     int arr[]={1,2,2,3,3,3,4,5};
     int size=size of (arr)/size of (int);
     
     int key=2;
     //left part
     
      Left_binSearch(arr,8,key);
      //right part
      Right_binSearch(arr,8,key);

       return 0;

}
int Right_binSearch(int arr[],int n,int key){
    int s=0;int e=n-1;
    int ans;
   
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            ans=mid;
            s=mid+1;
        }if(arr[mid]<key){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }cout<<" element found at "<<ans<<endl;
}
int Left_binSearch(int arr[],int n,int key){
    int s=0;int e=n-1;
    int ans;
   
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            ans=mid;
            e=mid-1;
        }if(arr[mid]<key){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }cout<<" element found at "<<ans<<endl;
}