// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<vector<int>> a(60, vector<int>(60, 0));
vector<vector<int>> path(60, vector<int>(60, -1));
int N, M;

void pathing(int i, int j) {
    if (j >= N) {

    } else {
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
        for (int j = 0; j < N; j++) {
            pathing(i, j);
        }
    }

    int ans = 0;
    for (int i = 1; i <= M; i++) {
        for (int j = i + 1; j <= N; j++) {
            // cout << path[i][j] << " ";
            if (path[i][j] == -1) {
                ans++;
            }
        }
        // cout << endl;
    }

    cout << ans << endl;

    return 0;
}
