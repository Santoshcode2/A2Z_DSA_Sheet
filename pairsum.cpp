#include<iostream>
using namespace std;
void pairsum(int arr[],int n);

int main(){
       int arr[]={1,3,4,8,12,0};
       pairsum(arr,5);
       return 0;
}
void pairsum(int arr[],int n){
       int k=0;
       cout<<" enter element ";
       cin>>k;
       for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
                  if(arr[i]+arr[j]==k){
                          cout<<arr[i]<<" "<<arr[j]<<endl;
                   }
            }
        }
}