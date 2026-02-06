#include<iostream>
using namespace std;
long long int getsqrt(int no);



int main(){
    int no;
    cout<<"enter no ";
    cin>>no;
    getsqrt(no);
    return 0;
}
long long int  getsqrt(int no){
      int low=0;
      int high=no;
      long long int  ans=0;
      while(low<=high){
           int  mid=(low+high)/2;
           long long int square=mid*mid;
            if(square==no){
              cout<<mid<<endl;
              break;
              
            }
            else if(square<no){
              ans=mid;
               low=mid+1;
               //cout<<ans<<endl;
            }else{
               high=mid-1;
            }
        } cout<<ans;
}