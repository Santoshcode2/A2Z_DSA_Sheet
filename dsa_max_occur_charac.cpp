#include<iostream>
using namespace std;
char getmax(string s);
int main(){
    string s;
    cout<<"enter the string "<<endl;
    cin>>s;
    cout<<"max occ character  "<<getmax(s);

}
char getmax(string s){
    int arr[26]={};                        // space complexity is O(1)
                                              //creating an arr of count of characters
    for(int i=0;i<s.length();i++){
           char ch=s[i];                     //time complexity is O(n) where n is length of string
           int number=0;
           number=ch-'a';
           arr[number]++;
           //number++;
    }
                                   //finding the max occuring character
    int ans=0,maxi=-1;
    for(int i=0;i<26;i++){
          if(maxi<arr[i]){
            ans=i;                   
            maxi=arr[i];
          }
    }  
    return 'a'+ans;
}