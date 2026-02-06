#include<iostream>
#include<stack>
using namespace std;

class Stack{
       //properties
       public:
       int *arr;
       int top;
       int size;

       //behaviour--constructor
       Stack(int size){
              this->size=size;
              arr=new int[size];
              top=-1;
       }
       void push(int element){
           //check whether space is available
           if(size-top>1){
                    top++;
                    arr[top]=element;
           }else{
              cout<<"stack overflow"<<endl;
           }
       }
        void pop(){
            //check element is present or not
             if(top>=0){
              top--;
             }else{
              //no element is present & you want to make pop
              cout<<"Stack Underflow"<<endl;
             }
        }
        int peek(){
              if(top>=0 )
                   return arr[top];
              else cout<<"stack is empty"<<endl;
              return -1;
        }
        bool isEmpty(){
             if(top==-1) return true; 
             else {
              return false;
              }
        }

};


int main(){
    
     Stack st(5);
     st.push(22);
     st.push(48);
     st.push(26);
     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
     st.pop();
     cout<<st.peek()<<endl;
     
     if(st.isEmpty()){
          cout<<"stack is empty"<<endl;
     }else{
       cout<<"stack is not empty"<<endl;
     }


    
    
    
     /*  // creating stack
       stack<int>s;
       //inserting element
       s.push(2);
       s.push(8);
       s.push(3);
       // removing element 
       s.pop();
       cout<<s.top()<<endl;
       if(s.empty())   cout<<"stack is empty"<<endl;
       else            cout<<"stack is not empty"<<endl;
       cout<<"size of stack "<<s.size()<<endl;
       */

       return 0;
}