// #include<iostream>
using namespace std;
# include <bits/stdc++.h>

bool binsearch(int arr[],int n,int key);

int main(){
    int arr[]={1,3,5,7,9,123,345,567};
    binsearch(arr,8,345);
    return 0;

}
bool binsearch(int arr[],int n,int key){
    int low=0;
    int high=n-1;
    while(low<=high){
            int mid=(low+high)/2;
            if (arr[mid]==key){
                cout<<"element "<<key<<" found at index "<<mid;
                break;
            }else if(arr[mid]>key){
                high=mid-1;
            }else{
                low=mid+1;
            }
    }
}