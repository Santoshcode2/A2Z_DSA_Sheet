#include<iostream>
using namespace std;
//int main(){
  //  int age=21;
    //int *ptr=&age;//store the address of var. age
    //int _age=*ptr;//value at the ptr var.
    //cout<<ptr<<"\n"<<_age<<"\n"<<&ptr;
//}
int main(){
    int i=5;
    int *ptr=&i;
    int **pptr=&ptr;
    cout<<*ptr<<"\n"<<**pptr;
 }