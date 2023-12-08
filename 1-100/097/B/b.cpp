// #include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll X, x;
    cin >> X;

    ll mid = -1;
    for (ll i = 0; i <= X; i++) {
        if (X <= i * i) {
            mid = i;
            if (X < mid * mid) {
                mid = i - 1;
            }
            break;
        }
    }

    ll ans = 1;
    for (ll j = mid; j > 1; j--) {
        //低を探索
        for (ll i = X; i > 0; i--) {
            //最大の累乗を探索
            x = i;
            // cout << "X:" << i << " mid:" << j << " ans:" << ans << endl;
            if (j * j <= i) {
                // 低の二乗が調べる値よりも大きい
                while (x % j == 0) {
                    //cout << "X:" << i << " j:" << j << " ans:" << ans << endl;
                    // 割れるとき
                    if (x == j) {
                        // 解である。条件を満たす
                        ans = max(ans, i);
                        break;
                    } else if (x != j) {
                        // 割れる場合
                        x = x / j;
                    }
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}
