//find no of prime numbers between 1 and n (where n is entered by user)
#include<iostream>
using namespace std;
int get_prime(int no);

int main(){
      int no;
      cout<<"enter no "<<endl;
      cin>>no;
      cout<<"no is_prime/not "<<get_prime(no)<<"     ";
      return 0;
}
int get_prime(int no){
    int count=0;
    for(int i=2;i<no;i++){
           for(int i=2;i<no;i++){
                  if(no%i==0){
                     return false;
                  }
           }count++;
    }cout<<count;
}