#include<iostream>
using namespace std;
int main(){
    int n,b=0,i=1;
    cin>>n;
    while(n!=0){
        int r=n%2;
        n=n/2;
        b=b+(r*i);
        i=i*10;
    }cout<<b;
}