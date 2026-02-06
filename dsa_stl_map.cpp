#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string>m;
     // insering values
    m[1]="Santosh";             // 1 is key & santosh is value
    m[13]="Prasad";
    m[2]="Burma";

    m.insert({5,"bheem"});                     // insert,erase,count,find have complexity O(logn) in map
     
     cout<<"before erase "<<endl;
    //printing the values
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;            // it will get printed in sorted order in case of map
    }                                                   // it is showing correct mapping

    cout<<"finding -13-->"<<m.count(-13)<<endl;

    // m.erase(13);
    cout<<" after erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;            
    }

    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++ ){
        cout<<(*i).first<<endl;

    }
}