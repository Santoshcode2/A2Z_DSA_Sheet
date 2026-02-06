#include<iostream>
using namespace std;
bool is_sorted(int arr[],int n);

int main(){
    int arr[6]={2,4,6,0,11,13};
    bool ans=is_sorted(arr,6);
    if(ans){
        cout<<"arr is sorted "<<endl;
    }else{
        cout<<"array is not sorted"<<endl;
    }
    return 0;
}
bool is_sorted(int arr[],int n){
    //base case
    if(n==0 || n==1){
         return true;
    }
    if(arr[0]>arr[1]){
         return false;
    }
    else{
        bool remain_Part=is_sorted(arr+1,n-1);
        return remain_Part;
    }
}