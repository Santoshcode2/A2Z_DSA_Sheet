#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{
    stack<char>st;
    for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='(' || ch=='+' || ch=='-' || ch=='*' || ch=='/'){
                st.push(ch);
            }
            else{
               //ya to closing bracket hai or lowe case letter
                if(ch==')'){
                     //w e will check in between any operator is present or not
                      bool isRedundant=true;

                      while(st.top()!='('){
                          char top=st.top();
                          if(top=='+' || top=='-' || top=='*' || top=='/'){
                              isRedundant=false;
                          }st.pop();
                      }

                      if(isRedundant==true) return true;
                      st.pop();
                }
            }
    }
   return false;
}
