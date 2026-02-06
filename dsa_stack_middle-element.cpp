#include <bits/stdc++.h> 
void solve(stack<int>&inputStack, int cnt,int size){
     //base case
     if(cnt==size/2){
           inputStack.pop();
           return;
     }
     
     int num=inputStack.top();
     inputStack.pop();

     //RECURSIVE CALL
     solve(inputStack,cnt+1,size);
     //WAPAS JANE WAKT TOP ELEMENT KO LETE JAO
     inputStack.push(num);
}
void deleteMiddle(stack<int>&inputStack, int N){
	int cnt=0;
   solve(inputStack,cnt,N);
}
stack<int> pushAtBottom(stack<int>&myStack,int x){

   solve(myStack,x);
   return mystack;
}
//base case
if(s.empty()){
      s.push(x);
      return;
}
int num=s.top();
s.pop();
//recursive call
solve(s,x);
s,push(num);
