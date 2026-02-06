#include<iostream>
using namespace std;
int main(){
      int n=1;
      char ch='1';
      switch(ch){
        case 1: cout<<"one";
                   break;
        case '1':switch(n){
                    case 1:cout<<"value of n is "<<n;  
                 }
               break;
        default: cout<<"default case ! ";
      }
}