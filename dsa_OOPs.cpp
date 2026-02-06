#include<iostream>
//#include"hero.cpp"
using namespace std;

/*class hero{
      //properties
      //int a=5;
      //char ch='a';
      string s="abc";

};*/

class hero{

      //properties
      private:
      int health;
      public:
      char level;
      
      hero(){
             cout<<"constructor called"<<endl;
      }
      //parametrised constructor
      hero(int health){
            cout<<"this->"<<this<<endl;
            this->health=health;    //sabse samne jis health ki scope hogi wo value esme insert hogi      
      }
      
      hero(int health,char level){              //another constructor
            this->health=health; 
             this->level=level; 
       }
      //copy constructor
      hero(hero temp){
            
      }
      
      void print(){
            //cout<<level<<endl;
            cout<<"health "<<this->health<<endl;
            cout<<"level "<<level<<endl;

      }
      char getllevel(){
            return level;
       }
       int gethealth(){
            return health;
       }
      void setlevel(char l){
             level=l;
      }
      void sethealth(int h){
             health=h;
      }


};
int main(){
      hero S(70,'A');
      S.print();
      //copy constructor
      hero R(S);
      R.print();
     
     
     
     
     
     
     
     
     
//      // object created statically
//      cout<<"Hi"<<endl;
//        hero sun(84); //sun.hero() name ka function call karege
    
//       //  //dynamically
//       //  hero * h=new hero();
//       // hero Santosh(12);
//        cout<<"address of santosh "<<&sun<<endl;
//      sun.gethealth();
//       // //dynamically
      // hero *a=new hero(13);
      // hero temp('a');
      /*
      //static allocation
      hero a;
       a.setlevel('A');
      a.sethealth(90);
      cout<<"level is : "<<a.level<<endl;
      cout<<"health is: "<<a.gethealth()<<endl;
     

      
      //dynamically allocation
      hero *b=new hero;
      b->setlevel('B');
      b->sethealth(96);
      cout<<"level is : "<<(*b).level<<endl;
      cout<<"health is: "<<(*b).gethealth()<<endl;
                //OR
      cout<<"level is : "<<b->level<<endl;
      cout<<"health is: "<<b->gethealth()<<endl;
       */
      
      
      // //creation of  object
      // hero Santosh;
      // cout<<"size : "<<sizeof(Santosh)<<endl;
      // Santosh.sethealth(80);
      // Santosh.setlevel('A');                               
      // //Santosh.getlevel()='A';
      // cout<<"health is : "<<Santosh.gethealth()<<endl;
      // cout<<"level is : "<<Santosh.getlevel()<<endl;
      // return 0;

}


//in case of empty class ,your object will get 1 byte.  [very very imp.]


//we can define this class in different file 
//once you have written the constructor ,the inbuilt constructor will be removed automatically 


/*learn
create class,object,using getter &setter,by using satic &dynamic allocation how to create object
how to create default constructor without any parameter
*/

/* if we have done the constructor implementation the my by default constructor will die
*/