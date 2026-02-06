#include<iostream>
using namespace std;
void dectobin(int n);
int main(){
    int n;
    cout<<"enter no: ";
    cin>>n;
    dectobin(n);


}void dectobin(int n){
    int b=0,i=1;
    while(n!=0){
        int r=n%2;
        n=n/2;
        b=b+r*i;
        i=i*10;
    }cout<<b;
}