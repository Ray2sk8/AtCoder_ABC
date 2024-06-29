#include <bits/stdc++.h>

using namespace std;
using ll = long long;

vector<vector<char>> ans(800, vector<char>(800, '.'));
// void shiro(int N, int x, int y) {

//     for (int i = x + 1; i <= x + N; i++) {
//         for (int j = y + 1; j <= y + N; j++) {
//             ans[i][j] = '.';
//         }
//     }
// }

void solve(int N, int x, int y) {
    // Lv.N, x,y 始まり
    int length = int(pow(3, N - 1));
    int all_length = int(pow(3, N));
    // 真っ白
    // shiro(length, length + x, length + y);
    // 黒塗り
    if (N == 1) {
        for (int i = x; i <= x + all_length - 1; i++) {
            for (int j = y; j <= y + all_length - 1; j++) {
                if (i == x + 1 && j == y + 1) {
                    continue;
                }
                ans[i][j] = '#';
            }
        }
    } else if (N >= 2) {
        // 調査
        solve(N - 1, x, y);
        solve(N - 1, x + length, y);
        solve(N - 1, x + length * 2, y);

        solve(N - 1, x, y + length);
        solve(N - 1, x + length * 2, y + length);

        solve(N - 1, x, y + length * 2);
        solve(N - 1, x + length, y + length * 2);
        solve(N - 1, x + length * 2, y + length * 2);
    }
}

int main() {
    int N;
    cin >> N;
    // corner case
    if (N == 0) {
        cout << "#" << endl;
        return 0;
    }

    // length
    int length = int(pow(3, N));

    // 解答
    solve(N, 1, 1);

    // answer
    for (int i = 1; i <= length; i++) {
        for (int j = 1; j <= length; j++) {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}