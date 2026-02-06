#include<bits/stdc++.h>
using namespace std;
int main(){

    int s = 0,f=1,i=1;
    while(i <= 20){

        f = f * i;
        s = s +(i / f);

        i+=1;
        cout<<s<<endl;
    }
    return 0;
}