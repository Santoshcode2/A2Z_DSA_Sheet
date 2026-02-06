#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    string name;
    int age;
    int weight;
    void func1(){
        cout<<"hello bro"<<endl;
    }
};
class B:public A{          //single inheritance
    void func2(){
      cout<<"kya hua";
    }
};
class C:public A{
    public:
    void func3(){
      cout<<"kya hua";
    }
};
int main(){
    C obj1;
    obj1.func1();
    obj1.age;
    return 0;
}
