
#include<bits/stdc++.h>
using namespace std;

int cntSetBits(int num){
    int cnt=0;
    while(num!=0){
        num = num&(num-1);  // every time i making the right most set bit as zero
        cnt++;
    }
    return cnt;
}

int main(){
    cout<<cntSetBits(16);
    return 0;
}