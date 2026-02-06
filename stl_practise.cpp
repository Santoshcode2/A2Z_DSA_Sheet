#include<iostream>
#include<array>

using namespace std;
int main(){
    array<int,4>a={2,4,7,8};

    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout<<a.at(2)<<endl;
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    cout<<a.empty()<<endl;
}   