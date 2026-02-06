#include<iostream>
using namespace std;
bool isPalindrome(string s,int i,int j);

int main(){
    string s;
    cin>>s;
    int is_palindrome= isPalindrome(s,0,s.length()-1);
    if(is_palindrome){
        cout<<"palindrome string "<<endl;
    }else{
        cout<<"not palindrome "<<endl;
    }

}
bool isPalindrome(string s,int i,int j){
        //base case
        if(i>j){
            return true;
        }if(s[i]!=s[j]){
            return false;
        }
        else{
            //recursive call
           return  isPalindrome(s,i+1,j-1);
        }
}