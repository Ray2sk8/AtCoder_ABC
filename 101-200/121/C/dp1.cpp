// #include <bits/stdc++.h>

// using namespace std;
// using ll = long long;

// const ll INF = LLONG_MAX;

// int main() {
//     ll N, M;
//     cin >> N >> M;

//     vector<ll> A(N), B(N);
//     for (int i = 0; i < N; i++) {
//         cin >> A[i] >> B[i];
//     }

//     vector<vector<ll>> dp(N + 1, vector<ll>(M + 1, INF));
//     dp[0][0] = 0;

//     for (int i = 0; i < N; i++) {
//         for (int j = 0; j <= M; j++) {
//             dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
//             for (int k = 1; k <= B[i]; k++) {
//                 if (j + k <= M) {
//                     dp[i + 1][j + k] =
//                         min(dp[i + 1][j + k], dp[i][j] + A[i] * k);
//                 }
//             }
//         }
//     }

//     cout << dp[N][M] << endl;

//     return 0;
// }
