#include <iostream>
#include <climits>
using namespace std;

int N;
int cost[15][15];
int dp[1 << 12][12]; 

int main() {
    int T;
    cin >> T;

    while (T--) {
        cin >> N;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cin >> cost[i][j];
            }
        }

        int FULL_MASK = (1 << N);

        for (int mask = 0; mask < FULL_MASK; mask++) {
            for (int i = 0; i < N; i++) {
                dp[mask][i] = INT_MAX;
            }
        }

        dp[1][0] = 0; 

        for (int mask = 1; mask < FULL_MASK; mask++) {
            for (int u = 0; u < N; u++) {
                if (!(mask & (1 << u))) continue; 
                if (dp[mask][u] == INT_MAX) continue;

                for (int v = 0; v < N; v++) {
                    if (mask & (1 << v)) continue; 
                    if (cost[u][v] == 0) continue; 

                    int nextMask = mask | (1 << v);
                    int newCost = dp[mask][u] + cost[u][v];
                    if (newCost < dp[nextMask][v]) {
                        dp[nextMask][v] = newCost;
                    }
                }
            }
        }

        int ans = INT_MAX;
        for (int i = 1; i < N; i++) {
            if (cost[i][0] == 0) continue; 
            if (dp[FULL_MASK - 1][i] == INT_MAX) continue;
            int total = dp[FULL_MASK - 1][i] + cost[i][0];
            if (total < ans) ans = total;
        }

        if (ans == INT_MAX)
            cout << "-1\n";
        else
            cout << ans << "\n";
    }

    return 0;
}
