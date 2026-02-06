#include<iostream>
using namespace std;
void calculator(int n1,int n2);
int main(){
    int n1,n2;
    cout<<"enter two numbers: ";
    cin>>n1>>n2;
    calculator(n1,n2);
}void calculator(int n1,int n2){
    char opt;
    int result;
    cout<<"enter the choice(+,-,*,/)";
    cin>>opt;
    if(opt=='+'){
           result=n1+n2;
           cout<<"addition of"<<n1<<"and"<<n2<<result;
    }if(opt=='-'){
           result=n1-n2;
           cout<<"substraction of"<<n1<<"and"<<n2<<result;
    }if(opt=='*'){
           result=n1*n2;
           cout<<"multiplication of"<<n1<<"and"<<n2<<result;
    }if(opt=='/'){
           result=n1/n2;
           cout<<"division of"<<n1<<"and"<<n2<<result;
    }
}