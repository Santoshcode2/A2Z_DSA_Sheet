#include<iostream>
using namespace std;
int getlength(char name[]);
int getreverse(char name[],int len);
bool getpalindrome(char a[],int len);
char getlower(char ch);

int main(){
       char name[20];
       cout<<"enter your name"<<endl;
       cin>>name;
       int len=getlength(name);
       cout<<"length of string "<<getlength(name)<<endl;
       getreverse(name,len);
       cout<<"palindrome or not "<<getpalindrome(name,len);
       return 0;

}
int getlength(char name[]){
         int count=0;
         for(int i=0;name[i]!=0;i++){
            count++;
         }
         return count;
}
int getreverse(char name[],int len){
         int i=0,j=len-1;                      //int j=s.size()-1,i=0;
         while(i<j){
            swap(name[i],name[j]);
            i++;j--;
         }
         cout<<"reverse string "<<name<<endl;               //no need 
}
bool getpalindrome(char a[],int len){
    int st=0,end=len-1;
    while(st<end){
           if(getlower(a[st])!=getlower(a[end])){                  //here we are not treating upper case and lower case same
            return 0;                       //so once check in problem what they are demanding
           }/*if(a[st]||a[end]=='@','?'){
                    st++;end--;
           }*/else{
            st++;end--;
           }
           
    }return 1;
}
char getlower(char ch){
   if(ch>='a' && ch<='z'){
      return ch;
   }else{
      char temp=ch-'A'+'a';
      return temp;
   }
}
