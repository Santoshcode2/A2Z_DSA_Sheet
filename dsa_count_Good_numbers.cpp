#define mod 1000000007
class Solution {
//private:
  public:
    long long  power(long long x, long long n){
        if(n==0) return 1;
        else if(n%2==0){
           return power((x*x)%mod,n/2);
        } else{
             return (x*power(x,n-1))%mod;
        }
    }

    int countGoodNumbers(long long n) {
        long long numberOfOddPlaces = n/2;
        long long numberOfEvenPlaces =n- n/2 ;
        return (power(5, numberOfEvenPlaces) * power(4, numberOfOddPlaces))%mod;
    }
};//T.C=O(logN) && S.C=O(logN)