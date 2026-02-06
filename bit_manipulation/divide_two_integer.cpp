#include<bits/stdc++.h>
using namespace std;

void divisionOfTwoNum(int divisor,int dividend);

//brute force approach -->T.C=O(DIVIDEND)
int divisionOfTwoNum(int divisor,int dividend){
    cout<<"my output: ";
    int cnt=0,sum=0;
    if(divisor==1) return dividend;
    while(sum + divisor <= dividend){
        sum+=divisor;
        cnt++;
    }
    cout<< cnt;
    return 0;
    
}
int main(){
    divisionOfTwoNum(3,222222222222222222222222222222222);
    return 0;
}