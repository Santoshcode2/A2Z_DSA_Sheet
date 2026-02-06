#include<iostream>
using namespace std;

class Human{
    // private:
    // int roll;
    protected:   //properties
    int age;
    int height;
    int weight;
    int roll;
      
     //functions 
     public:
     int getAge(){
        return this->age;
     }
     void setAge(int a){
         age = a;
     }
     int getWeight(){
         return weight;
     }
     void setWeight(int w){
        this->weight=w;
     }
     

};
//Male class has inherited the Human class
class Male : public Human{
    public: 
    string color;
    string dresscode;
    void sleep(){
        cout<<"sleeping"<<endl;
    }
    int getHeight(){
        return this->height;
    }
    void showDetails(){
         cout<<"age: "<<age;
         cout<<"weight:  "<<weight;
    }

};

int main(){
     Male m1;
     m1.setAge(20);
     m1.setWeight(67);
    // /* Male object1;
    //  cout<< object1.height <<endl;
    //  cout<< object1.weight <<endl;
    //  cout<< object1.color <<endl;
    //   object1.sleep();
    //   object1.setWeight(84);
    //   cout<<object1.weight<<endl;
    //  cout<< object1.roll<<endl;
    //   */
    return 0;
}
