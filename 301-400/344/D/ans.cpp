#include <bits/stdc++.h>

using namespace std;

int dp[105][105];

int main() {
    for (int i = 0; i < 105; i++) {
        for (int j = 0; j < 105; j++) {
            dp[i][j] = 1e9;
        }
    }
    dp[0][0] = 0;

    string t;
    cin >> t;
    int tl = t.size();
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 105; j++) {
            dp[i + 1][j] = dp[i][j];
        }

        int m;
        cin >> m;
        while (m > 0) {
            m--;
            string s;
            cin >> s;
            int sl = s.size();
            for (int j = 0; j + sl <= tl; j++) {
                bool ok = true;
                for (int k = 0; k < sl; k++) {
                    if (t[j + k] != s[k]) {
                        ok = false;
                        break;
                    }
                }

                if (ok) {
                    dp[i + 1][j + sl] = min(dp[i + 1][j + sl], dp[i][j] + 1);
                }
            }
        }
    }

    if (dp[n][tl] > 5e8) {
        dp[n][tl] = -1;
    }
    cout << dp[n][tl] << "\n";
    return 0;
}
