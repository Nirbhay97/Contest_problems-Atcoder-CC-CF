#include <iostream>
#include <vector>
using namespace std;

const int MOD = 998244353;

void dfs(int u, vector<vector<int>>& graph, vector<bool>& visited, vector<int>& count, int group, vector<int>& A) {
    visited[u] = true;
    count[group] += A[u];
    for (int v : graph[u]) {
        if (!visited[v]) {
            dfs(v, graph, visited, count, group, A);
        }
    }
}

int friendshipPower(int group, vector<int>& count) {
    return (1LL * count[group] * (count[group] - 1)) / 2;
}

int maxFriendshipPower(int T, int N, int M, vector<vector<int>>& roads, vector<int>& A) {
    vector<vector<int>> graph(N);
    for (int i = 0; i < M; ++i) {
        int u = roads[i][0] - 1;
        int v = roads[i][1] - 1;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int max_power = 0;
    for (int t = 0; t < T; ++t) {
        vector<int> permutation(N);
        for (int i = 0; i < N; ++i) {
            cin >> permutation[i];
        }

        vector<int> count(N, 0);
        vector<bool> visited(N, false);
        int num_kingdoms = 0;

        for (int i = 0; i < N; ++i) {
            int city = permutation[i] - 1;
            if (!visited[city]) {
                ++num_kingdoms;
                dfs(city, graph, visited, count, num_kingdoms - 1, A);
            }
        }

        int total_power = 0;
        for (int i = 0; i < num_kingdoms; ++i) {
            total_power += friendshipPower(i, count);
        }

        max_power = max(max_power, total_power);
    }

    return max_power % MOD;
}

int main() {
    int T = 2;
    int N = 5;
    int M = 3;
    vector<vector<int>> roads = {{1, 2}, {1, 3}, {4, 5}};
    vector<int> A = {12, 2, 3, 2, 5};

    cout << maxFriendshipPower(T, N, M, roads, A) << endl; // Output: 32

    return 0;
}