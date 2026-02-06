#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string strng1;
    cin>>strng1;
    char rpl;
    cin>>rpl;

    //code
    map<int,int>mpp;
    for(int i=0;i<strng1.size();i++){
           mpp[strng1[i]]++;
    }
    //findding the mostoccuring char
    int maxFreq = 0;
    char mostOccrChar = '\0'  ;
    for(auto it : mpp){
        if(it.second > maxFreq || (it.second==maxFreq && it.first<mostOccrChar)){
                 mostOccrChar = it.first;
                 maxFreq = it.second;
        }
    }
    //replace the char
    string str="";
    for(int i=0;i<strng1.size();i++){
           if(strng1[i]==mostOccrChar) str =str + rpl;
           else str = str + strng1[i];
    }
    cout<< str;
    return 0;
}