#include<bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) ;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int l=0 ,r=0;
         int hash[256];
        fill(hash, hash+256, -1);
        int maxLen=0 , n=s.size(); 
        while(r<n){
                //agar char map me exixt kar raha hai
                  if(hash[s[r]]!=-1) {
                    /*check kya wo mere substring ke andar hai
                        if not */
                       if(hash[s[r]]>=l){
                            l=hash[s[r]]+1;
                       }
                  }
                  int len=r-l+1;
                  maxLen=max(maxLen,len);
                  hash[s[r]]=r;
                  r++;
        }
        
        return maxLen;

    }
}; //T.C=O(N) & S.C=O(256)


//brute force--T.C=O(N*2) && S.C=O(256)
int lengthOfLongestSubstring(string s) {
          int maxLen=0;
          for(int i=0;i<s.size();i++){
               int hash[256]={0}; 
                for(int j=i;j<s.size();j++){
                     if(hash[s[j]]==1) break;
                     int len=j-i+1;
                     maxLen=max(maxLen,len);
                     hash[s[j]]=1;
                }
          } cout<< maxLen;
}

int main(){
  string s="abcdeabcabcdefabcd";
  return lengthOfLongestSubstring(s);
}