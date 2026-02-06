#include<iostream>
using namespace std;
//function declaration
void prime(int n);
int main(){
      int n;
      cout<<"enter no";
      cin>>n;
      //function call 
      prime(n);
}//function defination
void prime(int n){
    int c=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
           c=c+1;
        }
    }if(c==2) cout<<"prime";
     else cout<<"not";
}