#include<bits/stdc++.h>
using namespace std;
void f( vector<int>&arr1,  vector<int>&arr2){
       
      // arr1 ka largest 
      int lar = arr1[0];
      int ans1 = 0;
      for(int i =1;i<arr1.size();i++){
          if(arr1[i]>lar) {
               lar=arr1[i];
          } 
      } 
     ans1 = ans1+lar;
     ans1 = ans1*10;

     // largest elements
        sort(arr1.begin(),arr1.end());
        int n= arr1.size();
        int largest = arr1[n-1]; int secLargest =-1;
        for(int i=arr1.size()-2;i>=0;i--){
                if(arr1[i]!=largest){
                    secLargest = arr1[i];
                    break;
                }
        }
     ans1+=secLargest;


      // arr2 ka largest 
      int lar2 = arr2[0];
      int ans2 = 0;
      for(int i =1;i<arr2.size();i++){
          if(arr2[i]>lar2) {
               lar2=arr2[i];
          } 
      } 
     ans2 = ans2+lar2;
     ans2 = ans2*10;

     // arr1 ka second largest
 sort(arr2.begin(),arr2.end());
        int m= arr2.size();
        int largest2 = arr2[m-1]; int secLargest2 =-1;
        for(int i=arr2.size()-2;i>=0;i--){
                if(arr2[i]!=largest2){
                    secLargest2 = arr2[i];
                    break;
                }
        } ans2+=secLargest2;
     cout<<ans1<<endl;
     cout<<ans2<<endl;
     if(ans1>ans2) cout<< "true";
     else cout<< "false";
     
}


int main(){
    vector<int>arr1(5) , arr2(5);
    cout<<"enter arr1: ";
    for(int i =0 ;i<5;i++){
        cin>>arr1[i];
    }
    cout<<"enter arr2: ";
     for(int i =0 ;i<5;i++){
        cin>>arr2[i];
    }

     f(arr1,arr2);
     return 0;
}