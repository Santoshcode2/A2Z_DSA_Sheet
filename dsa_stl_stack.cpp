#include<iostream>
#include<stack>

using namespace std;
int main(){
        stack<string>s;                                            // creating a stack
        
        s.push("Santosh ");
        s.push("Prasad");
        s.push("Burma");

        cout<<"top element-->"<<s.top()<<endl;

        s.pop();
       cout<<"top element-->"<<s.top()<<endl;
       cout<<"empty or not "<<s.empty()<<endl; 
}