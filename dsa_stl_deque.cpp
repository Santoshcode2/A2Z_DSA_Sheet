#include<iostream>
#include<deque>
using namespace std;
int main(){
      //how to create a deque
      deque<int>d;
      d.push_back(1);                               //how to inert element in deque
      d.push_front(2);
      
      /*for(int i:d){
        cout<<i<<" ";
      }cout<<endl; 
      d.pop_front();                                           
      for(int i:d){
        cout<<i<<" ";
      } */
      cout<<"print first index element "<<d.at(1)<<endl; 
      cout<<"front "<<d.front()<<endl;
      cout<<" back "<<d.back()<<endl;
      cout<<"empty or not-->"<<d.empty()<<endl;
       // to delete a element OR range of element we use erase fun.
       cout<<"before erase "<<d.size()<<endl;
       d.erase(d.begin(),d.begin()+1);
       cout<<"after erase "<<d.size()<<endl;
      for(int i:d){
        cout<<i<<endl;
      }

} 
      