#include <iostream>
using namespace std;
int main(){
    convertD2Bin(13);
    return 0;
}
string convertD2Bin(int n){
      string res="";
      while(n!=1){
          if(n%2==1){
            res+='1';
          }
          else{
            res+='0';
          }
          n=n/2;
      }
      reverse(res.begin(), res.end());
      return res;

}
//T.C=log(N) BASE 2  && S.C=T.C=log(N) BASE 2