#include<iostream>
using namespace std;

int main(){
    int a=0;
    for(int i=0;i<4;i++){
        cin>>a;
        // a=a+i*10;
        // cout<<"your entered no is: "<<a;
        if(a==1){
            cout<<"your no is "<<a+i*10;
        }
    }
    return 0;
}