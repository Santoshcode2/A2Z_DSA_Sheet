#include<iostream>
using namespace std;
int main(){
    int aadhar[5];
    int *ptr=&aadhar[0];
    for(int i=0;i<=5;i++){
         cout<<"enter index: "<<i;
         cin>>(ptr+i);
    }for(int i=0;i<=5;i++){
        cout<<"index"<<i<<aadhar[i];
    }return 0;
}