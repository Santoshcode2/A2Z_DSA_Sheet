#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

// Helper function to check if a number is modest
bool isModest(int num, unordered_map<string, bool>& dp) {
    string str_num = to_string(num);
    int len = str_num.length();

    // Iterate through possible partitions
    for (int i = 1; i < len; ++i) {
        int left_part = stoi(str_num.substr(0, i));
        int right_part = stoi(str_num.substr(i));

        // Check modest condition
        if (right_part != 0 && num % right_part == left_part) {
            return true; // Found a valid partition
        }
    }
    return false; // No valid partition found
}

void findModestNumbers(int M, int N) {
    bool found = false;
    unordered_map<string, bool> dp; // Memoization map

    // Iterate through the range [M, N]
    for (int num = M; num <= N; ++num) {
        // Check if we've already computed modestity for this number
        if (dp.find(to_string(num)) != dp.end()) {
            if (dp[to_string(num)]) {
                cout << num << " ";
                found = true;
                continue;
            }
        }

        // Check modest condition
        if (isModest(num, dp)) {
            cout << num << " ";
            found = true;
            dp[to_string(num)] = true; // Mark as modest
        } else {
            dp[to_string(num)] = false; // Mark as not modest
        }
    }

    if (!found) {
        cout << "No modest numbers found within the range";
    }
}

int main() {
    int M, N;
    cin >> M >> N;

    findModestNumbers(M, N);

    return 0;
}
