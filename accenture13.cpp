/*
Rock paper Seasor game
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    //i/p for player A
    string strA ;
    cin>>strA;

    //generate an o/p for player to get him win

    if(strA == "rock") cout<< "paper";
    else if(strA == "paper") cout<<"seasor";
    else cout<<"rock";
    
    return 0;
}