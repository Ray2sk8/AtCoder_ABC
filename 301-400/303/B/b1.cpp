// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<vector<int>> a(60, vector<int>(60, 0));
int N, M;

int main() {

    // 入力

    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            cin >> a[i][j];
        }
    }

    int ans = 0;

    for (int i = 1; i <= N; i++) {
        for (int j = i + 1; j <= N; j++) {
            //  横に並ぶ数字の列挙
            bool ok = false;

            for (int k = 0; k < M; k++) {
                for (int l = 0; l < N - 1; l++) {
                    // 列aから満たすものを見つける
                    if ((a[k][l] == i && a[k][l + 1] == j) ||
                        (a[k][l] == j && a[k][l + 1] == i)) {
                        ok = true;
                    }
                }
            }
            if (!ok) {
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
