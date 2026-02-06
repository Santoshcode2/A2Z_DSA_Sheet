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
    }
    cout<<"binary conversion of "<<n<<"is "<<b;
    int m=b;
   int mask=0;
    if(m==0){
        return 1;
    }
    while(m!=0){
        mask=(mask<<1)|1;
        m=m>>1;
    }int ans=(~n)&mask;
    cout<<"\ncomplement of"<<n<<"is"<<mask;
}