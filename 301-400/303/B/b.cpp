// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<vector<int>> a(60, vector<int>(60, 0));
vector<vector<int>> path(60, vector<int>(60, 0));
int N, M;

void pathing(int i, int j) {
    if (j < N - 1) {
        path[a[i][j]][a[i][j + 1]] = 1;
        path[a[i][j + 1]][a[i][j]] = 1;
    }
    return;
}

int main() {

    // 入力

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N-1; j++) {
            //隣り合うaijでpathを埋める
            pathing(i, j);
        }
    }

    int ans = 0;
    for (int i = 1; i <= M; i++) {
        for (int j = i + 1; j <= N; j++) {
            // cout << path[i][j] << " ";
            if (path[i][j] == 0) {
                ans++;
            }
        }
        // cout << endl;
    }

    cout << ans << endl;

    return 0;
}
