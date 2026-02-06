#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

// Function to compute modular exponentiation
long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to compute modular inverse using Fermat's Little Theorem
long long mod_inverse(long long a, long long mod) {
    return mod_pow(a, mod - 2, mod);
}

// Precompute factorials and their inverses up to the given limit
void precompute_factorials_and_inverses(int limit, vector<long long>& fact, vector<long long>& inv_fact) {
    fact[0] = fact[1] = 1;
    for (int i = 2; i <= limit; ++i) {
        fact[i] = fact[i-1] * i % MOD;
    }
    inv_fact[limit] = mod_inverse(fact[limit], MOD);
    for (int i = limit - 1; i > 0; --i) {
        inv_fact[i] = inv_fact[i + 1] * (i + 1) % MOD;
    }
    inv_fact[0] = 1;
}

// Compute binomial coefficient nCk % mod
long long binomial_coefficient(int n, int k, const vector<long long>& fact, const vector<long long>& inv_fact) {
    if (n < k || k < 0) {
        return 0;
    }
    return fact[n] * inv_fact[k] % MOD * inv_fact[n - k] % MOD;
}

int main() {
    int N, C, V;
    cin >> N >> C >> V;

    vector<long long> fact(C + 1);
    vector<long long> inv_fact(C + 1);
    
    precompute_factorials_and_inverses(C, fact, inv_fact);

    long long total_ways = 0;
    for (int i = V; i <= C; ++i) {
        total_ways = (total_ways + binomial_coefficient(C, i, fact, inv_fact)) % MOD;
    }

    cout << total_ways << endl;

    return 0;
}
/*"meeting people frequently is the surest way to get re-elected" advised the party president . Margaret ,one of the party's elected representatives ,decided to take the advice seriously and went on a tour of her constituency. one day she came across a particular street ,where there  where N houses. instead of visiting every house ,which would take a lot of time ,she decided to   randomly visit at least V out of each C consecutive houses on street .
before starting off ,she is wondering if there are multiple ways to select the houses for this 'meet & greet' .write a program to help Margaret know how many different ways she can visit the houses .
read the input from STDIN and print the output to STDOUT .do not write arbitrary string  anywhere in the program in C++  ,as these contribute to the standard output and test cases will fail.
Constraints:
1<=N<=10^9
1<=V<=C<=N

Input format:
a single line of input contains three space separated integers N,C & V.
output format:
output should contain a single integer denoting the possible numbers of ways to visit the houses . as the number can get exponentially huge ,return its modulo (10^9) +7.*/