#include <bits/stdc++.h>

using namespace std;

int solution(vector<int>& A, vector<int>& B, int N) {
    vector<vector<int>> dp(2, vector<int>(N, INT_MAX));
    dp[0][0] = A[0];
    dp[1][0] = B[0];

    for (int j = 1; j < N; ++j) {
        dp[0][j] = min(dp[0][j - 1], A[j]);
        dp[1][j] = min(dp[1][j - 1], B[j]);
    }

    for (int i = 1; i < 2; ++i) {
        for (int j = 1; j < N; ++j) {
            dp[i][j] = min(dp[i][j], max(dp[i - 1][j], dp[i][j - 1]));
        }
    }

    return min(dp[0][N - 1], dp[1][N - 1]);
}

int main() {
    vector<int> A = {-5,-1,-3};
    vector<int> B = {-5,5,-2};
    int N = A.size();
    cout << "Maximum value on the optimal path: " << solution(A, B, N) << endl;
    return 0;
}
