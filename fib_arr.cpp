#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no";
    cin>>n;
    int fib[n];
    fib[0]=0;
    fib[1]=1;
    cout<<fib[0]<<"\t"<<fib[1];
    for(int i=2;i<n;i++){
          fib[i]=fib[i-1]+fib[i-2];
          cout<<"\t"<<fib[i];
    }return 0;
}