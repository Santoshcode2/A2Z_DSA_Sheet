#include<iostream>
using namespace std;
int getfact(int n);
int main(){
    int n;
    cin>>n;
    int ans=getfact(n);
    cout<<"factorial of  "<<n<<" is "<<getfact(n)<<endl;
    return 0;
}
int getfact(int n){
    
    if(n==0){
        return 1;
    }
                                        //recursive relation--F(n)=n*F(n-1)
    int small_prob=getfact(n-1);
    int big_prob=n*getfact(n-1);
    return big_prob;
}

//if you will not give base case you will get segmentation fault