#include<iostream>
using namespace std;
string remove_occurences(string s,string part);

int main(){
    string s="daabcbaabcbc";
    string part="abc";
    remove_occurences(s,part);

}                    //once read about find,erase inbuilt function (google search string in C++)
             
string remove_occurences(string s,string part){                           
              while(s.length()!=0 && s.find(part)<s.length()){
                     s.erase(s.find(part),part.length());
              }
              cout<<s;
}
