/**
 * @file d4.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-04-02
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define INF (long long)2e+18

int main() {
    long long n, m, b, ans = INF;
    cin >> n >> m;
    for (long long i = 1; i <= n; i++) {
        b = (m + i - 1) / i;
        ll x = i * b;
        cout << "  a:" << i << " b:" << b; //<< endl;
        cout << " x:" << x << endl;
        if (b <= n) {
            ans = min(ans, x);
        }
        if (i > b) {
            break;
        }
    }

    if (ans == INF)
        cout << -1 << endl;
    else
        cout << ans << endl;
    return 0;
}
