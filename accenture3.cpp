#include<bits/stdc++.h>
using namespace std;
int CheckPassword(char str[], int n);
int CheckPassword(char str[], int n){
    if((str[0]-'0')>=0 && (str[0]-'0')<=9){
                   return 0;
    }    
    if(n<4) return 0;                             //aA1_67
    int  cntN=0,cntA=0;
    str++;
    for(int i=1;i<n;i++){
        if(str[i]==' ' || str[i]=='/') return 0;
        if(str[i]>=65 && str[i]<=90){
            
            cntA++;
        } 
        else if((str[i]-'0')>=0 && (str[i]-'0')<=9){
           
              cntN++;
        }
        
       
    }
    if(cntA!=0 && cntN!=0 ) return 1;
    else return 0;
    return 0;
}

int main(){
    string str1;
    cin>>str1;
    int n=str1.size();
    char *str=&str1[0];       //here
   cout<< CheckPassword(str,n);
    return 0;
}