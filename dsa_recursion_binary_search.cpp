#include<iostream>
using namespace std;
bool binarySearch(int arr[],int s,int e,int key);
void printarr(int arr[],int s,int e);

int main(){
    int arr[]={2,4,6,10,14,19,23,45,67,89,90,94,99,100};
    int size=14;
    int key=18;
    int ans=binarySearch(arr,0,13,key);
   // cout<<"element is "<<ans<<endl;
    if(ans){
        cout<<"element present";
    }else{
        cout<<"not present";
    }
    return 0;

}
bool binarySearch(int arr[],int s,int e,int key){
    printarr(arr,s,e);
    //base case
    //if element not found
    if(s>e){
        return false;
    }
    int mid=(s+e)/2;
    cout<<"value of arr mid is "<<arr[mid]<<endl;
    //if element is founded
    if(arr[mid]==key){
        return true;
    }if(arr[mid]<key){
       return binarySearch(arr,mid+1,e,key);
    }
    else{
       return binarySearch(arr,s,mid-1,key); 
    }
}


void printarr(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

