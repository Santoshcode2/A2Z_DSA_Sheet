#include<bits/stdc++.h>
using namespace std;
string reverseWordInString(string str);
string reverseWordInString(string str){
    int n = str.size();
    string result="";
    stack<string>st;
    for(int i=0;i<n;i++){
        while(str[i]==' '){
            i++;
        }
        string ans="";
        while(str[i]!=' '){
           ans+=str[i];
           i++;
       }
       if(!ans.empty()) st.push(ans);
    }
    
   while(!st.empty()){
    result += st.top();
    st.pop();
    if(!st.empty()) result += " ";
   }
   return result;
}
int main(){
    string str="    hello world ";
    cout<<"your i/p : "<<endl;
    cout<<"output : "<<endl;
    cout<<reverseWordInString(str);
    return 0;
}
