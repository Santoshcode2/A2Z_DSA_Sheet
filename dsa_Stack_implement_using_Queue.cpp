//using Two Queue implementation of stack

class MyStack {
public:
       /* Initialize your data structure here. */
       queue<int>q1;
       queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    
    int pop() {
        int result=q1.front();
        q1.pop();
        return result;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
         if(!q1.front()) return true;
         else return false;  
    }
};
//using only single Queue implementation of stack
class MyStack {
public:
       /* Initialize your data structure here. */
       queue<int>q;
     //  queue<int>q2;
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
       for(int i=0;i<q.size()-1;i++){
            q.push(q.front());
            q.pop();
        }
      
    }
    
    int pop() {
        int result=q.front();
        q.pop();
        return result;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
         return q.empty();
    }
};