#include<iostream>                                     //GOOD QUESTION
using namespace std;
bool valid(char ch);
char getlower(char ch);
bool getpalindrome(string a);

int main(){
        string s;
        cout<<"enter the string "<<endl;
        cin>>s;
        string temp="";                       //faltu characters ko hatado
        for(int j=0;j<s.length();j++){
              if(valid(s[j])){
                temp.push_back(s[j]);
                }                                  //lowercase kardiya
        }for(int j=0;j<temp.length();j++){
               temp[j]=getlower(temp[j]);
        }
           //return getpalindrome(temp);
         cout<<"string is "<<getpalindrome(temp);

}
//faltu characters ko remove karenge
bool  valid(char ch){
            if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')||(ch>='0' && ch>='9')){
                    return 1;
            }else return 0;
}
//upper case ko lower case me karenge
char getlower(char ch){
    if((ch>='a' && ch<='z')||(ch>='0' && ch<='9')){
      return ch;
   }else{
      char temp=ch-'A'+'a';
      return temp;
   }
}
//check palindrome 
bool getpalindrome(string a ){
    int st=0,end=a.length()-1;
    while(st<end){
           if((a[st])!=(a[end])){   
                  return 0; 
           }else{
            st++;end--;
           }
           
    }return 1;
}