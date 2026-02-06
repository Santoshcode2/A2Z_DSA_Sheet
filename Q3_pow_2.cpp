#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,ans=1;cin>>n;
    for(int i=0;i<=30;i++){
        ans=ans*2;
        if(ans==n){
            cout<<"true";
        }if(ans>(pow(2,31))){
            cout<<"false";
        }
    }
    
}