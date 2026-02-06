#include<iostream>
#include<math.h>
using namespace std;
int binary2Decimal(string x);
int main(){
       binary2Decimal("1101");
       return 0;
}
int binary2Decimal(string x){
      // i will have to iterate from back
      int len=x.size();
      int num=0;
      for(int i=len-1;i>=0;i++){
             
           num +=  x[i] * pow(2,i);
      }
      return num;
}
//T.C=O(LEN)  && S.C=O(1)