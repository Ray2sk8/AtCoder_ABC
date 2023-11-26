#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
int dp[200010][2];
void DP7() {
    string s;
    cin >> s;
    dp[0][0] = 1;
    dp[1][0] = (s[0] != s[1]) * 2;
    dp[1][1] = 1;
    for (int i = 2; i < s.size(); i++) {
        if (s[i] != s[i - 1])
            dp[i][0] = dp[i - 1][0] + 1;
        dp[i][0] = max(dp[i][0], dp[i - 1][1] + 1);
        if (i > 2 && (s[i] != s[i - 2] || s[i - 1] != s[i - 3]))
            dp[i][1] = dp[i - 2][1] + 1;
        dp[i][1] = max(dp[i][1], dp[i - 2][0] + 1);
    }
    cout << max(dp[s.size() - 1][0], dp[s.size() - 1][1]);
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    DP7();
    return 0;
}
