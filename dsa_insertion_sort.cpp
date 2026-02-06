#include<iostream>
using namespace std;
void getsort(int arr[],int n);
void printarr(int arr[],int n);

int main(){
     int arr[]={10,1,7,4,8,2,11};
     getsort(arr,7);
     printarr(arr,7);
     return 0;
}
void getsort(int arr[],int n){
            for(int i=1;i<n;i++){
                   int temp=arr[i];               
                //    int j=i-1;
                   for(int j=i-1;j>=0;j--){
                            if(arr[j]>temp){
                                 arr[j+1]=arr[j];  
                            }
                            else{
                                  break;
                            }
                   }
                   arr[j+1]=temp;
            }
}void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}