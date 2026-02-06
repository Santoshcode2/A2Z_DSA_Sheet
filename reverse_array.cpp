#include<iostream>
using namespace std;
void reverse(int arr[],int n);
void print_arr(int arr[],int n);
int main(){
    int arr[5];
    cout<<"enter elements of array: ";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }reverse(arr,5);
    cout<<"reverse array: ";
    print_arr(arr,5);

}void reverse(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval;
    }
}
void print_arr(int arr[],int n){
        for(int i=0;i<n;i++){
            cout<<"\t"<<arr[i];
        }
}