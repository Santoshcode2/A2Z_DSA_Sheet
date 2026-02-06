#include<iostream>
using namespace std;
void arm(int n);
int main(){
    int n;
    cout<<"enter no: ";
    cin>>n;
    arm(n);
}void arm(int n){
    int s=0;
    //always store n in any other variable 
    int n1=n;
    while(n1!=0){
        int r=n1%10;
        s=s+(r*r*r);
        n1=n1/10;
    }if(s==n){
         cout<<"armstrong";
    }else {
        cout<<"not armstrong";
    }
}