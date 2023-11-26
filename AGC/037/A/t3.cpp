#include <bits/stdc++.h>

using namespace std;

const int maxn = 2e5 + 10;
int n, dp[maxn][2];
string s;

void solve() {
    s = '#' + s;
    dp[1][0] = 1;
    for (int i = 2; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            dp[i][0] = max(dp[i - 1][1], dp[i - 1][0]) + 1;
            dp[i][1] = dp[i - 2][0] + 1;
            string s1 = "";
            s1 += s[i - 1] + s[i];
            string s2 = "";
            if (i - 3 >= 1) {
                s2 += s[i - 3] + s[i - 2];
                if (s1 != s2)
                    dp[i][1] = max(dp[i - 2][1], dp[i][1]);
            }
        } else {
            dp[i][0] = max(dp[i - 1][1] + 1, dp[i - 2][0] + 1);
            dp[i][1] = dp[i - 2][0] + 1;
            string s1 = "";
            s1 += s[i - 1] + s[i];
            string s2 = "";
            if (i - 3 >= 1) {
                s2 += s[i - 3] + s[i - 2];
                if (s1 != s2)
                    dp[i][1] = max(dp[i - 2][1], dp[i][1]);
            }
        }
    }
    cout << max(dp[s.size() - 1][0], dp[s.size() - 1][1]) << endl;
}

int main() {
    cin >> s;
    solve();
    return 0;
}
