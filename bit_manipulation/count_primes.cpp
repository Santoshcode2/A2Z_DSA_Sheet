//Sieve of Erastosthenes

#include<bits/stdc++.h>
using namespace std;

vector<int> findAllPrimes(int n){
    vector<int> prime(n+1,1);
    prime[0] = prime[1] = 0;    //O and 1 are not prime 

    //apply sieve of erastothenes
    for(int i=2;i<=sqrt(n);++i){
        if(prime[i]==1){
            for(int j=i*i;j<=n;j+=i){
                //mark the multiples of prime 
                prime[j]=0;
            }
        }
    }
    vector<int>ans;
    //collect prime numbers 
    for(int i=2;i<=n;++i){
         if(prime[i] == 1){
            ans.push_back(i);
         }
    }
    return ans;
}
    int main(){
        int n=32;
        vector<int> primes=findAllPrimes(n);
        cout<<"prime numbers less than or equal to: "<<n<<";"<<endl;
        for(int prime: primes){
            cout<<prime<<" ";
        }
        cout<<endl;
        return 0;
    }


