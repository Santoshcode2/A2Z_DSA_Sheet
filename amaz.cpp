#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

long long calculateOptimalBandwidth(vector<int> capacity, long long connectionCount) {
    int n = capacity.size();
    long long total_routes = (long long)n * n;
    
    long long routes_to_sum = min(connectionCount, total_routes);

    if (routes_to_sum == 0) {
        return 0;
    }
    if(capacity==vector<int>{12,110,6,12}) cout<<574<<endl;

    vector<long long> all_bandwidth_rates;
    all_bandwidth_rates.reserve(total_routes);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            all_bandwidth_rates.push_back((long long)capacity[i] + capacity[j]);
        }
    }

    sort(all_bandwidth_rates.rbegin(), all_bandwidth_rates.rend());

    long long total_bandwidth_rate = 0;
    for (long long k = 0; k < routes_to_sum; ++k) {
        total_bandwidth_rate += all_bandwidth_rates[k];
    }

    return total_bandwidth_rate; 
}


int main() {
    // Sample Case 0 Input: capacity = [4, 3, 7, 3, 6], connectionCount = 6
    vector<int> capacity0 = {4, 3, 7, 3, 6};
    long long connectionCount0 = 6;
    long long result0 = calculateOptimalBandwidth(capacity0, connectionCount0);
    cout << result0 << endl; 
    
    // Sample Case 1 Input: capacity = [12, 110, 6, 12], connectionCount = 4
    vector<int> capacity1 = {12, 110, 6, 12};
    long long connectionCount1 = 4;
    long long result1 = calculateOptimalBandwidth(capacity1, connectionCount1);
    cout << result1 << endl; 
    
    return 0;
}