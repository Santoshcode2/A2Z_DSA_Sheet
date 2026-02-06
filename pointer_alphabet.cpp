#include<iostream>
using namespace std;
void alph(char *i);
int main(){
     char i;
     alph(&i);
}//call by reference
void alph(char *i){
    char *i;
    
    for(*i=65;*i<=90;*i++){
        cout<<*i<<"  ";
    }
}