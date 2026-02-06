#include<bits/stdc++.h>
using namespace std;

int func(int n, int m){
    int divis=0 , nondivis=0;
    for(int i=0;i<=m;i++){
        if(i%n==0){
          divis+=i;
        }
        else{
            nondivis+=i;
        }
    }
    return nondivis-divis;
}

int main(){
      int n;
      cin>>n;
      int m;
      cin>>m;
     cout<< func(n,m);
}