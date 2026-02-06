#include<iostream>
using namespace std;
int main(){
    int n,rev=0,c=0;
    cout<<"enter ph no: ";
    cin>>n;
    while(n!=0){
        int r=n%10;
        cout<<r<<"  ";
        rev=rev*10+r;
        n=n/10;
        c++;
    }
    cout<<"reversev no:  "<<rev<<endl;
}