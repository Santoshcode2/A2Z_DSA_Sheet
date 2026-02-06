#include<iostream>
using namespace std;
int fib(int n);

int main(){
    int n;
    cin>>n;
    fib(n);
}
int fib(int n){
    //base condition
    if(n==0)
        return 0;
    if(n==1){
    return 1;
    }
    int ans=fib(n-1)+fib(n-2);
    cout<<ans;
}