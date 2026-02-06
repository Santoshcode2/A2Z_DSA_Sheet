#include<iostream>
using namespace std;
void binsearch(int arr[],int n);
int main(){
         int arr[6]={1,5,9,13,34,38};
         binsearch(arr,6);
        return 0;
}
void binsearch(int arr[],int n){
          int element;
          cout<<"enter the element to search";
          cin>>element;
        int low=0,high=n-1;
         while(low<=high){
              int  mid=(low+high)/2;
               if(arr[mid]==element){
                  cout<<"element "<<element<<"found at index"<<mid;
                  break;
               }else if(element>arr[mid]){
                    low=mid+1;
               }else{
                    high=mid-1;
               }if(low>high){
                    cout<<"element"<<element<<" not found! ";
               }
          }
}