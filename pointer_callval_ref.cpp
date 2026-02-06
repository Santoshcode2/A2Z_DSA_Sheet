#include<iostream>
using namespace std;
void square(int n);
void square1(int *n2);
int main(){
    int n1;
    cout<<"enter no";
    cin>>n1;
    square(n1);
    square1(&n1);
    cout<<n1;
}void square(int n){//call by value
    n=n*n;
    cout<<n<<"\n";
}//call by reference
void square1(int *n2){
       *n2=(*n2)*(*n2);
       cout<<*n2<<"\n";
}