// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll A, B, M;
    cin >> A >> B >> M;

    vector<int> ai(A + 1);
    vector<int> bi(B + 1);
    vector<vector<int>> c(M + 1, vector<int>(3, 0));

    for (int i = 1; i <= A; i++) {
        cin >> ai[i];
    }
    for (int i = 1; i <= B; i++) {
        cin >> bi[i];
    }
    for (int i = 1; i <= M; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> c[i][j];
        }
    }

    ll ans = 1e8;

    for (int i = 1; i <= M; i++) {
        ll sum = ai[c[i][0]] + bi[c[i][1]] - c[i][2];
        ans = min(ans, sum);
    }
    sort(ai.begin(), ai.end());
    sort(bi.begin(), bi.end());
    ll x = ai[1]+bi[1];
    ans = min(ans,  x);

    cout << ans << endl;

    return 0;
}
