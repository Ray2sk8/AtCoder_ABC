#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, M;
    cin >> N >> M;
    vector<string> str(N);
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }

    int ans = N;
    // 組み合わせを調べる
    for (int mask = 0; mask < (1 << N); mask++) {
        vector<bool> all(M);
        int shopcount = 0;

        for (int i = 0; i < N; i++) {
            // 組み合わせにi番目の店は入っているのか？
            if (mask & (1 << i)) {
                // 入っている時
                shopcount++;
                for (int j = 0; j < M; j++) {
                    if (str[i][j] == 'o') {
                        all[j] = true;
                    }
                }
            }
        }

        // 買ったPOPを数える
        int c = 0;
        for (int i = 0; i < M; i++) {
            if (all[i]) {
                c++;
            }
        }

        if (c == M) {
            ans = min(ans, shopcount);
        }
    }

    cout << ans << endl;

    return 0;
}