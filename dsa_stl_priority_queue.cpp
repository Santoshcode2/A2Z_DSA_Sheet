#include<iostream>
#include<queue>

using namespace std;
int main(){
     //max heap
    priority_queue<int>maxi;              //when we initialise like this is based_on _max_heap
                                    //whenever we fetch the element out it will always be the greatest element
     //min heap
     priority_queue<int,vector<int>,greater<int>>mini;

     maxi.push(1);                   // entering the elements
     maxi.push(4);
     maxi.push(2);
     maxi.push(0);
     
                                           //  printing the elements
     cout<<"size "<<maxi.size()<<endl;
     int n=maxi.size();
     for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
     }cout<<endl;

     mini.push(5);                   // entering the elements
     mini.push(1);
     mini.push(3);
     mini.push(7);
     mini.push(10);

     cout<<"size "<<mini.size()<<endl;
     int m=mini.size();
     for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
     }cout<<endl;

     cout<<"empty or not "<<maxi.empty()<<endl;
     
}