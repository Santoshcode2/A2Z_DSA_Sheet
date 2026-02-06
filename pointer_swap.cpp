#include<iostream>
using namespace std;
void swap(int *n1,int *n2);
int main(){
      int x=5,y=6;
      swap(&x,&y);
      cout<<"swap nos"<<x<<"\n"<<y;
}void swap(int *n1,int *n2){
       int temp;
       temp=*n1;
       *n1=*n2;
       *n2=temp;
       cout<<"swap nos"<<*n1<<"\n"<<*n2;
       cout<<endl;
}