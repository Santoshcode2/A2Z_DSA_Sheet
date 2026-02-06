#include<iostream>
using namespace std;
int main(){
    int low,mid,high,element;
    int arr[]={2,6,78,89,98,99,124,146};
    cout<<"{2,6,78,89,98,99,124,146}\n";
    cout<<"enter the element to search: ";
     cin>>element;
    int size=sizeof (arr)/sizeof (int);
    low=0;high=size-1;
     while(low<=high){
        mid=(low+high)/2;
        if (arr[mid]==element){
             cout<<"element "<<element<<" found at index: "<<mid<<endl;
             break;
        }if(arr[mid]<element){
            low=mid+1;
        }else{
            high=mid-1;
        }if(low>high){
             cout<<"element "<<element<<"not found";
             }
        
    }
    return 0;
}