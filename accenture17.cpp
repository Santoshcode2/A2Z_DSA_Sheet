#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string input1;
    cin>>input1;
    string input2;
    cin>>input2;
    int cnt=0;

    for(int i=0;i<=(input1.size()-input2.size());i++){
        int j=0;
        for( j=0; j<input2.size();j++){
            if(input1[i+j]!=input2[j]){
                break;
            }
        }
            if(j==input2.size()) cnt++;
         
    }cout<<"output"<<cnt;
    return 0;
}