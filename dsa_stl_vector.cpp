#include<iostream>
#include<vector>                
using namespace std;
int main(){
      vector<int>v;                                        //creating a vector of int type i.e 'v'
      //if we know the size of vector 
      vector<int>a(5,1);                   // 5 indicates size and 1 indicates intialisation
      cout<<" print a "<<endl;              // by default intiliase it as 0
      for(int i:a){
        cout<<i<<" ";
      }cout<<endl;
      //how to copy a vector ?
      vector<int>last(a);
      cout<<" print last "<<endl;
      for(int i:last){
        cout<<i<<" ";
      }cout<<endl;

      cout<<"capacity-->"<<v.capacity()<<endl;           //when we create vector its capacity is 0
      //to add element in vector we use
      v.push_back(1);
      cout<<"capacity-->"<<v.capacity()<<endl;
      v.push_back(2);                                   //jab apne do dala tab eski size 2 thi
      cout<<"capacity-->"<<v.capacity()<<endl;           //jab apne 3 dala tab esni apni size 
      v.push_back(3);                                     //convert karke 4 kar li      
      cout<<"capacity-->"<<v.capacity()<<endl; 
      cout<<"size-->"<<v.size()<<endl;                  //to check the size of vector
      cout<<"element at 2nd  index "<<v.at(2)<<endl;
      cout<<"front "<<v.front()<<endl;
      cout<<" back "<<v.back()<<endl;
      
      cout<<" before pop "<<endl;
      for(int i:v){                                         
           cout<<i<<" ";
      }cout<<endl;
      
      v.pop_back();

     cout<<"after pop"<<endl;
     for(int i:v){
         cout<<i<<" ";
     }  cout<<endl; 
     // to clear the vector---size become zero but capacity doesnot become zero(how much memory it has been assign)
     cout<<"before clear size  "<<v.size()<<endl;
     v.clear();
     cout<<"after clear size "<<v.size()<<endl;
   
   }

//size indicates how many elements are there / capacity indicates how much space is there for the elements
