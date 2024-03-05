#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {

    int N;
    cin >> N;

    vector<vector<int>> A(2, vector<int>(N));
    vector<vector<int>> dp(2, vector<int>(N));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }

    // DP matching
    // initialize
    dp[0][0] = A[0][0];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 && j == 0) {
                continue;
            }

            // i=0 一番上
            if (i == 0) {
                dp[i][j] = max(dp[i][j - 1] + A[i][j], dp[i][j]);
            } else if (j == 0) {
                dp[i][j] = max(dp[i - 1][j] + A[i][j], dp[i][j]);
            } else {
                dp[i][j] = max(dp[i][j - 1] + A[i][j],
                               max(dp[i - 1][j] + A[i][j], dp[i][j]));
            }
        }
    }

    cout << dp[1][N - 1] << endl;

    return 0;
}