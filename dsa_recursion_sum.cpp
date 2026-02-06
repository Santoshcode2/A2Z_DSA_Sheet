#include<iostream>
using namespace std;
int getsum(int arr[],int n);

int main(){
    int arr[5]={3,2,5,1,6};
    int sum=getsum(arr,5);
    cout<<"sum is  "<<getsum(arr,5);
    
    return 0;

}
int getsum(int arr[],int n){
    //base case
    if(n==1){
        return arr[0];
    }
    
   int remain_part= getsum(arr+1,n-1);
    int sum=arr[0]+remain_part;
    return sum;
}