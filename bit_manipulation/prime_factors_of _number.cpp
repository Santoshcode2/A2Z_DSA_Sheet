#include<bits/stdc++.h>
using namespace std;


// given a number check whether it is prime number or not 
string f(int num){
    int cnt=0;
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cnt++;
        }
    }
    if(cnt==2) return "true";
    else return "false";
}
int main(){
    cout<<"bhai output: ";
    cout<<f(13);
    return 0;
}
