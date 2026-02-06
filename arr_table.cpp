#include<iostream>
using namespace std;
int main(){
    int table[20][20];
    int n;
    cout<<"enter no: ";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=1;k<=10;k++){
               table[i][j]=(j+1)*k;
               cout<<table[i][j]<<" ";
        }cout<<"\n";
    }break;
    }return 0;
}