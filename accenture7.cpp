#include<bits/stdc++.h>
using namespace std;
int sqrtNum(int no);
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
           cin>>arr[i]; 
           sqrtNum(arr[i]);         
    }
    //finding the square of a number

}

int sqrtNum(int no){
        //  arr[i]  
    int s=0, end= no;
    while(s<=end){
        int mid = (s + end)/2;
        if((mid*mid)==no){
            cout<< mid;
        }
        else if((mid*mid)>no){
            end=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}