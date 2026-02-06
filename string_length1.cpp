#include<iostream>
using namespace std;
int main(){
    char str[20];
    cout<<"enter string:  ";
    cin>>str;
    int count=0;
    for(int i=0;str[i]!=0;i++){
           count++;
    }cout<<"size of string: "<<count;
    return 0;
}