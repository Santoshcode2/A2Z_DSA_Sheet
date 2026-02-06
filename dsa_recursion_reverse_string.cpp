#include<iostream>
using namespace std;
string reverseString(string &s,int i,int j);   // call by reference

int main(){
    string s;
    cin>>s;
    int size=s.length();
    int i=0,j=size-1;
    reverseString(s,i,j);
    cout<<s;                     //to print the string
    return 0;
}
string reverseString(string &s,int i,int j){
         cout<<"call recieved string  "<<s<<endl;
         //base condition
        if(i>j){
            return s;
        }
        swap(s[i],s[j]);
        i++,j--;
        reverseString(s,i,j);
}
