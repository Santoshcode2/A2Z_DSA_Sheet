#include<iostream>
using namespace std;
int getpower(int n);

int main(){
    int n;
    cin>>n;
    int ans=getpower(n);
    cout<<"power of "<<ans<<endl;
}
int getpower(int n){
        //base condition
         if(n==0){
            return 1;
         }
        int small_prob=getpower(n-1);
        int big_prob=2*getpower(n-1);
        return  big_prob;
        //return 2*getpower(n-1)
}