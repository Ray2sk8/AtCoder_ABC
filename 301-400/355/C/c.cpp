#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, T;
    cin >> N >> T;

    vector<vector<bool>> bg(N, vector<bool>(N, false));
    vector<int> A(T + 1);
    for (int i = 1; i <= T; i++) {
        cin >> A[i];
    }

    vector<pair<int, int>> xy(N + 1);
    // bingo x,y
    for (int i = 1; i <= T; i++) {
        xy[i].first = A[i] / N;
        xy[i].second = A[i] % N;
    }

    bool flg = false;
    // int ans = 0;
    int cnt = 0;
    while (flg == false && cnt <= T) {
        cnt++;
        int x = xy[cnt].first;
        int y = xy[cnt].second;
        bg[x][y] = true;
        if (cnt <= N) {
            continue;
        }

        // たて
        for (int i = 0; i < N; i++) {
            int bg_n = 0;
            for (int j = 0; j < N; j++) {
                if (bg[i][j] == true) {
                    bg_n++;
                }
                // bing check
                if (bg_n == N) {
                    flg = true;
                }
            }
        }

        // よこ
        for (int i = 0; i < N; i++) {
            int bg_n = 0;
            for (int j = 0; j < N; j++) {
                if (bg[j][i] == true) {
                    bg_n++;
                }
                // bing check
                if (bg_n == N) {
                    flg = true;
                }
            }
        }
        // ななめ
        for (int i = 0; i < N; i++) {
            int bg_n = 0;
            if (bg[i][i] == true) {
                bg_n++;
            }
            // bing check
            if (bg_n == N) {
                flg = true;
            }
        }
        for (int i = 0; i < N; i++) {
            int bg_n = 0;
            if (bg[i][N - i] == true) {
                bg_n++;
            }
            // bing check
            if (bg_n == N) {
                flg = true;
            }
        }
    }

    if (flg) {
        cout << cnt << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}