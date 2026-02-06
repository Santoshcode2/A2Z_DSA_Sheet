#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    
    int result = str[0] -'0' ;
    for(int i=1;i<str.size();i+=2){
        char operetor = str[i];
        int next = str[i+1] - '0' ;
        if(operetor == 'A'){
            result*next;
        }
        else if(operetor == 'B'){
            result/next;
        }
        else result^next;
    }
    cout<< result;
    return 0;
}