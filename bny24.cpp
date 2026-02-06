#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int vowelSubstring(const string& s) {
    int n = s.length();
    int vowelCount = 0;
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int vowelStartIndex = -1;
    int result = 0;

    for (int i = 0; i < n; ++i) {
        if (vowels.count(s[i])) {
            if (vowelStartIndex == -1) {
                vowelStartIndex = i;
            }
            vowelCount++;
        } else {
            if (vowelCount == vowels.size()) {
                // Found a qualifying substring
                int substringLength = i - vowelStartIndex;
                result += (substringLength * (substringLength + 1)) / 2;
            }
            vowelStartIndex = -1;
            vowelCount = 0;
        }
    }

    // Check for a qualifying substring at the end
    if (vowelCount == vowels.size()) {
        int substringLength = n - vowelStartIndex;
        result += (substringLength * (substringLength + 1)) / 2;
    }

    return result;
}

int main() {
    string s;
    cin >> s;

    int result = vowelSubstring(s);
    cout << result << endl;

    return 0;
}