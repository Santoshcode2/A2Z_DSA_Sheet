#include<iostream>
using namespace std;
class B{
    public:
    int a;
    int b;
    public:
    int add(){
        return a+b;
    }
    void operator + (B &obj){
          int val1=this->a;
          int value2=obj.a;
          cout<<"output"
    }
};

int main(){
    
    
    return 0;
}