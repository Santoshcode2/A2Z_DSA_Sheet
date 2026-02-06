#include<iostream>
using namespace std;
int main(){
    int no,r,fact=1,s=0;
    cout<<"enter the no: ";
    cin>>no;
    
        for(int i=1;i<=no;i++){
            fact=fact*i;
            s=s+fact;
            
            
        }
    cout<<s;
    if(s==no){
        cout<<"strong no";
    }else{
        cout<<"not";
    }return 0;
}
