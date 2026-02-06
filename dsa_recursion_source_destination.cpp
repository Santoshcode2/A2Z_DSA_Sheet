#include<iostream>
using namespace std;
void get_dest(int src,int dest);

int main(){
    int src=2, dest=12;
    
    get_dest(src,dest);
    return 0;
}
void get_dest(int src,int dest){
          //cout<<"src "<<src<<" dest "<<dest<<endl;
          if(src==dest){
               cout<<"ghar pahunch gaya "<<endl;
               return;
          }
          src++;
          get_dest(src,dest);

}