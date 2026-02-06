#include<iostream>
using namespace std;
//created hierarchical inheritance
class A{
    public:
        void function1(){
            cout<<"return function 1"<<endl;
        }
};
class B: public A{
    public:
        void function2(){
            cout<<"return function 2"<<endl;
        }
};
class C: public A{
     public:
        void function3(){
            cout<<"return function 3"<<endl;
        }
};
int main(){
     A obj1;
     obj1.function1();
     B object2;
     object2.function2();
     object2.function1();
     C object3;
     object3.function1();
      object3.function2();
}