#include <algorithm>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

using namespace std;

const int INF = 1e6;

string S, T;

bool isMatching(const string str, int cnt, const string s) {
    // str の cnt 番目の位置から s と一致するかを確認する
    int n = s.length();
    for (int i = 0; i < n; ++i) {
        if (cnt + i >= str.length() || str[cnt + i] != s[i]) {
            // str の範囲外に出るか、文字が一致しない場合は false を返す
            return false;
        }
    }
    // すべての文字が一致した場合は true を返す
    return true;
}

int main() {
    cin >> T;

    int N;
    cin >> N;

    int A[N + 1];

    string S[N + 1][10];
    for (int i = 0; i <= N + 1; ++i) {
        for (int j = 0; j <= 10; j++) {
            S[i][j] = '\0';
        }
    }

    for (int i = 1; i <= N; i++) {
        cin >> A[i];
        for (int j = 1; j <= A[i]; j++) {
            cin >> S[i][j];
        }
    }

    vector<vector<int>> dp(N + 1, vector<int>(T.size() + 1, INF));

    // dp
    dp[0][0] = 0;
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= T.size(); ++j) {
            if (dp[i][j] == INF) {
                continue;
            }

            if (i + 1 > N + 1) {
                // i+ 1がない
                continue;
            }
            if (isMatching(T, j, S[A[i + 1]][j])) {
                // true
                dp[i + 1][j + S[A[i]][j].size()] =
                    min(dp[i][j] + 1, dp[i + 1][j + S[A[i]][j].size()]);
            }

            // 下のやつ
            dp[i + 1][j] = min(dp[i][j], dp[i + 1][j]);
        }
    }

    if (dp[N + 1][T.size() + 1] == INF) {
        cout << -1 << endl;
    } else {
        cout << dp[N + 1][T.size() + 1] << endl;
    }

    return 0;
}
