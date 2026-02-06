# include<iostream>
using namespace std;

class Animal{
     public:
     int age;
     int weight;
     public:
     void speak(){
        cout<<"speaking "<<endl;
     }
};
//i want to create single inheritance 
class Dog :public Animal{

};
class GermanSepherd: public Dog{

};
int main(){
    //now create an object
   GermanSepherd g;
    g.speak();
    // cout<<d.age<<endl;
    // cout<<d.weight<<endl;
    return 0;
}