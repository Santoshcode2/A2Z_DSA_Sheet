#include<iostream>
using namespace std;
void swap(int n1,int n2);
int main(){
    int n1,n2;
    cout<<"enter no1: ";
    cin>>n1;
    cout<<"enter no1: ";
    cin>>n1;
    swap(n1,n2);
}
void swap(int n1,int n2){
         int temp;
         temp=n1;
         n1=n2;
         n2=temp;
        cout<<"numbers after swapping";
        // cout<<endl;
          cout<<n1;
          //cout<<endl;
          //cout<<n2;
    }
