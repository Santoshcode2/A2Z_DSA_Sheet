// #include <iostream>
// using namespace std;

// class A{
//     public:
//     void speak(){
//         cout<<"my name is Santosh Prasad"<<endl;
//     }
//     void speak(string name){
//         cout<<"Santosh Prasad"<<endl;
//     }
//      int speak(int name){
//         cout<<"Santosh Prasad--"<<endl;
//         return 0;
//     }
// };
// int main(){
//     A obj;
//     obj.speak(5);
//     return 0;
// }

// function overridding 
#include<iostream>
using namespace std;

class Human{
    public:
    void speak(){
        cout<<"Speaking.... "<<endl;
    }
};
class Animal : public Human{
       public:
       void speak(){
        cout<<"barking.... "<<endl;
       }
};

int main(){
    Human h;
    Animal a;
    a.speak();
    h.speak();
    return 0;
}