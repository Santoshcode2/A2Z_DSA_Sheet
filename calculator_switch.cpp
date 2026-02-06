#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter no. a: ";
    cin>>a;
     cout<<"enter no. b: ";
    cin>>b;
    char ch;
    cout<<"a_b \nenter the operation(+,-,*,/,%): ";
    cin>>ch;
    switch(ch){
        case '+':cout<<"a+b= "<<a+b;
             break;
        case '-':cout<<"a-b= "<<a-b;
             break;
        case '*':cout<<"a*b= "<<a*b;
             break;
        case '/':cout<<"a/b= "<<a/b;
             break;
        case '%':cout<<"a%b= "<<a%b;
             break;
        default: cout<<"wrong choice! ";
    }
}