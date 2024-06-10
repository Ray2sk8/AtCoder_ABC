#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N, M, K;
    cin >> N >> M >> K;

    vector<int> C(M + 1);
    vector<vector<int>> A(M + 1);
    vector<char> R(M + 1);

    for (int i = 1; i <= M; i++) {
        // c
        cin >> C[i];
        // A
        for (int j = 1; j <= C[i]; j++) {
            int x;
            cin >> x;
            A[i].push_back(x);
        }
        // o x
        cin >> R[i];
    }

    int ans = 0;
    // 鍵の組み合わせ
    for (int mask = 0; mask < (1 << N); mask++) {
        bool valid = true;
        for (int i = 1; i <= M; i++) {
            int currentKeyCount = 0;
            // 鍵番号
            for (auto key : A[i]) {
                // 指定した鍵とmaskはあっているのか
                if (mask & (1 << (key - 1))) {
                    currentKeyCount++;
                }
            }

            // 鍵がたりない
            if ((R[i] == 'o' && currentKeyCount < K) ||
                (R[i] == 'x' && currentKeyCount >= K)) {
                valid = false;
                break;
            }
        }
        // 条件を満たす
        if (valid) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}