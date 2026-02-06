#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=30;i++){
        int a=pow(2,i);
        if(n==a){
            cout<<"true";
        }
    }
     return 0;
}