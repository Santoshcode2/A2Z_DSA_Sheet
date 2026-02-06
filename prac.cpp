#include<iostream>
using namespace std;
bool getprime(int n);
int main(){
    int n;
    cin>>n;
    getprime(n);


    return 0;
}
bool getprime(int n){
if(n==0 || n==1){
        cout<<"not prime"<<endl; 
    }
    for(int i=2;i<n;i++){
        if(n%i==0){
        
        }
    }return true;
}