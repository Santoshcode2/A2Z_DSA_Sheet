#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin>> m >>n;
    //m<n
    int sum=0;
    for(int i=m ;i<=n;i++){
         if((i%3==0)  &&  (i%5==0)){
             sum+=i;
         }
    }
    cout<< sum;
    return 0;
}