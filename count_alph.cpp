#include<iostream>
using namespace std;
void no_odd(int arr[],int n);
int main(){
    int arr[]={3,5,4,1,0,6};
    no_odd(arr,5);

}
void no_odd(int arr[],int n){
    int c=0;
    for(int i=0;i<=n;i++){
       if((arr[i])%2!=0){
            c++;
       }
   }cout<<"no of odd nos: "<<c;
}