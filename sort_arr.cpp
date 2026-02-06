#include<bits/stdc++.h>
using namespace std;

void sort(vector<int>&arr,int n);
void sort(vector<int>&arr,int n){
     for(int i=0;i<n;i++){
        int minIndex =i;
        for(int j =i+1;j<n;j++){
           if(arr[j]<arr[minIndex]){
              minIndex = j;
           } 
        }
        swap(arr[i],arr[minIndex]); cout<<arr[i]<<" "<<arr[minIndex]<<endl;
     }
}

int main(){
     vector<int>arr(5);
     cout<<"enter the elements  of array"<<endl;
     for(int i=0;i<5;i++){
        cin>>arr[i];            // 3  34 12 5 2
     }
     cout<<"sorted array: "<<endl; 
     sort(arr,5);
     for(int i =0;i<5 ;i++){
        cout<<arr[i]<<" ";
     }
     
    return 0;
}    // i  j 
    // 3  34 12 5 2z
    // 2 | 34 12 5 3
    // 2  3 | 12 5 4
    //2   3   4 | 5  12
    // 2  3   4  5  | 12  // i have reach the end so i will stop sir