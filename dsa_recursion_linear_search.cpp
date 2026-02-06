#include<iostream>
using namespace std;
bool linearSearch(int arr[],int n,int key);
void printarr(int arr[],int n);

int main(){
     int arr[]={3,5,1,2,6};
     int size=5;
     int key=6;
     int ans=linearSearch(arr,size,key);
     if(ans){
        cout<<"present "<<endl;
     }
    else{
        cout<<"absent "<<endl;
     }
    return 0;
}
bool linearSearch(int arr[],int n,int key){
      printarr(arr,n);
      //base case
      if(n==0){
         return false;
      }
      
      if(arr[0]==key){
        return true;
      }else{
        int remain_part=linearSearch(arr+1,n-1,key);
        return remain_part;
      }
}

void printarr(int arr[],int n){
    cout<<"size of arr  "<<n<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}