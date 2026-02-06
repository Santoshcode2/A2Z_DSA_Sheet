#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
#include <string>

using namespace std;

string solution(string &forth) {
    unordered_map<char, vector<int>> directions = {
        {'N', {-1, 0}}, {'W', {0, -1}}, {'E', {0, 1}}, {'S', {1, 0}}
    };

    int n = forth.length();
    vector<vector<int>> vis(2 * n + 1, vector<int>(2 * n + 1, 0));

    
    vector<int> start = {n, n};
    vector<int> curr = start;

    
    for (char move : forth) {
        curr[0] += directions[move][0];
        curr[1] += directions[move][1];
        vis[curr[0]][curr[1]] = 1;
    }
    vector<int> destination = curr;

    
    queue<pair<vector<int>, string>> q;
    q.push({destination, ""});
    vis[destination[0]][destination[1]] = 1;

    while (!q.empty()) {
        auto p = q.front();
        q.pop();
        vector<int> pos = p.first;
        string path = p.second;

        if (pos == start) return path;

        for (const auto &entry : directions) {
            char key = entry.first;
            vector<int> d = entry.second;
            int new_r = pos[0] + d[0], new_c = pos[1] + d[1];

            if (new_r >= 0 && new_r < vis.size() && new_c >= 0 && new_c < vis[0].size() && vis[new_r][new_c] == 0) {
                q.push({{new_r, new_c}, path + key});
                vis[new_r][new_c] = 1;
            }
        }
    }
    return "";
}
