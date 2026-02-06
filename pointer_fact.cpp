#include<iostream>
using namespace std;
void fact(int n);
void fact1(int *n);
int main(){
    int no;
    cout<<"enter no: ";
    cin>>no;
    fact(no);
}//call by value
void fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }cout<<fact;
}//call by reference
void fact1(int *n){
    int fact=1;
    for
}