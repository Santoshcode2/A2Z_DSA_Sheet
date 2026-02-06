#include<iostream>
using namespace std;
void printarr(int arr[],int n);

int main(){
    int n;
    int arr[10];
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        //selection sort logic
    for(int i=0;i<n-1;i++){
        int min_index=i;                    //we are considering starting index as min.
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                  min_index=j;                 //here we are updating the value of our min_index
            }
        }
        swap(arr[min_index],arr[i]);
    }
    printarr(arr,n);
}
void printarr(int arr[],int n){
      for(int i=0;i<n;i++){
          cout<<arr[i]<<" ";
      }
}

    