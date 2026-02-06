#include<iostream>
using namespace std;
int main(){
    int a=12;
    int *b=&a;
    cout<<b<<"\n";
    b++;
    cout<<b<<"\n";
    b--;
    cout<<b;
    return 0;
}