#include<iostream>
using namespace std;
bool check_prime(int no);

int main(){
      int no;
      cout<<"enter no "<<endl;
      cin>>no;
      cout<<"no is_prime/not "<<check_prime(no);
      return 0;

}
bool check_prime(int no){
    if(no==1 || no==0){
        return false;
    }
    for(int i=2;i<no;i++){          //time complexity is O(n)
        if(no%i==0){
            return false;
        
        }
    }return true;
}