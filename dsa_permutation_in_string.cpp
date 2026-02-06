#include<iostream>                                 //BOHUT IMPT. QUESTION   
using namespace std;
string   get_permutation(string s1,string s2);

int main(){
  
}
string   get_permutation(string s1,string s2){
                         // 26 char. ke count ko zero store karwa de rahe hai
       int count[26]={0};
                            //character count array
       for(int i=0;i<s1.length();i++){
               int index=s1[i]-'a';
               count[index]++;
       }//traverse s2 string in window of size s1 length and compare
       int i=0;
       int window_size=s1.length();
       int count2[26]={0};

       //running for first window
       while(i< window_size && i<s2.length()){
                  int index=s2[i]-'a';
                  count2[index]++;
                  i++;
       }



}
