#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cout<<"enter string: ";
    cin>>s;
    n=s.length();
    //cout<<"string length: "<<n;
    for(int i=0;i<n/2;i++){
         int firstval=s[i];
         int secval=s[n-i-1]; 
         s[i]=secval;
         s[n-i-1]=firstval;
         if(s[i]!=s[n-i-1]){
            cout<<"not palindrome string\n";
            break;
         }
    }
    for(int i=0;i<n;i++){
             cout<<s[i];
    
    }
}