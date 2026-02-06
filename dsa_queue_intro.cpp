#include<iostream>
#include<queue>
using namespace std;

int main(){
    //create queue
    queue<int>q;
    //insert elements
    q.push(19);
    q.push(25);
    q.push(49);
    q.push(48);
//size of queue
     cout<<"size of queue is: "<<q.size()<<endl;
     cout<<"front of queue is: "<<q.front()<<endl;
    //remove thee elements
     q.pop();
     cout<<"size of queue is: "<<q.size()<<endl;
    cout<<"front of queue is: "<<q.front()<<endl;
    q.push(2);
    cout<<"front of queue is: "<<q.front()<<endl;


}