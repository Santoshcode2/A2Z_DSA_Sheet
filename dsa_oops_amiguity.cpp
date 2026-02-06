#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout<<"return function 1"<<endl;
        }
};
class B{
    public:
        void func(){
            cout<<"return function 2"<<endl;
        }
};
class C: public A, public B{
    //  public:
    //     void function3(){
    //         cout<<"return function 3"<<endl;
    //     }
};
int main(){
     C obj;
     obj.A;
    // obj.A::func();

}