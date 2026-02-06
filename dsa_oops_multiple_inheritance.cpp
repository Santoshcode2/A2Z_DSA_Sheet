# include<iostream>
using namespace std;

class Animal{
     public:
     int age;
     int weight;
     public:
     void bark(){
        cout<<"barking "<<endl;
     }
};
class Human{
    public:
    string color;
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class santosh : public Animal , public Human{

};
int main(){
    santosh obj1;
    obj1.speak();
    obj1.bark();
    cout<<obj1.weight<<endl;
    cout<<obj1.age<<endl;
    //now create an object
   
    // cout<<d.age<<endl;
    // cout<<d.weight<<endl;
    return 0;
}