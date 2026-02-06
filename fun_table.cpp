#include<iostream>
using namespace std;
void printtable(int n);
int main(){
    int n;
    cout<<"enter no: ";
    cin>>n;
    printtable(n);
}
void printtable(int n){
    for(int i=1;i<=10;i++){
          cout<<n*i;
          cout<<endl;
    }
}