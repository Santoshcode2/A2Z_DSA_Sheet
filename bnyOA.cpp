#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int vowelSubstring(string s) {
    unordered_map<char, int> vowelMap = {{'a', 0}, {'e', 1}, {'i', 2}, {'o', 3}, {'u', 4}};
    vector<int> dp(32, 0); // DP table to store counts of different vowel states
    int state = 0; // State to keep track of vowels seen in binary form
    dp[0] = 1; // Empty state
    int result = 0;

    for (char c : s) {
        if (vowelMap.find(c) != vowelMap.end()) {
            // Update state by toggling the bit corresponding to the vowel
            state ^= (1 << vowelMap[c]);
        } else {
            // Reset state when a non-vowel character is encountered
            state = 0;
            dp = vector<int>(32, 0); // Reset the DP table
            dp[0] = 1; // Reinitialize the empty state
            continue;
        }

        // If the current state has all vowels, increment result by the number of times this state has been seen
        if (state == 31) {
            result += dp[state];
        }

        // Increment the count of the current state
        result += dp[state];
        dp[state]++;
    }

    return result;
}

int main() {
    string s = "aaeiouxa";
    cout << "Number of valid substrings: " << vowelSubstring(s) << endl;
    return 0;
}
