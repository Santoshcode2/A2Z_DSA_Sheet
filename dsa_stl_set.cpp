#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int>s;                   // creating a set

    // inserting element in set
    s.insert(5);
    s.insert(5);
    s.insert(5);
     s.insert(5);                       //complexity of insert,find,erase,count  operation is O(logn)
    s.insert(0);                        // complexity of size,begin,end is O(1)
    s.insert(0);
    s.insert(0);
    s.insert(2);
     s.insert(2);
    s.insert(1);
     s.insert(1);

    //printing the element
    for(auto i:s){                                //auto datatype automatically decide the daytatype 
        cout<<i<<" ";                             //of the variable
    }cout<<endl;
     
    set<int>::iterator it=s.begin();
    it++;

    s.erase(it);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
                                         //count tells whether the element present or not
     cout<<"5 is present or not-->"<<s.count(5)<<endl;
    
     //function is "find"
     //if the element present then it will return its iterator
     set<int>::iterator itr=s.find(5);

     for(auto it=itr;it!=s.end();it++){
                cout<<*it<<" ";
     }cout<<endl;






}