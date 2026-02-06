#include<iostream>
using namespace std;
void swapAlternate(int arr[],int n);
void printarray(int arr[],int n);
int main(){
      int even[]={4,2,1,7,6,0,9,14};
      int odd[]={32,54,12,11,33};     
      swapAlternate(even,8);
      printarray(even,8);
      return 0;
}
void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){                //size-->size of array
         if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
