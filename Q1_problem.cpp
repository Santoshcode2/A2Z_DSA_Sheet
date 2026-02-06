#include<iostream>
using namespace std;
int main(){
    int n,ans=0;
    cin>>n;
    int int_max=2^31;
    int int_min=-2^31-1;
    while(n!=0){
        int r=n%10;
        n=n/10;
        if((ans>(int_max)/2)||(ans<(int_min)/2)){
            cout<<"0";
        }else
        ans=ans*10+r;
    }
    return ans;
    }
    
