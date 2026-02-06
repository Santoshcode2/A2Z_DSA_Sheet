#include<iostream>
#include<queue>

using namespace std;
int main(){
       queue<string>q;                         // creating a queue

       q.push("Santosh ");
       q.push("Prasad ");
       q.push("burma ");
        
       cout<<"top element "<<q.front()<<endl;
       q.pop();
       cout<<"top element "<<q.front()<<endl;
       cout<<"size after pop "<<q.size()<<endl;
}
// all the operation is having omplexity O(1)