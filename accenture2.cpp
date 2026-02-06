#include <bits/stdc++.h>
using namespace std;

int OperationsBinaryString(char* str,int n) {
    char result=str[0]-'0';
    for(int i=1;i<n;i+=2){
           char operatar = str[i];
           char next=str[i+1]-'0';
           if(operatar=='A'){
               result*next;
           }
           else if(operatar=='B'){
                result|next;
           }
           else result^next;

           
    }
    return result;
}

int main(){
    string s;
    cin>>s;
    char * str=&s[0];
    int n=s.size();

    cout<<OperationsBinaryString(str ,n);
    return 0;
}