#include<bits/stdc++.h>
using namespace std;

// int main(){
//     int N;
//     cin>>N;
//     int sum = (N*(N+1))/2;
//     int ans=sum+1;
//     cout<<(ans % 1000000007)<<endl;

//     return 0;
// }

// Q 16
int getsingleNumber1(int N);
int getsingleNumber2(int N);
int main(){
    int N;
    cin>>N;
    if(N<=9) cout<<N;
    while(N>9){
        if(N>9 && N%2==0 ){
        //even 
            N = floor((N-2)/2);
        }
        else{
            //odd 
            N = floor(N/2);
        }

    }
    cout<<N;

    return 0;
}
