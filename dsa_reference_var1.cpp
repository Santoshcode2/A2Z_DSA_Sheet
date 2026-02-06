#include<iostream>
using namespace std;
int update1(int n);
int update2(int &n);           //now we are passing reference

int main(){
    /*int i=5;
    //creating a reference var.
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;
    */
     int n=5;
   cout<<"before "<<n<<endl;
   update2(n);
   cout<<"after "<<n<<endl;

                                                  
    
    
    
    
    return 0;
}
int update2(int &n){           
    n++;
}