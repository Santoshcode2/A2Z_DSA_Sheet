/*
convert all to uppercase or all to lowercase as per their count
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    //pehlecnt upper & Lower case
    int upprcase = 0 , LowerCase =0; 
    for(int i=0;i<str.size();i++){
        if(str[i]>=65 && str[i]<=90) {
              upprcase++;
        }
        if( str[i]>=97 && str[i]<=122){
                   LowerCase++;
        }
    }
    //check which one is bigger
    if( upprcase < LowerCase){
        //u-->l
        for(int i=0;i<str.size();i++){
            if(str[i]>=65 && str[i]<=90){
                str[i] =str[i] + 32 ;
            }
        }

    }
    else{    //l-->u
         for(int i=0;i<str.size();i++){
            if(str[i]>=97 && str[i]<=122){
                str[i] =str[i] - 32 ;
            }
        }
    }
    cout<<str;

    return 0;
}