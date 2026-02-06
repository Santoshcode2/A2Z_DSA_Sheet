#include<bits/stdc++.h>
using namespace std;

int main(){
    string string1;
    cin>>string1;
    char char1,char2;
    cin>>char1>>char2;

    //code
    string str="";
    for(int i=0;i<string1.size();i++){
        if(string1[i]==char1){
              str=str + char2;
        }
        else if(string1[i]==char2){
            str+=char1;
        }
        else str = str + string1[i];
    }
    cout<<str;
    return 0;
}