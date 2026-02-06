#include<bits/stdc++.h>
using namespace std;
int no_of_substr(string s);
int no_of_substr_Optimal(string  s);
//BRUTE FORCE --->  T.C=O(N^2) & S.C=O(1)
int no_of_substr(string  s){
    int cnt=0;                                   //bbacba
    for(int i=0;i<s.size();i++){
        int hash[3]={0};  
        // vector<int,int>mpp;
        for(int j=i;j<s.size();j++){
              hash[s[j]-'a']= 1;
              if((hash[0]+hash[1]+hash[2])==3){
                  cnt++;
              }
        }  
    }cout<< cnt;  
}
int main(){
    string s="bbacba";
    no_of_substr(s);
    return 0;
}
//optimal approach--> T.C=O(N)  &&  S.C=O(1)
int no_of_substr_Optimal(string  s){
        int lastSeen[3]={-1,-1,-1};
        int cnt=0;
        for(int i=0;i<s.size();i++){
            lastSeen[s[i]-'a']=i;
            if(lastSeen[0]!=-1 && lastSeen[1]!=-1 && lastSeen[2]!=-1)
                 cnt=cnt + (1+min(lastSeen[0],lastSeen[1],lastSeen[2]));
        }
        return cnt;        
}