
// #include <bits/stdc++.h>
// using namespace std;

// struct Point {
//     int r, c;
// };

// int N, C;
// int region[22][22];
// int visited[22][22];
// vector<Point> rare; 

// int dr[] = {-1, 1, 0, 0}; 
// int dc[] = {0, 0, -1, 1};

// int bfs(int sr, int sc) {
//     memset(visited, 0, sizeof(visited));

//     queue<Point> q;
//     visited[sr][sc] = 1;  
//     q.push({sr, sc});

//     while (!q.empty()) {
//         Point cur = q.front();
//         q.pop();

//         for (int d = 0; d < 4; d++) {
//             int nr = cur.r + dr[d];
//             int nc = cur.c + dc[d];

//             if (nr >= 1 && nr <= N && nc >= 1 && nc <= N &&
//                 visited[nr][nc] == 0 && (region[nr][nc] == 1 || region[nr][nc] == 3)) {
//                 visited[nr][nc] = visited[cur.r][cur.c] + 1;
//                 q.push({nr, nc});
//             }
//         }
//     }

//     int maxDist = 0;
//     for (auto &p : rare) {
//         if (visited[p.r][p.c] == 0)  
//             return INT_MAX;
//         maxDist = max(maxDist, visited[p.r][p.c]);
//     }
//     return maxDist;
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int T;
//     cin >> T;

//     for (int tc = 1; tc <= T; tc++) {
//         cin >> N >> C;
//         rare.clear();

//         for (int i = 0; i < C; i++) {
//             int x, y;
//             cin >> x >> y;
//             rare.push_back({x, y});
//         }

//         for (int i = 1; i <= N; i++) {
//             for (int j = 1; j <= N; j++) {
//                 cin >> region[i][j];
//             }
//         }

//         for (auto &p : rare)
//             region[p.r][p.c] = 3;

//         int Answer = INT_MAX;

//         for (int i = 1; i <= N; i++) {
//             for (int j = 1; j <= N; j++) {
//                 if (region[i][j] == 1) {
//                     int val = bfs(i, j);
//                     if (val != INT_MAX)
//                         Answer = min(Answer, val);
//                 }
//             }
//         }

//         cout << "#" << tc << " " << (Answer - 1) << "\n";
//     }

//     return 0;
// }









#include <bits/stdc++.h>
using namespace std;

struct Point {
    int r, c;
};

int N, C;
int region[22][22];
vector<Point> rare;

int dr[] = {-1, 1, 0, 0};
int dc[] = {0, 0, -1, 1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        cin >> N >> C;
        rare.clear();

        for (int i = 0; i < C; i++) {
            int x, y;
            cin >> x >> y;
            rare.push_back({x, y});
        }

        for (int i = 1; i <= N; i++)
            for (int j = 1; j <= N; j++)
                cin >> region[i][j];

        for (auto &p : rare)
            region[p.r][p.c] = 3;

        static int dist[22][22][22];
        memset(dist, 0, sizeof(dist));

        for (int k = 0; k < C; k++) {
            queue<Point> q;
            int visited[22][22] = {};
            auto start = rare[k];
            visited[start.r][start.c] = 1;
            q.push(start);

            while (!q.empty()) {
                auto cur = q.front(); q.pop();
                dist[k][cur.r][cur.c] = visited[cur.r][cur.c];

                for (int d = 0; d < 4; d++) {
                    int nr = cur.r + dr[d];
                    int nc = cur.c + dc[d];
                    if (nr >= 1 && nr <= N && nc >= 1 && nc <= N &&
                        !visited[nr][nc] && (region[nr][nc] == 1 || region[nr][nc] == 3)) {
                        visited[nr][nc] = visited[cur.r][cur.c] + 1;
                        q.push({nr, nc});
                    }
                }
            }
        }

        int Answer = INT_MAX;

        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (region[i][j] == 1) {
                    int maxDist = 0;
                    bool unreachable = false;

                    for (int k = 0; k < C; k++) {
                        if (dist[k][i][j] == 0) { 
                            unreachable = true;
                            break;
                        }
                        maxDist = max(maxDist, dist[k][i][j]);
                    }

                    if (!unreachable)
                        Answer = min(Answer, maxDist);
                }
            }
        }

        cout << "#" << tc << " " << (Answer - 1) << "\n";
    }

    return 0;
}
