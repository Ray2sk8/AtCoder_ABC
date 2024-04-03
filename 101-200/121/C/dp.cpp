#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ull = unsigned long long;

const ll max_value = LONG_LONG_MAX;

int main() {

    ll N, M;
    cin >> N >> M;

    ll A[N], B[N];
    for (int i = 1; i <= N; i++) {
        cin >> A[i] >> B[i];
    }

    ll dp[N + 1][M + 1];
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            dp[i][j] = max_value;
        }
    }

    // dp
    dp[0][0] = 0;
    for (ll i = 1; i <= N; i++) {
        for (ll j = 0; j <= M; j++) {
            if (dp[i - 1][j] == max_value) {
                continue;
            }

            // Bi 本まで買う
            for (ll k = 0; k <= B[i]; k++) {
                // 範囲外を除く
                if (j + k > M) {
                    break;
                }
                dp[i][j + k] = min(dp[i][j + k], dp[i - 1][j] + A[i] * k);
            }
        }
    }

    cout << dp[N][M] << endl;

    return 0;
}