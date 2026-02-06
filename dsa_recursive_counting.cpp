#include<iostream>
using namespace std;
void getcount(int n);
int main(){
    int n;
    cin>>n;
    getcount(n);
}
void getcount(int n){
      if(n==0){
        return ;
      }
     
      getcount(n-1);
      cout<<n<<endl;
}
