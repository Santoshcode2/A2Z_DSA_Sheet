#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no: ";
    cin>>n;
    cout<<"reverse no is: ";
    while(n!=0){
        int r=n%10;
        n=n/10;
        cout<<r;
    }
}