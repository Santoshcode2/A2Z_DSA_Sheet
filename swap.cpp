#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4,5,6};
    for(int i=0+2*i;i<6;i++){
        for(int j=i+1;j<6;j++){
             int c=a[i];
             a[i]=a[j];
             a[j]=c;
             
        }
        for(int i=0;i<6;i++){
           cout<<a[i]<<" "; 
          }  }
}
