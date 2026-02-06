#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int>l;                                // creating a list
    
    //how to this list to a new list
    //list<int>n(l);
    //if we want to intialise our list
    list<int>n(5,100);
   cout<<"printing n"<<endl;
   for(int i:n){
        cout<<i<<" ";
     }cout<<endl;



    l.push_back(1);                            //inserting element in list
    l.push_front(2);

     // to print list
     for(int i:l){
        cout<<i<<" ";
     }cout<<endl;

     l.erase(l.begin());                                 // to erase element in list 
     cout<<"after erase "<<endl;
     for(int i:l){
        cout<<i<<" ";
     }cout<<endl;

     cout<<"size of list--> "<<l.size()<<endl;
     
}