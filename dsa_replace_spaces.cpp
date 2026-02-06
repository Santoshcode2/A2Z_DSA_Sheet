#include<iostream>
using namespace std;
string getreplace(string s);

int main(){
        string s;
        cout<<"enter the string "<<endl;
       cin>>s;
        cout<<"new string "<<getreplace(s);
        //return 0;

}
string getreplace(string s){
    
    string temp="";                  //space complexity is O(n)
    for(int i=0;i<s.length();i++){    //time complexity is O(n)
        if(s[i]==' '){
                temp.push_back('@');
                temp.push_back('4');
                temp.push_back('0');
        }else{
              temp.push_back(s[i]);
              
        }
    }return temp;
}