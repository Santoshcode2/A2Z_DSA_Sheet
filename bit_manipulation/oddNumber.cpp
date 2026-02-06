#include<bits/stdc++.h>
using namespace std;

vector<int> oddNumber(vector<int>nums){
    int xorAll=0;
    for(int i=0;i<nums.size();i++){
        xorAll=xorAll^nums[i];
    }
    // i am with the xor of two numbers
    //now find the rightmost set bit 
    int rightMostSetBit = (xorAll & (xorAll-1)) & xorAll;

      //now iterate and put it into two different bucket
      int b1=0,b2=0;

      for(int i=0;i<nums.size();i++){
          if(rightMostSetBit&nums[i]) b1=b1^nums[i];
          else b2=b2^nums[i];
      }
      return {b1,b2};

}
