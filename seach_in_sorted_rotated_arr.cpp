#include<iostream>
using namespace std;
bool binsearch(int arr[],int s,int e,int key);
int  getpivot(int arr[],int n);


int main(){
       
       int key;
       cout<<"enter element to search ";
       cin>>key;
       
       int arr[]={9,12,1,3,5};
       int pivot= getpivot(arr,5);
       cout<<"pivot element "<<arr[pivot]<<endl;
       
        if(arr[0]<key<arr[pivot-1]){
              cout<<binsearch(arr,0,pivot-1,key);
       }else{
           cout<<binsearch(arr,pivot,5,key);
       }
       return 0; 
}
bool binsearch(int arr[],int s,int e,int key){
        int low=s;
        int high=e;
        while(low<high){
            int mid=(low+high)/2;
            if(arr[mid]==key){
                cout<<" element_found_at_index  "<<mid;
                break;
            }else if(arr[mid]>key){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }  
}int  getpivot(int arr[],int n){
        int low=0;
        int high=n-1;
        while(low<high){
            int mid=(low+high)/2;
            if(arr[mid]>=arr[0]){
                   low=mid+1;
            }else{
                high=mid;
            }
        }return low;
}

