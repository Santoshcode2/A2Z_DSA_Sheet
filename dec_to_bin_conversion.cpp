#include<iostream>
using namespace std;
int main(){
    int dec,b=0,i=1,c=0;
    cout<<"enter decimal no: ";
    cin>>dec;
    while(dec!=0){
        int r=dec%2;
        dec=dec/2;
        b=b+(r*i);
        i=i*10;
    }cout<<b;
    while(b!=0){
        int r=b%10;
        b=b/10;
        if(r==1) c++;
    }cout<<"\nno of times one occur "<<c;

}